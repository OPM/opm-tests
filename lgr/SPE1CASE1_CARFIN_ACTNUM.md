# Test Combination of CARFIN, ENDFIN and ACTNUM

**SPE1CASE1_CARFIN_ACTNUM00** – SPE1CASE1_CARFIN + PORO reduced from 0.3 to 0.1 in global cells (7-8, 3-4, 1-3).

**SPE1CASE1_CARFIN_ACTNUM01** – SPE1CASE1_CARFIN_ACTNUM00 + ACTNUM is used on the global grid to deactivate four columns of cells (7-8, 3-4, 1-3).

**SPE1CASE1_CARFIN_ACTNUM02** – SPE1CASE1_CARFIN_ACTNUM01 + ACTNUM is used on the global grid to deactivate the top global layer of LGR1 (5-6, 5-6, 1).

**SPE1CASE1_CARFIN_ACTNUM03** – SPE1CASE1_CARFIN_ACTNUM01 + ACTNUM is used on the local grid LGR1 to deactivate local cells (1-6, 1-3, 1).

![Results](./plots/SPE1CASE1_CARFIN_ACTNUM_ECL.png "SPE1CASE1_CARFIN_ACTNUM_ECL.png")

*Figure: Impact of ACTNUM on Global and Local Grids (Commercial Simulator)*
