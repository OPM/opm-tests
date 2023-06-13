-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2023 Equinor

-- This file is one of the include files for INJMULT testing cases.

-- ----------------------------------------------------------------------------
-- ----------------------------------------------------------------------------

NOECHO

ALL

-- WELL DATA
WBP
/
WBP4
/
WGLR
/
WLPR
/
WOPP
/
WMCTL
/

-- CONNECTION DATA
CPI
 'INJ-1' /
/


-- Simulator performance:
DATE
MAXDPR
MAXDSO
MAXDSW
MAXDSG
NEWTON
NLINEARS
TCPU
TCPUDAY
TIMESTEP
ELAPSED
MSUMLINS
MLINEARS
WNEWTON
/
STEPTYPE

ECHO
