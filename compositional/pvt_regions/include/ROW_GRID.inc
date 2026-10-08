-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026, SINTEF Digital

-- Shared grid of the row of 30 cells in PVTNUM_WATER and PVTNUM_ROCK.

INIT

DX
30*10
/
DY
30*1
/
DZ
30*1
/
TOPS
30*0
/
-- Low, so the pressures even out gradually over the report steps.
PERMX
30*10
/
PERMY
30*10
/
PERMZ
30*10
/
PORO
30*0.1
/
