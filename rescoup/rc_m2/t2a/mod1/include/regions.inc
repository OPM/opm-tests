-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The REGIONS section of the RES-1 decks of rc_m2.
--
-- The relative paths in INCLUDE are resolved from the directory of the deck that is run, so
-- this file only works in a deck at rescoup/rc_m2/<case>/mod1/.

--
INCLUDE
 '../../../common/mod1/fipnum_46x28x22.grdecl' /

EQUALS
'SATNUM'  1    1  46  1   28    1  22  /
'IMBNUM'  2    1  46  1   28    1  22  /
'PVTNUM'  1    1  46  1   28    1  22  /
/

INCLUDE
 '../../../common/mod1/eqlnum_46x28x22.grdecl' /


EQUALS
 'FIPCOL' 1 4*  1  4 /
 'FIPCOL' 2 4*  5 15 /
 'FIPCOL' 3 4* 16 22 /
/
