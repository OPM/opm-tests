# WVFPEXP Test Documentation

Case Name | Case Desciption                                               | Base Model | Results<br />Match | Comments |
--------- | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
WVFPEXP-01| Base tartan anticline model with WVFPEXP default values.      | WVFPEXP    | Yes     | Results similar to E100, except early shut-in and the well control modes. 
WVFPEXP-02| WVFPEXP(CONTROL) set to YES2                                  | WVFPEXP    | No      | Results different to E100. Need a Info message stating that the well has been prevented from changing to THP control.
WVFPEXP-03| Base model with gas lift optimization for producers.          | WVFPEXP    | Yes     | Results similar to E100, except flow does not shut-in the OP-01 well. Gas lift initial rates are far too high at the start of the run compared to E100. 
WVFPEXP-04| WVFPEXP(CONTROL) set to YES2 and gas lift optimization.       | WVFPEXP    | No      | Results are different due to OPM Flow does not shut-in wells. Gas lift initial rates are far too high at the start of the run compared to E100. 
WVFPEXP-05| Modified Base model with WVFPEXP default values.              | WVFPEXP    | Yes     | No difference in results, but OPM Flow does not calculate SBHP. Robust bhp(thp) failures is 30 and six failed potential calculations.
WVFPEXP-06| Modified Base model with WVFPEXP(IMPEXP) set to EXP.          | WVFPEXP    | Yes     | No difference in results, but OPM Flow does not calculate SBHP. Robust bhp(thp) failures is six failed potential calculations - very similar WVFPEXP-06.

**General Comments:** 

1.  OPM Flow needs a warning message stating that the well has been prevented from changing to THP control. Otherwise, one cannot tell what is going on.
2.  Even if WVFPEXP(CONTROL)=YES, if the well cannot flow at the calculated rate it should be SHUT/STOPPED. To be clear, the well is allowed to die if the IPR does not intersect the VFP curve at the constrained rate.
3.  The well is only prevented from switching to THP control, if and only if, it can produced at a higher rate under THP control. Thus, if the well cannot produce at zero THP then it should be shut.
4.  Cannot have THP values below zero.
3.  BHP is not reported when the well is not flowing.
4.  In general well control modes are inconsistent with commercial simulator.
5.  Gas lift cases all have too much gas allocated at the start that creates numerical issues.
6.  OPM Flow needs a warning message stating that the well VFP table lookup has changed to explicit to prevent premature closing.


**Notes:** 

1.  _Results Match_ column indicate if the OPM Flow results match the commercial simulator.
2.  All cases run with five day time steps for comparison purposes.
3.  See the WVFPEXP.odp document for comparisons plots.

**Version: 28 July 2022**
