-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2018-2026 Equinor
--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
--
--       EXPORT STANDARD SUMMARY VARIABLE VECTORS TO FILE
--
ALL
--       EXPORT SUMMARY VARIABLE VECTORS TO FILE
FOPR
FWPR
FGPR
FLPR
FWIR
FGIR

FOPT
FWPT
FGPT
FLPT
FWIT
FGIT

FWCT
FGOR
FWGR
FOGR
FGLR

GOPR
/
GWPR
/
GGPR
/
GLPR
/
GWIR
/
GGIR
/

GOPT
/
GWPT
/
GGPT
/
GLPT
/
GWIT
/
GGIT
/

GWCT
/
GGOR
/
GWGR
/
GOGR
/
GGLR
/

WOPR
/
WWPR
/
WGPR
/
WLPR
/
WWIR
/
WGIR
/

WOPT
/
WWPT
/
WGPT
/
WLPT
/
WWIT
/
WGIT
/

WWCT
/
WGOR
/
WWGR
/
WOGR
/
WGLR
/

WBHP
/
WTHP
/

--  EXPORT HISTORICAL SUMMARY VARIABLE VECTORS TO FILE
FOPRH
FWPRH
FGPRH
FLPRH
FWIRH
FGIRH

FOPTH
FWPTH
FGPTH
FLPTH
FWITH
FGITH

FWCTH
FGORH
FWGRH
FOGRH
FGLRH

GOPRH
/
GWPRH
/
GGPRH
/
GLPRH
/
GWIRH
/
GGIRH
/

GOPTH
/
GWPTH
/
GGPTH
/
GLPTH
/
GWITH
/
GGITH
/

GWCTH
/
GGORH
/
GWGRH
/
GOGRH
/
GGLRH
/

WOPRH
/
WWPRH
/
WGPRH
/
WLPRH
/
WWIRH
/
WGIRH
/

WOPTH
/
WWPTH
/
WGPTH
/
WLPTH
/
WWITH
/
WGITH
/

WWCTH
/
WGORH
/
WWGRH
/
WOGRH
/
WGLRH
/

WBHPH
/
WTHPH
/

-- EXPORT TARGETS/CONSTRAINTS SUMMARY VARIABLE VECTORS TO FILE
FOPRT
FWPRT
FGPRT
FLPRT
FWIRT
FGIRT

GOPRT
/
GWPRT
/
GGPRT
/
GLPRT
/
GWIRT
/
GGIRT
/

WOPRT
/
WWPRT
/
WGPRT
/
WLPRT
/
WWIRT
/
WGIRT
/

WBHPT
/
--WTHPT -- Not supported
--/

--
--       EXPORT FIELD GAS SALES AND GAS CONSUMPTIOM VECTORS TO FILE
-- 
FSGR
FSGT
FGSR
FGST
FGCR
FGCT
--
--
--       EXPORT FIELD, GROUP AND WELL CONTROL MODES 
--
FMCTP
FMCTW
GMCTP
/
GMCTW
/
WMCTL
/
--
--       EXPORT REGION DATA
--
RPR
/
ROIP
/
RGIP
/
ECHO        
--                                                                              
-- *********************************************************************************************************************************
-- END OF FILE                                                                  
-- *********************************************************************************************************************************
