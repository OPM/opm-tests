-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor

-- This file is one of the include files for model2

-- Summary file for the base case, specific version

--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO

-- Field Data
-----------------
-- Production rates
FPR
FOPR
FWPR
FGPR
FLPR
FWIR
FVPR
FVIR
-- Production cumulatives
FOPT
FWPT
FGPT
FLPT
FVPT
FVIT
-- Production ratios
FGOR
FWCT


-----------------
-- Well Data
-----------------
-- Production rates
WOPR
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

WWPR
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

WWCT
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

WGPR
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

-- Production totals
WOPT
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

WWPT
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

WGPT
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

-- Production ratios

WGOR
 'B-1H' 'B-2H' 'B-3H' 'B-4H'  /

-- Injection Rates

WGIR
 'F-1H' 'F-2H' 'F-3H' 'F-4H' /

WWIR
 'F-1H' 'F-2H' 'F-3H' 'F-4H' /

-- Pressure

WBHP
  /



-- Group data


GOPR
 'S1' 'S2' 'S3'  'S4' /


GWPR
 'S1' 'S2' 'S3'  'S4' /


GGPR
 'S1' 'S2' 'S3'  'S4' /


GLPR
 'S1' 'S2' 'S3'  'S4' /


GGOR
 'S1' 'S2' 'S3'  'S4' /


GOPT
 'S1' 'S2' 'S3'  'S4' /

GWPT
 'S1' 'S2' 'S3'  'S4' /

ECHO
--
-- *********************************************************************************************************************************
-- END OF INCLUDE FILE PROCESSING
-- *********************************************************************************************************************************
ENDINC
