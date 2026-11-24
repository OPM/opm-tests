-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The SOLUTION section of the master decks of rc_m2.

RPTRST
 BASIC=2 /

EQUIL
-- Datum    P     woc     Pc   goc      Pc  Rsvd  Rvvd  N
2300.00   300.0  2300.0   0.0  1800.00  0.0   1     1   0 /

PBVD
 2000.0 100.0
 2300.0 100.0 /

PDVD
 2000.0 100.0
 2300.0 100.0 /
