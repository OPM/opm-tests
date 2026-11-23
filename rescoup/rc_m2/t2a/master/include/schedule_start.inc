-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The start of the SCHEDULE section of the master decks of rc_m2: the time
-- step controls, the VFP tables of the branches of the master network, and
-- the group tree.  The decks give SLAVES after it, then GRUPMAST
-- (include/grupmast.inc).
--
-- The relative paths in INCLUDE are resolved from the directory of the deck that is run, so
-- this file only works in a deck at rescoup/rc_m2/<case>/master/.

TUNING
 1.0  5.0 /
 /
 /

INCLUDE
 '../../../common/master/b1_vfp_flowline.inc' /

INCLUDE
 '../../../common/master/d1_vfp_flowline.inc' /

INCLUDE
 '../../../common/master/flowline_e1_vfp.inc' /


--TSTEP
-- 1.0 /


GRUPTREE
 'PLAT-A' 'FIELD' /

 'MOD1'   'PLAT-A' /

 'B1_M'   'MOD1' /
 'D1_M'   'MOD1' /
 'C1_M'   'MOD1' /
 'F1_M'   'MOD1' /

 'E1_M'   'PLAT-A' /
/
