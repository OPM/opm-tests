# WVFPEXP Test Documentation

Case Name | Case Desciption                                               | Base Model | Results<br />Match | Comments |
--------- | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
WVFPEXP-01| Base tartan anticline model with WVFPEXP default values.      | WVFPEXP    | Yes     | Results similar to E100.
WVFPEXP-02| WVFPEXP(CONTROL) set to YES2                                  | WVFPEXP    | No      | Results different to E100.
WVFPEXP-03| Base model with gas lift optimization for producers.          | WVFPEXP    |         | Waiting on E100 results
WVFPEXP-04| WVFPEXP(CONTROL) set to YES2 and gas lift optimization.       | WVFPEXP    |         | Waiting on E100 results
WVFPEXP-05| Modified Base model with WVFPEXP default values.              | WVFPEXP    | Fails   | Runs in E100
WVFPEXP-06| Modified Base model with WVFPEXP(IMPEXP) set to EXP.          | WVFPEXP    | Fails   | Runs in E100
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the WVFPEXP.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   All cases run with five day time steps for comparison purposes.

**Version: 06 June 2022**
