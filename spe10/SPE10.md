# SPE10 Comparative Solution Project Test Documentation

Case Name     | Case Desciption                                               | Base Model | Results<br />Match | Comments |
---------     | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
SPE10-MOD01-01| Three-Phase, with Cartesian regular grid.                     | MODEL-01   | Runs    | Results are comparable to other vendors as presented in the paper. however, E100 fails to run to completion.
SPE10-MOD01-02| Two-Phase, with Cartesian regular grid.                       | MODEL-01   | Runs    | Results are comparable to other vendors as presented in the paper; however, E100 fails to run to completion.
SPE10-MOD01-03| Three-Phase, with Corner-Point regular grid.                  | MODEL-01   | Runs    | Results are comparable to other vendors as presented in the paper. E100 not tested.
SPE10-MOD01-04| Two-Phase, with Corner-Point regular grid.                    | MODEL-01   | Runs    | Results are comparable to other vendors as presented in the paper. E100 not tested.
SPE10-MOD02-01| Three-Phase, with Cartesian regular grid.                     | MODEL-02   |         | Cannot run due to numerical issues - work is ongoing  
SPE10-MOD02-02| Two-Phase, with Cartesian regular grid.                       | MODEL-02   |         | Cannot run due to numerical issues - work is ongoing  

**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the GASLIFT.odp document for comparisons.
2.   All model one cases run with ten day time steps for comparison purposes.

**Version: 05 August 2022**
                                                                                                                                  