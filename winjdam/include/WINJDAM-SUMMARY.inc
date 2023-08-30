-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2023 Equinor

-- This file is one of the include files for INJMULT testing cases.

-- ----------------------------------------------------------------------------
-- ----------------------------------------------------------------------------


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

WPI
  'INJ-1' /
/

WINJFVR
 'INJ-1' /
/

WINJFVT
 'INJ-1' /
/

WINJFC
 'INJ-1' /
/

-- CONNECTION DATA
CPI
 'INJ-1' /
/

CINJFVR
  'INJ-1' /
/
CINJFVT
  'INJ-1' /
/
CFCSKIN
  'INJ-1' /
/
CFCWIDTH
  'INJ-1' /
/
CFCPERM
  'INJ-1' /
/
CFCPORO
  'INJ-1' /
/
CFCRAD
  'INJ-1' /
/
CFCAOF
  'INJ-1' /
/
