-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- Shared reservoir setup for the focused WPWE cases, from CECON-02.
-- Grid, fluid and rock properties reuse the existing CECON include files.

RUNSPEC
------------------------------------------------------------------------------------------------

DIMENS
 20 30 10 /


OIL
WATER
GAS
DISGAS
VAPOIL

METRIC

START
 01 'JAN' 2020 /

--
GRIDOPTS
 'YES'        0 /

EQLDIMS
 1 1*  25 /


REGDIMS
-- max. ntfip  nmfipr  max. nrfreg   max. ntfreg
   2          1       1*            1*    /

--
TABDIMS
--ntsfun     ntpvt  max.nssfun  max.nppvt  max.ntfip  max.nrpvt
  1          1      150          60         3         60 /

--
WELLDIMS
--max.well  max.con/well  max.grup  max.w/grup
  6         6             5          3   /


UNIFIN
UNIFOUT


AQUDIMS
-- mxnaqn  mxnaqc  niftbl  nriftb  nanaqu  ncamax  mxnali  mxaaql
    1	   1	  1*	   1*	  1*	   50	   1*	   1*  /


------------------------------------------------------------------------------------------------
GRID
------------------------------------------------------------------------------------------------

--
NEWTRAN

--
GRIDFILE
 0  1 /

--
GRIDUNIT
METRES  /

--
INIT


INCLUDE
 'include/test1_20x30x10.grdecl' /

INCLUDE
 'include/actnum_20x30x10.grdecl' /

INCLUDE
 'include/permx_model5.grdecl' /

PORO
 6000*0.28 /

COPY
  PERMX PERMY /
  PERMX PERMZ /
/

MULTIPLY
  PERMZ 0.1 /
/

EQUALS
  'MULTY'  0.01 1 20  14 14  1 10 /
/


AQUNUM
--AQnr.  I  J  K     Area      Length    PHI    K     Depth    Initial.Pr   PVTNUM  SATNUM
   1    20 30  1     1000000.0   10000    0.25   500   2070.0    295.0        1      1  /
/

AQUCON
--  Connect numerical aquifer to the reservoir
--  Id.nr  I1	I2     J1  J2	 K1   K2    Face    Trans.mult.  Trans.opt.
     1     20	20     1   19	  5   10    'I+'      1.00      1  /
/

------------------------------------------------------------------------------------------------
PROPS
------------------------------------------------------------------------------------------------

INCLUDE
  'include/norne_pvt.inc' /

INCLUDE
 'include/rock.inc' /

INCLUDE
 'include/relperm.inc' /


------------------------------------------------------------------------------------------------
REGIONS
------------------------------------------------------------------------------------------------

EQLNUM
 6000*1 /

EQUALS
  FIPNUM  1  1 20   1 14  1 10 /
  FIPNUM  2  1 20  15 30  1 10 /
/

SATNUM
 6000*1 /

------------------------------------------------------------------------------------------------
SOLUTION
------------------------------------------------------------------------------------------------


RPTRST
  'BASIC = 2' 'PBPD' /

EQUIL
-- Datum    P     woc      Pc    goc    Pc   Rsvd  Rvvd  N
 2070.00  295.0   2070.0   0.0  1000.0  0.0   1     1    0 /

PDVD
  1000.0    120.0
  2070.0    120.0 /

PBVD
  1000.0    120.0
  2070.0    120.0   /


------------------------------------------------------------------------------------------------
