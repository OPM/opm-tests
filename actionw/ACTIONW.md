# WPIMULT Test Documentation

Case Name         | Case Desciption                                               | Base Model | Results<br />Match | Comments |
----------------- | ------------------------------------------------------------  | ---------- | ------- | ------------------------------------- |
ACTIONW-WPIMULT   | The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 is set VREP 1.00. <br /><br /> Producers OP01 to OP04 have an ACTIONW blocks that reduces the PI of the well by 0.900 when the water cut exceeds, 0.20, 0.40 and 0.60.| ACTIONW | NA | E100 runs as expected. OPM Flow waiting on implementation.                                                                                       | WPIMULT    | NA     | E100 runs as expected waiting on OPM Flow implementation.
ACTIONW-WPIMULT-01| Producer OP01 has a nested ACTIONW block that first tests if the well's water cut exceeds 0.20 (ACTW-01A), if it does then ACTW-01B checks if the well PI is greater than 40.0 and if it is then reduce the PI by 0.900. ACTW-01A is set to execute three times and ACTW-01B only once, so the action should only be executed once.<br /><br /> For OP02 the ACTW-02A and ACTW-02B are the same as for OP01, except ACTW-02B is allowed to execute twice.<br /><br />OP03 is the same as OP01, except this should not execute as the ACTW-03A and ACTW-03B should be overwritten by OP04 action blocks.<br /><br /> OP04 is the same as OP01, except this should execute as the ACTW-03A and ACTW-03B overwrite the previous versions, and thus OP04 is choked back but not OP03. This is a deliberate typo test to check if we issue a warning if this occurs.| ACTIONW | NA | E100 runs as expected. OPM Flow waiting on implementation. 

**Notes:** 

1.  _Results Match_ column indicate if the OPM Flow results match the commercial simulator.
2.  See the WPIMULT.odp document for comparisons plots.

**Version: 18 August 2022**
