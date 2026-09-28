-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026, SINTEF Digital

-- Shared initial state of the row of 30 cells in PVTNUM_WATER and PVTNUM_ROCK.

-- Region 1 starts 20 bar above and region 2 20 bar below the rock reference
-- pressure, so the fluids flow across the region boundary.
PRESSURE
15*170. 15*130.
/
SGAS
30*0.0
/
SWAT
30*0.5
/
TEMPI
30*150
/
ZMF
30*0.05
30*0.15
30*0.80
/
