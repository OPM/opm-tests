# WPWE summary test cases

These cases exercise WPWE0-7 support from
[opm-common#5352](https://github.com/OPM/opm-common/pull/5352) and
[opm-simulators#7395](https://github.com/OPM/opm-simulators/pull/7395).
This is a cases-first change for review: no reference output is added or
updated, and the new cases are not yet registered in the regression suite.

## Existing cases

`CECON-01.DATA` and `CECON-02.DATA` retain their existing reservoir, well and
schedule inputs. Their summary includes now request WPWE0-7 for every well.
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

The new cases reuse the CECON-02 reservoir and initial wells through
`include/wpwe-model.inc` and `include/wpwe-wells.inc`. Existing grid, fluid and
rock include files are shared; no new grid or property dataset is introduced.

| Deck | Expected behavior |
| --- | --- |
| `WPWE-MIXED.DATA` | B-1H has one CON closure and one independent +CON closure in the first timestep: WPWE2=1 and WPWE3=1 together. Both reset on the next timestep. |
| `WPWE-SHUT-STOP.DATA` | B-1H loses all four connections: WPWE2=4, WPWE3=1 and WPWE7=1 despite STOP policy. B-2H has a whole-well workover with crossflow allowed: WPWE4=1. B-3H disallows crossflow: WPWE7=1 despite STOP policy. |
| `WPWE-ACTIONX.DATA` | B-1H converts to water injection after TIME>1, then back to production after TIME>5. WPWE6=1 on the first injecting timestep and WPWE5=1 on the first subsequent producing timestep, each exactly once and before the first report boundary at day 10. |
| `WPWE-UDQ-ACTIONX.DATA` | No WPWE vector is explicitly requested in SUMMARY. A CON closure makes FUEVENT=1 for one timestep; ACTIONX then sets FUFIRE=1, visible from the next summary row onward. This tests both UDQ and ACTIONX lookup of WPWE2. |
| `WPWE-WTEST.DATA` | First close all four B-1H connections: WPWE2=4, WPWE3=1 and WPWE7=1. Relax the limit without a manual reopen. Successful WTEST reopening produces WPWE1=4 once, then it resets. |

Unlisted WPWE events should remain zero. WPWE0 is requested but remains zero;
these cases do not exercise unsupported drilling-queue functionality. WPWEM
is outside this change.

WPWE events are per **accepted timestep**, not per report interval. Do not add
RPTONLY or summary thinning: they can hide the event spikes. Exact event times
can vary with adaptive timestepping and parallel decomposition; check the event
counts and their alignment with well changes, not identical serial/MPI times.
The focused cases allow timestep cuts down to 1e-4 days for convergence.

## Running and checking

From this `cecon` directory, run a build containing both source changes:

```sh
/path/to/flow_blackoil WPWE-MIXED.DATA --enable-tuning=true --output-dir=/tmp/wpwe-mixed
```

Substitute any deck above, using a separate output directory. For a parallel
check, prefix the command with `mpirun -np 2`. Inspect the SMSPEC/UNSMRY vectors
against the table, and use WOPR/WWIR/WSTAT plus the simulator log to interpret
the transitions. The UDQ case intentionally requests only FUEVENT, FUFIRE and
WOPR in SUMMARY.

All five focused cases completed and their event sequences were checked with
one and two MPI ranks using opm-common `91243fc9d` and opm-simulators
`7dc3684e6`. The new focused cases have not been compared against commercial
simulator output. These decks do not test restart continuation or deliberately
force timestep retries; the tracker unit tests cover retry bookkeeping.

## After case review

1. Refresh the existing CECON-01/02 SMSPEC and UNSMRY reference files under
   `opm-simulation-reference/flow`, checking that the pre-existing vectors are
   unchanged. Do not replace unrelated reference outputs just to add WPWE.
2. Add reference outputs for the accepted focused cases using the normal
   opm-tests reference workflow.
3. Register those new cases in `opm-simulators/regressionTests.cmake`, using
   `DIR cecon`, their deck filenames, `DEV_SIMULATOR flow_blackoil` and
   `--enable-tuning=true`, following the existing `cecon_01`/`cecon_02` entries.

Until those steps are complete, this branch is for inspecting and running the
cases, not a completed reference-update PR.
