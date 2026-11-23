-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The RUNSPEC section of the RES-1 decks of rc_m2, without VFPPDIMS and NETWORK.
-- Each deck gives VFPPDIMS after the include, and NETWORK if it has a network.

DIMENS
46 28 22   /

--NOSIM

PARALLEL
  4 /

GRIDOPTS
 'YES' 0 /

OIL

WATER

GAS

DISGAS

VAPOIL

ENDSCALE
NODIR   REVERS /

METRIC

SATOPTS
HYSTER  /

START
 1  'OCT' 2018 /

EQLDIMS
 5 1*  20 /

EQLOPTS
 'THPRES'  /   no fine equilibration if swatinit is being used

REGDIMS
-- ntfip  nmfipr  nrfreg  ntfreg
    22      3      1*      20    /

WELLDIMS
  10  36  10  5 /

TABDIMS
--ntsfun ntpvt nssfun nppvt ntfip nrpvt ntendp
   2     2     33     60   16    60 /

FAULTDIM
10000 /

UDQDIMS
 16 16 5*  5 /

UDADIMS
 10 /

NSTACK
 30 /

UNIFIN
UNIFOUT
