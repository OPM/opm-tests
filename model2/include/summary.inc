-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

-- Summary file for the base case, specific version

DATE

NEWTON
MLINEARS
NLINEARS
ELAPSED
STEPTYPE
TCPU
TCPUDAY
TIMESTEP
TCPUTS
WNEWTON

-----------------
-- Field Data
-----------------
-- Production rates
FPR
FOPR
FWPR
FGPR
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

-- Group data


GOPR
/
GWPR
/
GGPR
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

-- Region data

RPR
/

ROIP
/

RGIP
/
