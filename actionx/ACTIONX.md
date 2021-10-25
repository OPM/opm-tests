# ACTIONX Test Documentation

Main Keyword | Secondary Keywords | Case Name        | Run Type   | Base Model | Results<br />Match | Comments |
------------ | ------------------ | ---------------- | ---------  | ---------- | ------- | ------------------------------------- |
BOX          | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported by ACTIONX
COMPDAT      | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Known bug.
COMPLUMP     | WELOPEN                                                   | ACTIONX_COMPLUMP | History    | MODEL02    |  Fails | WIP: Fails due COMPDAT issue.
ECHO         | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
ENDBOX       | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported by ACTIONX.
GCONINJE     | WELOPEN                                                   | ACTIONX_GCONINJE | Prediction | MODEL02    |  Close | Complete
GCONPROD     | UDQ                                                       | ACTIONX_GCONPROD | Prediction | MODEL02    |  No    | Complete: Results are inconsistent with E100. Also, need to check UDADIMS parameters are consistent with input deck and issue a warning if not, otherwise will create an error in the E100.
GCONSUMP     | GCONPROD, WCONPROD                                        | ACTIONX_GCONSUMP | Prediction | MODEL02    |  No    | Complete: Results different to commercial simulator. Gas Sales and Fuel Missing from SUMMARY file.
GRUPNET      | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
GRUPTARG     | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
GRUPTREE     | GCONPROD, GCONINJE, WCONINJE, WELOPEN, WELOPEN, WELSSPECS | ACTIONX_GRUPTREE | Prediction | MODEL02    |  Close | Completed. Results consistent at field level,but group SUMMARY vectors and production volumes are missing from SUMMARY file and Production reports (print file) if the groups are not defined upfront.
GSATINJE     |                                                           | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
GSATPROD     | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
MULTX        | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported by ACTIONX.
MULTX-       | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported by ACTIONX.
MULTY        | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported by ACTIONX.
MULTZ        | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported by ACTIONX.
NEXTSTEP     | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
NOECHO       | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
UDQ          | WCONPROD                                                  | ACTIONX_UDQ      | Prediction | SPE09      |  Yes   | Complete.    
WCONINJE     | WELOPEN                                                   | ACTIONX_WCONINJE | Prediction | MODEL02    |  Yes   | Complete. 
WCONPROD     | GCONPROD, UDQ, WCONINJE                                   | ACTIONX_WCONPROD | Prediction | MODEL02    |  No    | Complete: Runs but the the results are inconsistent with the the commercial simulator, as the field does not re-open as a gas field.
WEFAC        | -                                                         | ACTIONX_WEFAC    | Prediction | MODEL02    |  Yes   | Complete.
WELOPEN      | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2, will fail due to COMPDAT issue.
WELPI        | -                                                         | ACTIONX_WELPI    | History    | MODEL02    |  Fails | WIP: Fails due COMPDAT issue.
WELSPECS     | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2
WELTARG      | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2
WGRUPCON     | GCONPROD, GCONINJE, WCONINJE, WELOPEN                     | ACTIONX_WGRUPCON | Prediction | MODEL02    |  Close | Complete, matches except WI01 for ACT-03 near the end of the run that results in a discrepancy.
WINJMULT     | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
WPIMULT      | -                                                         | ACTIONX_WPIMULT  | History    | MODEL02    |  Fails | WIP: Fails due COMPDAT issue.
WSEGVALV     | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2
WTEST        | WECON                                                     | ACTIONX_WTEST    | Prediction | SPE09      |  No    | Completed: Fixed the WECON issue all the wells now flow, some are perfect matches but there are some that way off, don’t know why at this stage – may not be an ACTIONX issue.
WTMULT       | -                                                         | ACTIONX_         | -          | -          |  -     | Phase 2: Not supported in deck.
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the ACTIONX.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   The COMPDAT issue is a known limitation of the current ACTIONX implementation and is planned to be refactored in the coming month.

**Version: 25 October 2021**
