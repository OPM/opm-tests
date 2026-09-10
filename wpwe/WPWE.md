# WPWE summary test cases

These cases exercise WPWE0-7 support from
[opm-common#5352](https://github.com/OPM/opm-common/pull/5352) and
[opm-simulators#7395](https://github.com/OPM/opm-simulators/pull/7395).
This is a cases-first change for review: no reference output is added or
updated, and the new cases are not yet registered in the regression suite.

## Existing cases

`../cecon/CECON-01.DATA` and `../cecon/CECON-02.DATA` retain their existing
reservoir, well and schedule inputs. Their summary includes now request WPWE0-7
for every well.
CECON-01 exercises gas-well water/gas-ratio limits; CECON-02 exercises oil-well
water-cut limits. They already cover CON, +CON, whole-well closure and manual
WELOPEN operations, which must not produce opening events.

The observed event sequence with the development build is:

| Case | Day | Well | Nonzero events |
| --- | ---: | --- | --- |
| CECON-01 | 1, 66 | B-1H | WPWE3=1 |
| CECON-01 | 41 | B-3H | WPWE7=1 |
| CECON-01 | 86, 123 | C-1H | WPWE2=1 |
| CECON-02 | 6, 17, 39 | B-1H | WPWE2=1 |
| CECON-02 | 29 | B-3H | WPWE3=1 |
| CECON-02 | 53 | C-1H | WPWE7=1 |
| CECON-02 | 72 | B-1H | WPWE2=1, WPWE3=1, WPWE7=1 |

All other WPWE values were zero, including WPWE1 around the manual reopens.
Fresh before/after runs with the same development binary gave identical values
for all 95 original summary vectors in CECON-01 (110 output rows) and all 145
in CECON-02 (114 rows). Each case gains 40 WPWE vectors.

## Focused cases

The cases in this directory reuse the CECON-02 reservoir and initial wells
through `include/wpwe-model.inc` and `include/wpwe-wells.inc`. The grid, fluid
and rock data are copies of the CECON-02 files rather than references into
`../cecon/include`, so this directory can be handed over on its own; no new
grid or property dataset is introduced. The cases live here rather than in
`cecon` because several of them contain no economic limit at all.

| Deck | Expected behavior |
| --- | --- |
| `WPWE-MIXED.DATA` | B-1H has one CON closure and one independent +CON closure in the first timestep: WPWE2=1 and WPWE3=1 together. Both reset on the next timestep. |
| `WPWE-SHUT-STOP.DATA` | B-1H loses all four connections: WPWE2=4, WPWE3=1 and WPWE7=1 despite STOP policy. B-2H has a whole-well workover with crossflow allowed: WPWE4=1. B-3H disallows crossflow: WPWE7=1 despite STOP policy. |
| `WPWE-ACTIONX.DATA` | B-1H converts to water injection after TIME>1, then back to production after TIME>5. WPWE6=1 on the first injecting timestep and WPWE5=1 on the first subsequent producing timestep, each exactly once and before the first report boundary at day 10. |
| `WPWE-UDQ-ACTIONX.DATA` | No WPWE vector is explicitly requested in SUMMARY. A CON closure makes FUEVENT=1 for one timestep; ACTIONX then sets FUFIRE=1, visible from the next summary row onward. This tests both UDQ and ACTIONX lookup of WPWE2. |
| `WPWE-WTEST.DATA` | First close all four B-1H connections: WPWE2=4, WPWE3=1 and WPWE7=1. Relax the limit without a manual reopen. Successful WTEST reopening produces WPWE1=4 once, then it resets. |

## Discriminating cases

The cases above pin behaviour that follows directly from the manual. The six
decks below exist for the opposite reason: the manual is silent or ambiguous,
Flow had to choose, and only a reference run settles it. Each deck isolates one
question, so a single vector on a single well decides it. No economic limit or
well test appears in a deck that asks about deck driven changes, and none of the
questions is confounded with another.

| Deck | Question | Well and vector | Flow reports | The alternative |
| --- | --- | --- | --- | --- |
| `WPWE-DECK-STATUS.DATA` | Does a deck driven status change count as an event? | B-1H WPWE7, B-2H WPWE4 | both 0 | 1 |
| `WPWE-DECK-STATUS.DATA` | Does a deck driven type conversion count? | B-3H WPWE6, C-1H WPWE5 | both 1, at day 1.5 | 0 |
| `WPWE-DECK-CONNECTIONS.DATA` | Do deck driven connection changes count? | B-1H WPWE2, B-2H WPWE1 | both 0, while the C-1H control reports WPWE2 = 5 | the number of connections changed |
| `WPWE-DECK-CONNECTIONS.DATA` | Is WPWE1 suppressed while the well is stopped? | B-3H WPWE1 against B-2H | 0 for both | B-2H nonzero, B-3H zero |
| `WPWE-CON-MIXED-CAUSE.DATA` | Must *every* connection have been closed by a CON workover for WPWE3? | B-1H WPWE3 against B-2H | B-1H 0, B-2H 1 | both 1 |
| `WPWE-COMPLUMP.DATA` | Are WPWE1 and WPWE2 counts of connections or of completions? | B-1H WPWE2 against B-2H | 2 against 1, so connections | 1, so completions |
| `WPWE-PLUSCON-ALL.DATA` | Does the +CON exclusion still hold when the workover closes the whole well? | B-1H WPWE2 against B-2H | B-1H 0, B-2H 6 | B-1H 6 |
| `WPWE-ACCUMULATE.DATA` | Are the indicators per timestep or per report interval? | WPWE2 at the report rows | 0 at day 10 and day 12 | 2 at day 10, 6 at day 12 |

Every value in the "Flow reports" column was measured with opm-common and
opm-simulators at the head of these branches; none of it is inferred from the
source. The exact times move with the timestep sequence, so compare the
sequence of nonzero rows, not the day numbers.

`WPWE-ACCUMULATE` is the one to read first, because it decides how every other
table here is interpreted. B-1H loses two connections on the first timestep of a
ten day report step; an ACTIONX tightens WECON on B-2H at day five and its limit
bites at day eleven, inside the following interval. Flow puts each event on the
ministep row that produced it and nothing on either report boundary:

```
   day      WPWE2:B-1H      WPWE2:B-2H
    0.100        2.000           0.000
     ...         0.000           0.000
   10.000        0.000           0.000     <- report boundary, silent
   11.000        0.000           6.000
   12.000        0.000           0.000     <- report boundary, silent
```

A simulator that accumulated over the report interval would show 2 at day ten
and 6 at day twelve instead. Nothing else in the suite separates the two,
because every other deck uses timesteps short enough that the readings coincide.
Read this deck before the others: if the reference accumulates, every table here
has to be re-read against report rows rather than ministep rows.

`WPWE-PLUSCON-ALL` pushes the WPWE2 exclusion to its limit: a '+CON' workover on
B-1H's topmost completion closes all four of its connections, and since every one
of them was closed by '+CON', the count that survives is zero -- B-1H reports
WPWE3 = 1 and WPWE7 = 1 with WPWE2 silent. B-2H reaches the same end state
through CON workovers, where all six of its connections are counted and WPWE2 =
6. A reference that reports a nonzero WPWE2 for B-1H means the exclusion is
narrower than the manual's wording suggests.

`WPWE-DECK-CONNECTIONS` expects silence from all three of its probe wells, which
would be indistinguishable from a run that failed to produce WPWE vectors at
all. C-1H is there as an internal control: a CECON CON workover closes its five
connections on the first timestep and it must report WPWE2 = 5, WPWE3 = 1 and
WPWE7 = 1. If the control is silent, the run says nothing about the probes.

The stopped well gate is answerable only if deck driven connection changes count
at all: if the reference reports nothing for them, B-2H and B-3H are both silent
for that reason and the gate stays untested. Flow's own gate is covered by
`WPWE-WTEST.DATA`, where the reopen is automatic.

The first two rows are the sharpest: Flow suppresses deck driven status and
connection changes but reports deck driven type conversions, and nothing in the
manual justifies the asymmetry. It is defensible only because a well type
conversion always comes from the deck or from ACTIONX, so gating it the same way
would leave WPWE5 and WPWE6 permanently zero. If the reference disagrees, that
choice is what has to change.

`WPWE-CON-MIXED-CAUSE` decides how strictly to read "all connections are closed
by CON workovers". B-1H has two connections shut from the deck and two closed by
CON workovers, and ends with nothing able to flow. Flow takes the strict
reading, so B-1H reports WPWE3 = 0 while B-2H, whose connections were all closed
by CON workovers, reports 1. A reference that gives both wells 1 means the
indicator only cares that the well ended up closed to the bottom.

## WECON coverage

The cases in this directory are all CECON: the connection level limits. The well
level WECON path is a different code path, and its workover loop re-evaluates
the well ratio and closes the next worst offender until the limit is honoured,
so a single WECON event can close several completions inside one timestep.

That path already has decks, in `../wecon_wtest`, and WPWE0-7 have been added to
the summary of the two that are registered as regression tests rather than
writing new ones:

| Deck | What it adds | Flow reports |
| --- | --- | --- |
| `wecon_wtest/3D_WECON.DATA` | PROD02 has a WECON CON workover and PROD01 a WELL workover, both re-tested by WTEST over 1500 days. | The workover loop reports every completion it closes, not just the first: PROD02 shows WPWE2 = 1 twice and WPWE2 = 2 four times. PROD01 reports WPWE7 = 1 on each of the five occasions the WELL workover shuts it. |
| `wecon_wtest/WECON_PLUSCON_COMPLUMP.DATA` | PROD2 combines WECON '+CON' with a COMPLUMP whose lumped completion is non-contiguous in wellbore order and spans four connections. | WPWE3 = 1 at day 25 and again with WPWE7 = 1 at day 135. WPWE2 stays zero throughout, because every closure here is '+CON' and therefore excluded. |

Note what the second row does *not* test. Because its workover is '+CON', WPWE2
is excluded by definition and the deck cannot separate a count of connections
from a count of completions however the lumping is arranged; `WPWE-COMPLUMP.DATA`,
which uses CON, is the deck that answers that. What the '+CON' case does test is
whether the exclusion survives an awkward lumping, and whether "below the
worst-offending completion" is measured from the offender's first or last
connection.

`3D_WECON` also supplies a question none of the purpose built decks reach. At
days 470 and 1460 PROD02 reports WPWE1 = 2, WPWE2 = 2, WPWE3 = 1 and WPWE7 = 1
on the *same* row: a WTEST re-opens the well and the economic limit closes it
again within one timestep. Flow reports both halves. A reference that nets them
to nothing, or reports only the closure, would say the indicators describe the
state at the end of the step rather than everything that happened during it.

Both cases have existing reference output, so both need the same regeneration as
CECON-01 and CECON-02.

Unlisted WPWE events should remain zero. WPWE0 is requested but remains zero;
these cases do not exercise unsupported drilling-queue functionality. WPWEM
is outside this change.

WPWE events are per **accepted timestep**, not per report interval. Do not add
RPTONLY or summary thinning: they can hide the event spikes. Exact event times
can vary with adaptive timestepping and parallel decomposition; check the event
counts and their alignment with well changes, not identical serial/MPI times.
The focused cases allow timestep cuts down to 1e-4 days for convergence.

## Running and checking

From this `wpwe` directory, run a build containing both source changes:

```sh
/path/to/flow_blackoil WPWE-MIXED.DATA --enable-tuning=true --output-dir=/tmp/wpwe-mixed
```

Substitute any deck above, using a separate output directory. The two WECON
cases live one directory up and `WECON_PLUSCON_COMPLUMP` needs `flow_oilwater`:

```sh
/path/to/flow_oilwater ../wecon_wtest/WECON_PLUSCON_COMPLUMP.DATA --output-dir=/tmp/wpwe-wpc
```

For a parallel check, prefix the command with `mpirun -np 2`.

Check the well actually changed state before reading any WPWE value. Every deck
that relies on an economic limit needs that limit to be violated, and a
simulator whose initialisation puts the ratio on the other side of the limit
will simply never fire the workover. All zeros then means "the workover did not
happen", not "the indicator is not reported", and the two are indistinguishable
from the WPWE vectors alone. `wpwe-summary.inc` requests WSTAT, WOPR, WWIR, WWCT
and WGOR for exactly this purpose: confirm from WSTAT that the well closed, or
from the workover messages in the PRT file, and only then compare the
indicators. The two deck driven cases are the exception -- they contain no
economic limit at all, and `WPWE-DECK-CONNECTIONS` has one only on its control
well, so the probes in both are unconditional.

The UDQ case intentionally requests only FUEVENT, FUFIRE and WOPR in SUMMARY.

All five focused cases completed and their event sequences were checked with
one and two MPI ranks using opm-common `91243fc9d` and opm-simulators
`7dc3684e6`. The six discriminating cases were re-run the same way and every one
of them produces an identical sequence of nonzero WPWE rows on one and on two
ranks, so a difference against the reference cannot be blamed on the
decomposition. No case here has been compared against commercial simulator
output; the discriminating cases were written to be sent for exactly that. Their
"Flow reports" columns were measured, not predicted, with `flow_blackoil` for
every deck except `WECON_PLUSCON_COMPLUMP`, which its regression entry runs with
`flow_oilwater`. These decks do not test restart continuation or deliberately
force timestep retries; the tracker unit tests cover retry bookkeeping.

## After case review

1. Refresh the SMSPEC and UNSMRY reference files of the four registered cases
   whose summary sections gained WPWE vectors: CECON-01 and CECON-02 under
   `../cecon/opm-simulation-reference/flow`, and `3D_WECON` and
   `WECON_PLUSCON_COMPLUMP` under `../wecon_wtest/opm-simulation-reference/flow`.
   Check that the pre-existing vectors are unchanged; do not replace unrelated
   reference outputs just to add WPWE.
2. Add reference outputs for the accepted cases in this directory using the
   normal opm-tests reference workflow.
3. Register them in `opm-simulators/regressionTests.cmake` with `DIR wpwe`,
   their deck filenames, `DEV_SIMULATOR flow_blackoil` and
   `--enable-tuning=true`, following the existing `cecon_01`/`cecon_02`
   entries.

Until those steps are complete, this branch is for inspecting and running the
cases, not a completed reference-update PR.
