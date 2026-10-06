-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026, SINTEF Digital

-- Three 5 m layers of 30 cells of 10 x 1 m, of 50, 100 and 200 mD from the
-- top, with a vertical permeability of 10 mD.

INIT

DX
90*10
/
DY
90*1
/
DZ
90*5
/

BOX
1 30 1 1 1 1 /
TOPS
30*0
/
ENDBOX

PERMX
30*50 30*100 30*200
/

PERMY
30*50 30*100 30*200
/

PERMZ
90*10
/

PORO
90*0.1
/
