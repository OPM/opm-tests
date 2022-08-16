# WPIMULT Test Documentation

Case Name  | Case Desciption                                               | Base Model | Results<br />Match | Comments |
---------- | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
WPIMULT    | Based on SPE01 Case 2 with the number of layers increased to nine.                | WPIMULT    | Yes     | Results are identical to E100.
WPIMULT-01 | WPIMULT(WELPI) set to 0.5 after 30 days, then 0.5 and 2.0 in the same report step | WPIMULT    | No      | Results are identical to E100.
WPIMULT-02 | OP01 layers 3, 6, and 9 are open and the well productivity is intially set to 0.3333 using 1* at the start of the run.  One report step later, layers 6 and 9 are shut, then one report time step later the well productivity is increased by 3.0.| WPIMULT    | Yes     |Results are identical to E100.
WPIMULT-03 | Same  as WPIMULT-02 except use 0 (zero) for selection of connections               | WPIMULT    | No      | Results are identical to E100.


**Notes:** 

1.  _Results Match_ column indicate if the OPM Flow results match the commercial simulator.
2.  See the WPIMULT.odp document for comparisons plots.

**Version: 16 August 2022**
