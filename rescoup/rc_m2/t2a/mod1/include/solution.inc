-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The SOLUTION section of the RES-1 decks of rc_m2.
--
-- The relative paths in INCLUDE are resolved from the directory of the deck that is run, so
-- this file only works in a deck at rescoup/rc_m2/<case>/mod1/.

RPTRST
BASIC=2 KRO KRW KRG FIP /

RPTSOL

FIP=3  SWAT /

---------------------------------------------------------------------------------
-- equilibrium data: do not include this file in case of RESTART

INCLUDE
'../../../common/mod1/E3.prop' /

THPRES
  1 2 0.588031 /
  2 1 0.588031 /
  1 3 0.787619 /
  3 1 0.787619 /
  1 4 7.00083  /
  4 1 7.00083  /
/
