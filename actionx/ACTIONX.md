# ACTIONX Test Documentation

Main Keyword | Secondary Keywords | Case Name        | Run Type   | Base Model | Comments
------------ | ------------------ | ---------------- | ---------  | ---------- | -------------------------------------
BOX          | -                                                         | ACTIONX_         | -          | -          | -
COMPDAT      | -                                                         | ACTIONX_         | -          | -          | -
COMPLUMP     | WELOPEN                                                   | ACTIONX_COMPLUMP | History    | MODEL02    | WIP: Fails due COMPDAT issue.
ECHO         | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
ENDBOX       | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported by ACTIONX.
GCONINJE     | -                                                         | ACTIONX_GCONINJE | Prediction | MODEL02    | Complete
GCONPROD     | -                                                         | ACTIONX_GCONPROD | Prediction | MODEL02    | Complete
GCONSUMP     | GCONPROD, WCONPROD                                        | ACTIONX_GCONSUMP | Prediction | MODEL02    | WIP: Results different to commercial simulator.
GRUPNET      | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
GRUPTARG     | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
GRUPTREE     | GCONPROD, GCONINJE, WCONINJE, WELOPEN, WELOPEN, WELSSPECS | ACTIONX_GRUPTREE | Prediction | MODEL02    | WIP: Runs with inconsistent results & tasklet error.
GSATINJE     | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
GSATPROD     | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
MULTX        | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported by ACTIONX.
MULTX-       | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported by ACTIONX.
MULTY        | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported by ACTIONX.
MULTZ        | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported by ACTIONX.
NEXTSTEP     | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
NOECHO       | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
UDQ          | -                                                         | ACTIONX_         | -          | -          | -
WCONINJE     | WELOPEN                                                   | ACTIONX_WCONINJE | Prediction | MODEL02    | Complete. 
WCONPROD     | UDQ, WCONINJE, WCONPROD                                   | ACTIONX_WCONPROD | Prediction | MODEL02    | WIP: Fails due to field shut-in, need to compare to commercial simulator.
WEFAC        | -                                                         | ACTIONX_WEFAC    | Prediction | MODEL02    | WIP: Segmentation fault, even when ACTIONX commented out.
WELOPEN      | -                                                         | ACTIONX_         | -          | -          | Phase 2, will fail due to COMPDAT issue.
WELPI        | -                                                         | ACTIONX_WELPI    | History    | MODEL02    | WIP: Fails due COMPDAT issue.
WELSPECS     | -                                                         | ACTIONX_         | -          | -          | -
WELTARG      | -                                                         | ACTIONX_         | -          | -          | -
WGRUPCON     | GCONPROD, GCONINJE, WCONINJE, WELOPEN                     | ACTIONX_WGRUPCON | Prediction | MODEL02    | WIP: Works except for ACT-03 near the end & tasklet error.
WINJMULT     | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.
WPIMULT      | -                                                         | ACTIONX_WPIMULT  | History    | MODEL02    | WIP: Fails due COMPDAT issue.
WSEGVALV     | -                                                         | ACTIONX_         | -          | -          | -
WTEST        | -                                                         | ACTIONX_         | -          | -          | -
WTMULT       | -                                                         | ACTIONX_         | -          | -          | Phase 2: Not supported in deck.

The COMPDAT issue is a known limitation of the current ACTIONX implementation and is planned to be refactored in the coming month.