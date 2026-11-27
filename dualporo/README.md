# Dual-continuum runs

## Waterflood decks

`DP_BASIC`, `DK_BASIC`: oil-water waterflood on a 5x5x2 matrix grid with its 5x5x2 fracture grid,
dual porosity and dual permeability, block-centred. `DP_CP1`, `DK_CP1`: the same grid given as a
corner-point grid (`COORD`/`ZCORN`).

## Decks on the model1 grid

`BASE_MODEL_1` (`../model1`) turned into dual-porosity and dual-permeability decks with a
corner-point grid (`COORD`/`ZCORN`): tilted pillars, black oil, history-driven wells. The decks
are made for testing the dual-continuum model, not for modelling the reservoir. They have the
grid features that need care when there are two continua:

- inactive cells (`ACTNUM`), including cells that are inactive in one continuum only,
- thin cells (0.02 m) below the `PINCH` threshold (0.05 m), which are inactive and give pinch-out
  connections,
- cells with a low porosity (0.01) removed by `MINPV`, which give connections in the same way.

In the `_ALL` decks `PINCH` item 4 is `ALL` instead of the default `TOPBOT`: the connection
across removed cells is computed through every cell between the two active ones.

The unchanged includes are those of `../model1`; the files in `include/` are the ones that differ.

| Deck | Content |
|------|---------|
| `M1_SP`, `M1_SP_ALL` | single porosity reference with the features of the fracture continuum |
| `M1_DP`, `M1_DP_ALL` | `DUALPORO`, wells in the fracture layers, no coupling (`SIGMA 0`) |
| `M1_SPM`, `M1_SPM_ALL` | single porosity reference with the features and properties of the matrix continuum |
| `M1_DKM`, `M1_DKM_ALL` | `DUALPERM`, wells in the matrix layers, no coupling |
| `M1_DP_SIG`, `M1_DK_ALL_SIG` | `DUALPORO` / `DUALPERM` (`PINCH` item 4 `ALL`) with the matrix-fracture coupling on (`SIGMA 0.0005`), wells in the fracture layers |

The grid holds 7 matrix layers on top of 7 fracture layers (`DIMENS 6 8 14`). The `ZCORN` of the
fracture layers is the stacked layout required for corner-point input; the fracture cells have
the geometry of their matrix twins whatever it holds. The two continua differ in activity,
low-porosity cells and properties (the matrix has half the porosity and a tenth of the
permeability of model 1), so that a mix-up between them shows. With no coupling there is no flow between
the continua, and the cells of the continuum with the wells must give the results of the
single porosity deck with the same features.

The wells are controlled on the oil rate (`ORAT`) instead of `RESV`. `RESV` converts the rates
with region average pressures, which include the cells of the other continuum.
