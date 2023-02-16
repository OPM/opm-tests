# OPERATE Test Documentation

Main Keyword | Secondary Keywords | Case Name        | Run Type   | Base Model | Results<br />Match | Comments                                                                                                                                           |
------------ | ------------------ | ---------------- | ---------  | ---------- | ------- |----------------------------------------------------------------------------------------------------------------------------------|
None         | None               | OPERATE          | Prediction | OPERATE    | N/A     | Complete.                                                                                                                        |
DEPTH        | EQUALS             | OPERATE-DEPTH    | Prediction | OPERATE    | N/A     | Stops with errors. <br /> Internal error: INFO: No such keyword: DEPTH                                                           |
MULTZ        | EQUALS             | OPERATE-TRANX    | Prediction | OPERATE    | N/A     | Stops with errors. <br /> Internal error: The OPERATE and OPERATER keywords are not supported for keywords with global storage   |
PERMZ        | EQUALS             | OPERATE-TRANX    | Prediction | OPERATE    | N/A     | Runs with **no** errors.                                                                                                         |
PORV         | MULTIPLY           | OPERATE-PORV     | Prediction | OPERATE    | N/A     | Runs and results identical to OPERATE                                                                                            |
TRANX        | MULTIPLY           | OPERATE-TRANX    | Prediction | OPERATE    | N/A     | Stops with errors. <br /> Internal error: INFO: No such keyword: TRANX                                                           |
TRANY        | MULTIPLY           | OPERATE-TRANY    | Prediction | OPERATE    | N/A     | Stops with errors. <br /> Internal error: INFO: No such keyword: TRANY                                                           |
TRANZ        | MULTIPLY           | OPERATE-TRANZ    | Prediction | OPERATE    | N/A     | Stops with errors. <br /> Internal error: INFO: No such keyword: TRANZ                                                           |

**Notes:**

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, N/A means not applicable.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   Under comments _Not supported in deck_ means the keyword functionality is currently not supported by OPM Flow.

**Version: 16 February, 2023**
