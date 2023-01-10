-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2023 Equinor

--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
-- =================================================================================================================================
--
-- SUMMARY SECTION
--
-- =================================================================================================================================
--
--       EXPORT STANDARD SUMMARY VARIABLE VECTORS TO FILE
--
ALL
--
--       REGION PRODUCTION DATA
--
RPR
/
RGPR
/
RGPT
/
ROPR
/
ROPT
/
RWPR
/
RWPT
/
--
--       REGION PRODUCTION DATA FOR FIPLAYER
--
RPR__LAY
/
RGPR_LAY
/
RGPT_LAY
/
ROPR_LAY
/
ROPT_LAY
/
RWPR_LAY
/
RWPT_LAY
/
--
--       REGION PRODUCTION DATA FOR FIPAREAS
--
RPR__ARE
/
RGPR_ARE
/
RGPT_ARE
/
ROPR_ARE
/
ROPT_ARE
/
RWPR_ARE
/
RWPT_ARE
/
-- ---------------------------------------------------------------------------------------------------------------------------------
-- MULTI-SEGEMENT WELL VARIABLES
-- ---------------------------------------------------------------------------------------------------------------------------------
--
--       WELL MULTI-SEGMENT GAS FLOW VARIABLES
--
SGFR
/
SGFRF
/
SGFRS
/
-- SGFTA
-- /
-- SGFT
-- /
-- SGFV
-- /
-- SGHF
-- /
--
--       WELL MULTI-SEGMENT OIL FLOW VARIABLES
--
-- SOFTA
-- /
SOFR
/
SOFRF
/
SOFRS
/
-- SOFT
-- /
-- SOFV
-- /
-- SOHF
-- /
--
--       WELL MULTI-SEGMENT WATER FLOW VARIABLES
--
SWFR
/
-- SWFT
-- /
-- SWFTA
-- /
-- SWFV
-- /
-- SWHF
-- /
--
--       WELL MULTI-SEGMENT RATIO VARIABLES
--
SGOR
/
SOGR
/
SWCT
/
SWGR
/
--
--       WELL MULTI-SEGMENT PRESSURE VARIABLES
--
SPR
/
SPRD
/
SPRDF
/
SPRDH
/
SPRDA
/
-- SPRDM
-- /

ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
