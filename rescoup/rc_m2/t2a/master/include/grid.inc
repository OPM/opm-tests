-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The GRID section of the master decks of rc_m2: one grid cell.

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

SPECGRID
 1 1 1 1 F /

COORD
  2000.0000  2000.0000  2000.0000   2000.0000  2000.0000  2002.5000
  2100.0000  2000.0000  2000.0000   2100.0000  2000.0000  2002.5000
  2000.0000  2100.0000  2000.0000   2000.0000  2100.0000  2002.5000
  2100.0000  2100.0000  2000.0000   2100.0000  2100.0000  2002.5000
/

ZCORN
  2000.0000  2000.0000  2000.0000  2000.0000  2002.5000  2002.5000
  2002.5000  2002.5000 /


PORO
 0.25 /

PERMX
 2100 /

COPY
 PERMX PERMY /
 PERMX PERMZ /
/

MULTIPLY
 'PERMZ' 0.1 /
/

RPTGRID
 'ALLNNC' /
