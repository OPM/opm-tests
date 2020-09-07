-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

-- Summary file for the base case, specific version

-- Field Data
-----------------
-- Production rates
FPR
FOPR
FWPR
FGPR
FGSR
FLPR
FOPRH
FWPRH
FGPRH
-- Production cumulatives
FOPT
FWPT
FGPT
FLPT
-- Production ratios
FGOR
FGORH
FWCT
FWCTH

FMCTP
FMCTW
FMCTG
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

WLPR
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

WLPT
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

WTHP
 'PROD*'  /
 
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


WOPGR
/
WGPGR
/
WWPGR
/
WVPGR
/

WOIGR
/
WWIGR
/
WGIGR
/

-- Group data

GOPR
/
GWPR
/
GGPR
/
GGSR
/
GLPR
/

GMCTP
/
GMCTW
/
GMCTG
/
GOPGR
/
GGPGR
/
GWPGR
/
GVPGR
/

GOIGR
/
GWIGR
/
GGIGR
/


GOPT
/
GWPT
/
GGPT
/
GLPT
/

GWIR
/
GGIR
/

GWIT
/
GGIT
/

GOPP
/
GGPP
/
GWPP
/

GWPI
/
GGPI
/


 
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

BWSAT
7 15 10
/
BGSAT
7 15 10
/
BOSAT
7 15 10
/

BKRW
7 15 10
/

BKRO
7 15 10
/

BKROW
7 15 10
/

BKROG
7 15 10
/

BKRG
7 15 10
/

-- Region data

RPR
/

ROIP
/

RGIP
/
