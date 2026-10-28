-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026, SINTEF Digital

-- Three rows of 30 cells of 10 x 1 x 1 m and 100 mD, with no flow between
-- the rows.

INIT

DX
90*10
/
DY
90*1
/
DZ
90*1
/

TOPS
90*0
/

PERMX
90*100
/

PERMY
90*100
/

PERMZ
90*100
/

PORO
90*0.1
/

MULTY
90*0
/
