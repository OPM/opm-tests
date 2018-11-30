-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

-- Summary file for the base case, specific version

DATE

-----------------
-- Field Data
-----------------
-- Production rates
FOPR
FWPR
FGPR
FOPRH
FWPRH
FGPRH
-- Production cumulatives
FOPT
FWPT
FGPT
-- Production ratios
FGOR
FGORH
FWCT
FWCTH
-- Injection rates
-- Injection cumulatives
-- Pressure and fluid
-- In-place volumes
-- Number of wells
-----------------
--  Region data
-----------------
RPR
/


-----------------
-- Well Data
-----------------
-- Production rates
WOPR
 'PROD*' /

WGPR
 'PROD*' /

WWPR
 'PROD*' /

WOPRH
 'PROD*' /

WGPRH
 'PROD*' /

WWPRH
 'PROD*' /

-- Production cumulatives
WOPT
 'PROD*' /

WGPT
 'PROD*' /

WWPT
 'PROD*' /

WOPTH
 'PROD*' /

WGPTH
 'PROD*' /

WWPTH
 'PROD*' /

-- Production ratios

WGOR
 'PROD*' /

WWCT
 'PROD*' /

WGORH
 'PROD*' /

WWCTH
 'PROD*' /

-- Injection Rates

WGIR
 'INJ*' /
 
WWIR
 'INJ*' /

WGIRH
 'INJ*' /
 
WWIRH
 'INJ*' /

-- Pressure

WBHP
 'PROD*' 'INJ*' /

-- potentials 

WPIG
  'PROD*' /

WPIO
  'PROD*' /

WPIL
  'PROD*' /

WPIW
  'PROD*' /

WOPP
  'PROD*' /

WGPP
  'PROD*' /

WWPP
  'PROD*' /


 
-- Grid block solution

BPR
 2 11 2 /
 11 13 9 /
/ 

BWSAT
 2 11 2 /
 11 13 9 /
/ 

BGSAT
 2 11 2 /
 11 13 9 /
/ 

-- Region data

RPR
/

ROIP
/

RGIP
/
