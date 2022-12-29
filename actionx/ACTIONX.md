# ACTIONX Test Documentation

Main Keyword | Secondary Keywords | Case Name        | Run Type   | Base Model | Results<br />Match | Comments |
------------ | ------------------ | ---------------- | ---------  | ---------- | ------- | ------------------------------------- |
BOX          | ENDBOX, MULTX, MULTY, MULTZ                                         | ACTIONX_BOX        | Prediction | MULT       | Close | Complete. Field matches but well results are variable, some identical some much less so, mostly due to water production.
COMPDAT      | COMPLUMP, WELOPEN                                                   | ACTIONX_COMPDAT    | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
COMPLUMP     | WELOPEN                                                             | ACTIONX_COMPLUMP   | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
ECHO         | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
ENDBOX       | BOX, MULTX, MULTY, MULTZ                                            | See ACTIONX_BOX    | Prediction | MULT       | Close | Complete, same as ACTIONX_BOX.
GCONINJE     | WELOPEN                                                             | ACTIONX_GCONINJE   | Prediction | MODEL02    | Close | Complete
GCONPROD     | UDQ, WCONINJE, WCONPROD                                             | ACTIONX_GCONPROD   | Prediction | MODEL02    | No    | Complete: Results are inconsistent with E100. Also, need to check UDADIMS parameters are consistent with input deck and issue a warning if not, otherwise will create an error in the E100.
GCONSUMP     | GCONPROD, WCONPROD                                                  | ACTIONX_GCONSUMP   | Prediction | MODEL02    | Yes   | Complete: Gas Sales and Fuel Missing from SUMMARY file.
GRUPNET      | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
GRUPTARG     | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
GRUPTREE     | GCONPROD, GCONINJE, WCONINJE, WELOPEN, WELSSPECS, WGRUPCON          | ACTIONX_GRUPTREE   | Prediction | MODEL02    | Close | Completed. Results consistent at field level,but group SUMMARY vectors and production volumes are missing from SUMMARY file and Production reports (print file) if the groups are not defined upfront.
GSATINJE     | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
GSATPROD     | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
INCLUDE      | COMPSEGS, WELSEGS                                                   | ACTIONX_INCLUDE    | Prediction | WSEGVALV   | Yes   | Complete and the run matches non-include version, as the commercial simulator does not support the INCLUDE keyword in an ACTIONX block.
MULT         |                                                                     | ACTIONX_MULT       | Prediction | MULT       | Yes   | Base MULT model, no ACTIONX. Base MULT run. All wells match except OP-A02 and OP-B02 water production
MULT-        | BOX, ENDBOX, MULTX-, MULTY-, MULTZ-                                 | ACTIONX_MULT-      | Prediction | MULT       | Close | Regression test case. Runs okay and the results are generally close.
MULT+        | BOX, ENDBOX  MULTX, MULTY, MULTZ                                    | ACTIONX_MULT+      | Prediction | MULT       | Close | Regression test case. Runs okay and the results are generally close.
MULTX        | BOX, ENDBOX                                                         | ACTIONX_MULTX      | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTX-       | BOX, ENDBOX                                                         | ACTIONX_MULTX-     | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTY        | BOX, ENDBOX                                                         | ACTIONX_MULTY      | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTY-       | BOX, ENDBOX                                                         | ACTIONX_MULTY-     | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTZ        | BOX, ENDBOX                                                         | ACTIONX_MULTZ      | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTZ-       | BOX, ENDBOX                                                         | ACTIONX_MULTZ-     | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
NEXT         | WELTARG                                                             | ACTIONX_NEXT       | Prediction | MODEL05    | No    | NEXT is an alias for NEXSTEP – see NEXTSTEP for documentation.
NEXTSTEP     | WELTARG                                                             | ACTIONX_NEXTSTEP   | Prediction | MODEL05    | No    | Numerically the fluid rates and the pressures match the commercial simulator, but the time steps defined by NEXTSTEP are not honored.
NOECHO       | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
UDQ          | WCONPROD                                                            | ACTIONX_UDQ        | Prediction | SPE09      | Yes   | Complete and run matches commercial simulator.    
WCONINJE     | WELOPEN                                                             | ACTIONX_WCONINJE   | Prediction | MODEL02    | Yes   | Complete and run matches commercial simulator. 
WCONPROD     | GCONPROD, UDQ, WCONINJE                                             | ACTIONX_WCONPROD   | Prediction | MODEL02    | No    | Complete: Runs but the the results are inconsistent with the the commercial simulator, as the field does not re-open as a gas field.
WEFAC        | -                                                                   | ACTIONX_WEFAC      | Prediction | MODEL02    | Yes   | Complete and run matches commercial simulator.
WELOPEN      | COMPDAT, COMPLUMP                                                   | See ACTIONX_COMPDAT| History    | MODEL02    | Yes   | Same as ACTIONX_COMPDAT.                     
WELPI        | -                                                                   | ACTIONX_WELPI      | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
WELSPECS     | COMPDAT, WCONPROD                                                   | ACTIONX_WELSPECS   | Fails      | WSEGVALV   | Fails | Fails but fix currently in progress. Note for the commercial simulator, one has to move ACT-04 after the well has been defined, in order for it run.
WELTARG      | -                                                                   | ACTIONX_WELTARG    | Prediction | WSEGVALV   | Yes   | Complete and run matches commercial simulator.
WGRUPCON     | GCONPROD, GCONINJE, WCONINJE, WELOPEN                               | ACTIONX_WGRUPCON   | Prediction | MODEL02    | Close | Complete, matches except WI01 for ACT-03 near the end of the run that results in a discrepancy.
WINJMULT     | -                                                                   | ACTIONX_           | -          | -          | -     | Not supported in deck.
WPIMULT      | -                                                                   | ACTIONX_WPIMULT    | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
WSEGVALV     | COMPSEGS, WELSEGS                                                   | ACTIONX_WSEGVALV   | Prediction | WSEGVALV   | Yes   | Complete and run matches commercial simulator.
WTEST        | WECON                                                               | ACTIONX_WTEST      | Prediction | SPE09      | No    | Completed: Fixed the WECON issue all the wells now flow, some are perfect matches but there are some that are way off, don’t know why at this stage – may not be an ACTIONX issue.
WTMULT       | -                                                                   | ACTIONX_WTMULT     | Prediction | MODEL05    | Yes   | Complete and run matches commercial simulator.
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the ACTIONX.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   Under comments _Not supported in deck_ means the keyword functionality is currently not supported by OPM Flow.

**Version: 20 December 2021**


### ACTIONX_BOX Description and Results

[ACTIONX_BOX ECL Results](plots/ACTIONX_BOX-ECL.md)


### ACTIONX_MULT Description and Results

[ACTIONX_MULT ECL Results](plots/ACTIONX_MULT-ECL.md)


### ACTIONX_MULT- Description and Results

[ACTIONX_MULT- ECL Results](plots/ACTIONX_MULT--ECL.md)


### ACTIONX_MULT+ Description and Results

[ACTIONX_MULT+ ECL Results](plots/ACTIONX_MULT+-ECL.md)


### ACTIONX_MULTX- Description and Results

[ACTIONX_MULTX- ECL Results](plots/ACTIONX_MULTX--ECL.md)


### ACTIONX_MULTX+ Description and Results

[ACTIONX_MULTX+ ECL Results](plots/ACTIONX_MULTX+-ECL.md)


### ACTIONX_MULTY- Description and Results

[ACTIONX_MULTY- ECL Results](plots/ACTIONX_MULTY--ECL.md)


### ACTIONX_MULTY+ Description and Results

[ACTIONX_MULTY+ ECL Results](plots/ACTIONX_MULTY+-ECL.md)


### ACTIONX_MULTZ- Description and Results

[ACTIONX_MULTZ- ECL Results](plots/ACTIONX_MULTZ--ECL.md)


### ACTIONX_MULTZ+ Description and Results

[ACTIONX_MULTZ+ ECL Results](plots/ACTIONX_MULTZ+-ECL.md)

