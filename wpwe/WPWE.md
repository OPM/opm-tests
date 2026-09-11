# WPWE summary test cases

These cases exercise WPWE0-7 support from
[opm-common#5352](https://github.com/OPM/opm-common/pull/5352) and
[opm-simulators#7395](https://github.com/OPM/opm-simulators/pull/7395).
This is a cases-first change for review: no reference output is added or
updated, and the new cases are not yet registered in the regression suite.

## Focused cases

The cases in this directory reuse the CECON-02 reservoir and initial wells
through `include/wpwe-model.inc` and `include/wpwe-wells.inc`. The grid, fluid
and rock data are copies of the CECON-02 files rather than references into
`../cecon/include`, so this directory can be handed over on its own; no new
grid or property dataset is introduced. The cases live here rather than in
`cecon` because several of them contain no economic limit at all.

| Deck | Measured behaviour | Run ends |
| --- | --- | ---: |
| `WPWE-MIXED.DATA` | B-1H carries a CON limit on completion 3 and a +CON limit on completion 4. The +CON fires first, at day 7.1 (WPWE3=1, WPWE2 silent), the CON at day 19.1 (WPWE2=1). Each is reported on its own timestep and reset on the next. | 38 |
| `WPWE-COMPLUMP.DATA` | COMPLUMP maps B-1H's four connections onto two completions. A CON workover closes the lower completion at day 13.1, both of its connections at once, and WPWE2 reads 2. C-1H closes a single connection at day 10.1 and reads 1. | 26 |
| `WPWE-DECK-STATUS.DATA` | Four deck driven changes on the same date. Only the two type conversions are reported, both at day 34: WPWE6 for B-3H and WPWE5 for C-1H. The WELOPEN SHUT on B-1H and the WCONPROD STOP on B-2H are silent. | 68 |
| `WPWE-SHUT-STOP.DATA` | B-1H loses its four connections to CON workovers at days 7.1, 19.1, 40.1 and 70.1, and on the last of those reports WPWE2=1, WPWE3=1 and WPWE7=1 together: nothing can flow, so the well shuts despite its STOP policy. C-1H disallows crossflow and a whole-well workover shuts it at day 10.1 (WPWE7=1). B-3H allows crossflow and the same workover merely stops it at day 28.1 (WPWE4=1). | 138 |
| `WPWE-UDQ-ACTIONX.DATA` | No WPWE vector is requested in SUMMARY. FUEVENT, a UDQ reading WPWE2 on B-1H, is 1 on exactly the four closure timesteps (days 7.1, 19.1, 40.1, 73.1) and 0 on every other row; an ACTIONX on the same condition latches FUFIRE from day 10.1. Shows the indicators reach UDQ and ACTIONX unrequested, and corroborates their one-timestep lifetime independently. | 144 |
| `WPWE-DRILLED.DATA` | B-1H, B-2H and B-3H exist from the start and never report WPWE0. C-1H enters through WELSPECS in February and reports WPWE0=1 at day 34; C-2H enters in April and reports it at day 94. | 188 |
| `WPWE-ACTIONX.DATA` | B-1H converts to water injection after TIME>45 and back to production after TIME>115. WPWE6=1 at day 49.1 and WPWE5=1 at day 118.1, each once, each inside a monthly report interval rather than on its boundary. | 242 |
| `WPWE-WTEST.DATA` | B-1H closes one connection at a time (days 7.1, 19.1, 40) and shuts at day 72 with WPWE2=1, WPWE3=1, WPWE7=1. The limit is then relaxed without any manual reopen and WTEST cycles the well: re-opened at day 87 (WPWE1=2) and closed again at 94, re-opened at 109 and closed at 115, re-opened at 130 with WPWE1=4. The only source of a nonzero WPWE1. | 260 |

## Discriminating cases

The cases above pin behaviour that follows directly from the manual. The six
decks below exist for the opposite reason: the manual is silent or ambiguous,
Flow had to choose, and only a reference run settles it. Each deck isolates one
question, so a single vector on a single well decides it. No economic limit or
well test appears in a deck that asks about deck driven changes, and none of the
questions is confounded with another.

| Deck | Question | Well and vector | Flow reports | The alternative |
| --- | --- | --- | --- | --- |
| `WPWE-DECK-STATUS.DATA` | Does a deck driven status change count as an event? | B-1H WPWE7, B-2H WPWE4 | both silent | 1 at day 34 |
| `WPWE-DECK-STATUS.DATA` | Does a deck driven type conversion count? | B-3H WPWE6, C-1H WPWE5 | both 1, at day 34 | silent |
| `WPWE-DECK-CONNECTIONS.DATA` | Do deck driven connection changes count? | B-1H WPWE2, B-2H WPWE1 | both silent, while the C-1H control reports WPWE2=1 at days 10.3, 34, 150 and 311 | the number of connections changed |
| `WPWE-DECK-CONNECTIONS.DATA` | Is WPWE1 suppressed while the well is stopped? | B-3H WPWE1 against B-2H | silent for both | B-2H nonzero, B-3H zero |
| `WPWE-CON-MIXED-CAUSE.DATA` | Must *every* connection have been closed by a CON workover for WPWE3? | C-1H WPWE3 against B-1H | B-1H shuts at day 74.6 with WPWE3=1; C-1H shuts at day 92.6 with WPWE7=1 and no WPWE3 | C-1H also reports WPWE3=1 |
| `WPWE-COMPLUMP.DATA` | Are WPWE1 and WPWE2 counts of connections or of completions? | B-1H WPWE2 against C-1H | 2 at day 13.1 against 1 at day 10.1, so connections | 1, so completions |
| `WPWE-PLUSCON-ALL.DATA` | Does the +CON exclusion still hold when the workover closes the whole well? | B-1H WPWE2 against C-1H | B-1H never reports WPWE2 across four +CON events (days 7.1, 19.1, 40, 72) while shutting; C-1H counts every CON closure (days 10.1, 37, 139, 280) | B-1H counts its closures too |
| `WPWE-ACCUMULATE.DATA` | Are the indicators per timestep or per report interval? | WPWE2 on the report rows | silent at every report boundary; the events sit at days 7.1, 19.1, 182 and 504 | nonzero at the boundary that follows each event |

Every value above was measured with opm-common and opm-simulators at the head
of these branches; none of it is inferred from the source. The limits are water
cut limits crossed as the wells water out, so the events fall across the run
rather than at its first timestep, and the exact times move with the timestep
sequence. Compare the sequence of nonzero rows against the well's WWCT and
WSTAT, not the day numbers.

`WPWE-ACCUMULATE` is the one to read first, because it decides how every other
table here is interpreted. B-1H loses two connections early, on days 7.1 and
19.1 of the January interval; an ACTIONX tightens WECON on C-1H at day 100 and
its limit bites at days 182 and 504, far from either end of the run. Flow puts
each event on the ministep row that produced it and nothing on any report
boundary:

```
   day   WPWE2:B-1H  WPWE2:C-1H
   7.112      1.000       0.000
  19.112      1.000       0.000
  31.000      0.000       0.000    <- report boundary, silent
 182.000      0.000       1.000
 486.000      0.000       0.000    <- report boundary, silent
 504.000      0.000       1.000
 517.000      0.000       0.000    <- report boundary, silent
```

A simulator that accumulated over the report interval would instead show 2 on
the 31 January row and 1 on each of the boundaries following days 182 and 504.
Nothing else in the suite separates the two readings, because every other case
is short enough that the events and the boundaries nearly coincide. Read this
deck first: if the reference accumulates, every table here has to be re-read
against report rows rather than ministep rows.

One caveat on this case. The event at day 182 falls exactly on the 01 July
report boundary, so that one cannot discriminate; the other three do.

`WPWE-PLUSCON-ALL` pushes the WPWE2 exclusion to its limit: a '+CON' workover on
B-1H closes it to the bottom four times over, and since every one of those
closures was made by '+CON', the count that survives is zero throughout: B-1H
reports WPWE3 on days 7.1, 19.1, 40 and 72, adds WPWE7 when it finally shuts,
and never reports WPWE2 at all. C-1H is the control, closing connections by CON
and counting every one. A reference that reports a nonzero WPWE2 for B-1H means
the exclusion is narrower than the manual's wording suggests.

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
by CON workovers". C-1H has three connections shut from the deck and two closed
by CON workovers, and ends with nothing able to flow at day 92.6. Flow takes the
strict reading, so C-1H reports WPWE7 without WPWE3, while B-1H, whose every
connection was closed by a CON workover, reports WPWE3 when it shuts at day
74.6. A reference that gives both wells WPWE3 means the indicator only cares
that the well ended up closed to the bottom.

## Not covered

The well level WECON path is a different code path from CECON, and its workover
loop re-evaluates the well ratio and closes the next worst offender until the
limit is honoured, so one WECON event can close several completions inside a
single timestep. `WPWE-ACCUMULATE.DATA` drives a WECON limit through ACTIONX but
only ever trips one completion at a time, so the loop itself is untested here.
Covering it means either a further case in this directory or requesting WPWE in
`../wecon_wtest`, which would put four registered regression cases through a
reference update; that was judged too steep a price for this change.

The same goes for a well test that re-opens a well and an economic limit that
closes it again within one timestep, where both halves are reported rather than
netted. Restart continuation is untested, and WPWEM is outside this change.

Unlisted WPWE events should remain zero. WPWE0 is covered by
`WPWE-DRILLED.DATA`: Flow supports neither QDRILL nor WDRILPRI, so the drilling
queue is out of reach and the indicator instead reports a well that WELSPECS
brings into the schedule during the run. Whether a reference also reports the
wells present at time zero is open. WPWEM is outside this change.

WPWE events are per **accepted timestep**, not per report interval. Do not add
RPTONLY or summary thinning: they can hide the event spikes. Exact event times
can vary with adaptive timestepping and parallel decomposition; check the event
counts and their alignment with well changes, not identical serial/MPI times.
The cases allow timestep cuts down to 1e-4 days for convergence.

Each case stops at roughly twice the day of its last event, so that it costs
little to run as a regression test. That margin is deliberate but thin: a
simulator whose water cut climbs at a different rate will reach the limits at
different times, and an event could fall past the end of the run. If a case
comes back with fewer events than the tables above, check WSTAT and the
connection water cuts at the final report step before concluding the indicator
is missing -- the run may simply have stopped too early, and the schedule can be
extended without changing anything else.

Three properties of this model shaped how the cases are built, and are worth
knowing before editing them. B-2H never waters out, so it can carry no water
cut limit. B-3H's deepest connection is already wet at time zero, so a limit
covering it fires on the first timestep rather than during the run. And a CON
workover is self limiting: closing a well's wet connections drops its water cut
back below the limit, so only B-1H, whose every connection waters out, closes
down completely.

## Running and checking

From this `wpwe` directory, run a build containing both source changes:

```sh
/path/to/flow_blackoil WPWE-MIXED.DATA --enable-tuning=true --output-dir=/tmp/wpwe-mixed
```

Substitute any deck above, using a separate output directory. Every case runs
with `flow_blackoil`. For a parallel check, prefix the command with
`mpirun -np 2`.

Check the well actually changed state before reading any WPWE value. Every deck
that relies on an economic limit needs that limit to be violated, and a
simulator whose initialisation puts the ratio on the other side of the limit
will simply never fire the workover. All zeros then means "the workover did not
happen", not "the indicator is not reported", and the two are indistinguishable
from the WPWE vectors alone. `wpwe-summary.inc` requests ALL together with the
connection ratios and rates -- CWCT, CGOR, CWGR, COPR, CWPR, CGPR and CPI -- for
exactly this purpose. CECON tests the *connection* water cut, not the well's, so
the connection vectors are what tie an event to its cause:

```
  day    CWCT(15,3,3)  CWCT(15,3,4)   WPWE3   WPWE2
  4.11        0.008        0.493        0       0
  7.11        0.043        0.718        1       0    <- deepest crosses 0.6, +CON
 10.11        0.158        0.000        0       0    <- that connection is closed
 19.11        0.671        0.000        0       1    <- next crosses 0.6, CON
```

Confirm from WSTAT or the connection ratios that the workover actually fired,
or read the messages in the PRT file, and only then compare the indicators. The two deck driven cases are the exception -- they contain no
economic limit at all, and `WPWE-DECK-CONNECTIONS` has one only on its control
well, so the probes in both are unconditional.

`WPWE-UDQ-ACTIONX.DATA` is the deliberate exception: it requests only FUEVENT,
FUFIRE and WOPR, because its purpose is to show that the indicators reach UDQ
and ACTIONX without being requested in SUMMARY at all.

All five focused cases completed and their event sequences were checked with
one and two MPI ranks using opm-common `91243fc9d` and opm-simulators
`7dc3684e6`. The six discriminating cases were re-run the same way and every one
of them produces an identical sequence of nonzero WPWE rows on one and on two
ranks, so a difference against the reference cannot be blamed on the
decomposition. No case here has been compared against commercial simulator
output; the discriminating cases were written to be sent for exactly that. Their
"Flow reports" columns were measured with `flow_blackoil`, not predicted. These
decks do not test restart continuation or deliberately force timestep retries;
the tracker unit tests cover retry bookkeeping.

## After case review

1. Add reference outputs for the accepted cases in this directory using the
   normal opm-tests reference workflow.
2. Register them in `opm-simulators/regressionTests.cmake` with `DIR wpwe`,
   their deck filenames, `DEV_SIMULATOR flow_blackoil` and
   `--enable-tuning=true`, following the existing `cecon_01`/`cecon_02`
   entries.

Until those steps are complete, this branch is for inspecting and running the
cases, not a completed reference-update PR.
