# SPE10 Comparative Solution Project Test Documentation

Case Name     | Case Desciption                                               | Base Model | Results<br />Match | Comments |
---------     | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
SPE10-MOD01-01| Three-Phase, with Cartesian regular grid.                     | MODEL-01   | Yes     | Results are comparable to other vendors as presented in the paper. however, E100 fails to run to completion.
SPE10-MOD01-02| Two-Phase, with Cartesian regular grid.                       | MODEL-01   | Yes     | Results are comparable to other vendors as presented in the paper; however, E100 fails to run to completion.
SPE10-MOD01-03| Three-Phase, with Corner-Point regular grid.                  | MODEL-01   | Yes     | Results are comparable to other vendors as presented in the paper. E100 not tested.
SPE10-MOD01-04| Two-Phase, with Corner-Point regular grid.                    | MODEL-01   | Yes     | Results are comparable to other vendors as presented in the paper. E100 not tested.
SPE10-MOD02-01| Three-Phase, with Cartesian regular grid.                     | MODEL-02   | Yes     | Results are comparable to other vendors as presented in the paper. E100 not tested.
SPE10-MOD02-02| Two-Phase, with Cartesian regular grid.                       | MODEL-02   | Yes     | Results are comparable to other vendors as presented in the paper. E100 not tested. 

**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the published results, see the SPE10.odp document for comparisons.
2.   Model one cases run with ten day time steps for comparison purposes.
3.   Model two used variable time steps and requires CPR to run, see the parameter files.

**Version: 12 August 2022**
                                                                                                                                  