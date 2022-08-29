-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor

-- This file is one of the include files for model2

-- Summary file for the base case, specific version

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

FGLIR

-- api tracking
FAPI


-----------------
-- Group Data
-----------------
 
-- api tracking

GAPI
/

-----------------
--  Region data
-----------------

RPR
 1 2 / 

ROIP
 1 2 / 

ROE
 1 2 / 

ROPT
 1 2 / 

RWPT
 1 2 / 

RWIT
 1 2 / 

ROFT
 1 2 /
/
 
RODEN
 1 2 /

RAPI
 1 2 /
  

-----------------
-- Well Data
-----------------
-- Production rates
WOPR
/

WGPR
/

WWPR
/

WLPR
/


-- Production cumulatives
WOPT
/

WGPT
/

WWPT
/

WLPT
/


-- Production ratios

WGOR
/

WWCT
/

-- Injection Rates

WGIR
/
 
WWIR
/


-- Pressure

WBHP
  /

WTHP
/

-- potentials 

WGIP
/

WWIP
/


WOPP
/

WGPP
/

WWPP
/

-- api tracking

WAPI
/



-----------------
-- Block Data
-----------------

BVOIL
 8 13 1 /
 7 16 1 /
 4 20 1 /
/

BODEN
 8 13 1 /
 7 16 1 /
 4 20 1 /
/
 
-- api tracking

BAPI
 8 13 1 /
 7 16 1 /
 4 20 1 /
/
