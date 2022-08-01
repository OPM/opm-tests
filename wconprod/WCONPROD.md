# WCONPROD Test Documentation

Case Name  | Case Desciption                                          | Base Model | Results<br />Match | Comments |
---------  | -----------------------------                            | ---------- | ------- | ------------------------------------- |
WCONPROD   | Base case model base on SPE01 Case 2                     | WCONPROD   | Complete| Runs as expected, but results are different.
WCONPROD-01| STATUS=1*, ORAT=20E3, BHP=1000.0 only                    | WCONPROD   | Fails   | Issues error message and continues, but then fails. 
WCONPROD-02| STATUS=1*, LRAT=20E3, BHP=1000.0 only                    | WCONPROD   | Fails   | Issues error message and continues, but then fails.
WCONPROD-03| STATUS=1*, LRAT=20E3, BHP=1000.0 GRAT=5E3 only           | WCONPROD   | Fails   | Issues error message and continues, but then fails. 
WCONPROD-04| STATUS=1*, LRAT=20E3, BHP=1000.0 GRAT=5E3, WRAT=5E3 only | WCONPROD   | Fails   | Issues error message and continues, but then fails. 
WCONPROD-05| STATUS=1*, ORAT=20E3, BHP=1000.0, and group constraints  | WCONPROD   | Fails   | Issues error message and continues, but then fails.
WCONPROD-06| STATUS='', ORAT=20E3, BHP=1000.0 only                    | WCONPROD   | Fails   | Error: WCONPROD,Internal error: Unknown enum state string
WCONPROD-07| STATUS='', LRAT=20E3, BHP=1000.0 only                    | WCONPROD   | Fails   | Error: WCONPROD,Internal error: Unknown enum state string
WCONPROD-08| STATUS='', LRAT=20E3, BHP=1000.0 GRAT=5E3 only           | WCONPROD   | Fails   | Error: WCONPROD,Internal error: Unknown enum state string
WCONPROD-09| STATUS='', LRAT=20E3, BHP=1000.0 GRAT=5E3, WRAT=5E3 only | WCONPROD   | Fails   | Error: WCONPROD,Internal error: Unknown enum state string
WCONPROD-10| STATUS='', ORAT=20E3, BHP=1000.0, and group constraints  | WCONPROD   | Fails   | Error: WCONPROD,Internal error: Unknown enum state string
WCONPROD-11| STATUS=1*, only                                          | WCONPROD   | Fails   | Issues error message and continues, but then fails. 
WCONPROD-12| STATUS='', only                                          | WCONPROD   | Fails   | Error: WCONPROD,Internal error: Unknown enum state string
   
The default tokens of 1* and '' should behave the same; however, the actual values used when WCONPROD(TARGET) is defaulted is variable, as outlined below:

*   If the well is **not** under group control, then WCONPROD(TARGET) is set to the first non-defaulted hydrocarbon rate (ORAT, GRAT, LIQ, RESV). 
    If all rates are defaulted and BHP is entered, then the BHP is used. It is assumed that if the BHP is defaulted as well, and THP has been entered, 
    then THP would be used (this configuration has not been tested). Finally, if all parameters are defaulted, then the default value of BHP (14.70 psia) 
    will be used combined with BHP control.
    In all the above scenarios the well has been declared as open, that is WCONPROD(STATUS) is set to OPEN.

*   If, **and only if**, the well’s group parameters have been defined via the GCONPROD keyword, then WCONPROD(TARGET) is set equal to GRUP.  

In summary, for wells belonging to groups, where GCONPROD has **not** been set or defined, then WCONPROD(TARGET) is defined as the first non-defaulted value on the WCONPROD keyword,
except for WAT control mode. If all parameters are defaulted, then the default BHP value is used and the WCONPROD(TARGET) is set to BHP.
 
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator Currently, there is WCONPROD.odp document at the moment.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.


**Version: 01 August, 2022**
                                        