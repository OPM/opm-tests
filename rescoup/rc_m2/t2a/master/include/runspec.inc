-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The RUNSPEC section of the master decks of rc_m2: one grid cell, no wells.

DIMENS
 1 1 1 /

OIL
WATER
GAS
DISGAS
VAPOIL

METRIC

START
 1 'OCT' 2018 /


EQLDIMS
 1 1*  25 /


VFPPDIMS
--max.rate  max.THP   max.fw   max.fg   max.ALQ    max.tabs
  25        15        15       15       0          60       /


UDQDIMS
 16 16 0 5 /

UDADIMS
 5 /
--
--
WELLDIMS
--max.well  max.con/well  max.grup  max.w/grup
 5        10            10        10   /

--
TABDIMS
--ntsfun     ntpvt  max.nssfun  max.nppvt  max.ntfip  max.nrpvt
  1          1      50          60         72         60 /


--
UNIFIN
UNIFOUT

NETWORK
 5 3 /
