# LGR-FAULT: CARFIN boxes at a fault with throw

Grid: 12x10x6 corner-point, 300 ft cells, 20 ft layers, dip 0.02. One I-fault between I=6
and I=7; cells with I>=7 are moved down by the throw, which the deck name carries:
T00 = 0, T05 = 10 ft (half a layer), T15 = 30 ft, T30 = 60 ft. Fluid and rock data are
SPE1 (from `SPE1CASE1_CARFIN1.DATA`). A gas injector at (1,1) and a producer at (12,10)
make the flow cross the fault; no wells are inside the boxes.

`python3 gen_lgr_fault_decks.py` regenerates the decks and `include/LGR-FAULT-*.GRDECL`.

| Deck | Boxes |
|---|---|
| 01_T00/T05/T15/T30 | one box 3x3x2 (i4-6 j4-6 k2-4), its I+ side on the fault |
| 01B_T15 | same box, no K refinement |
| 02_T00/T05/T15/T30 | two boxes 3x3x1 touching across the fault |
| 02C_T15 | as 02, factors 3 and 6 |
| 03_T15 | two boxes on the same side along the fault, factors 3 and 6, sharing a J face |
| 04_T15 | nested box (factor 2) inside a 4x4x3 box on the fault |
| 05_T15 | box on the fault containing a thin layer that MINPV removes, PINCH on |
| 06_T30 | throw taller than the box; far-side hosts partly inactive |

Compare runs with `--enable-adaptive-time-stepping=false` and tight tolerances
(`--tolerance-cnv=1e-5 --tolerance-mb=1e-10 --tolerance-cnv-relaxed=1e-5`); at default
tolerances differences of a few 1e-3 in FGPR around gas breakthrough are noise.
