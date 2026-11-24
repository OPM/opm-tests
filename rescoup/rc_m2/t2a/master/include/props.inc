-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The PROPS section of the master decks of rc_m2.
--
-- The relative paths in INCLUDE are resolved from the directory of the deck that is run, so
-- this file only works in a deck at rescoup/rc_m2/<case>/master/.

NOECHO


INCLUDE
'../../../common/master/PVT-WET-GAS.INC' /

INCLUDE
 '../../../common/master/scal_mod2.inc' /


FILLEPS
