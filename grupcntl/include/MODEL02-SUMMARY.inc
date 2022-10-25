-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2018-2022 Equinor
--
-- This is a SUMMARY file containing a list of summary variable vectors to be exported for MODEL02.
--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
--
--       EXPORT STANDARD SUMMARY VARIABLE VECTORS TO FILE
--
ALL
--
--       EXPORT LIQUID SUMMARY VARIABLE VECTORS TO FILE
--
FLPR
FLPT
GLPR
/
GLPT
/
WLPR
/
WLPT
/
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
