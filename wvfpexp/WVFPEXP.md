# WVFPEXP Test Documentation

Case Name | Case Desciption                                               | Base Model | Results<br />Match | Comments |
--------- | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
WVFPEXP-01| Base tartan anticline model with WVFPEXP default values.      | WVFPEXP    | No      | Results similar to E100, except previously we had early shut-in and incorrect well control modes, now we we have longer production and still have incorrect well control modes. 
WVFPEXP-02| WVFPEXP(CONTROL) set to YES2                                  | WVFPEXP    | Yes     | Results are effectively identical to E100. 
WVFPEXP-03| Gas lift optimization.                                        | WVFPEXP    | No      | Results similar to E100 for the first 18 months or so, thereafter OPM Flow allows some wells to flow longer, 
WVFPEXP-04| WVFPEXP(CONTROL) set to YES2 and gas lift optimization.       | WVFPEXP    | No      | Results are different due to OPM Flow does not shut-in wells, and the well control modes are inconsistent. 
WVFPEXP-05| Modified Base model with WVFPEXP default values.              | WVFPEXP    | Yes     | No difference in results, but OPM Flow does not calculate SBHP. Robust bhp(thp) failures is 25.
WVFPEXP-06| Modified Base model with WVFPEXP(IMPEXP) set to EXP.          | WVFPEXP    | Yes     | No difference in results, but OPM Flow does not calculate SBHP. Robust bhp(thp) failures is 32 very similar WVFPEXP-06. Expected Less Warnings with WVFPEXP(IMPEXP)=EXP

**General Comments:** 

1.  Even if WVFPEXP(CONTROL)=YES, if the well cannot flow at the calculated rate it should be SHUT/STOPPED. To be clear, the well is allowed to die if the IPR does not intersect the VFP curve at the constrained rate.
2.  BHP is not reported when the well is not flowing.
3.  In general well control modes are inconsistent with commercial simulator.
4.  Gas lift cases all have too much gas allocated at the start that creates numerical issues.
5.  OPM Flow needs a warning message stating that the well VFP table lookup has changed to explicit to prevent premature closing.


**Notes:** 

1.  _Results Match_ column indicate if the OPM Flow results match the commercial simulator.
2.  All cases run with five day time steps for comparison purposes.
3.  See the WVFPEXP.odp document for comparisons plots.

**Version: 14 September 2022**
