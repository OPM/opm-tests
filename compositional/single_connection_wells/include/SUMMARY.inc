-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2024, SINTEF Digital, TNO
-- Copyright (C) 2026, SINTEF Digital

-- Shared field, group and well liquid summary requests.

ALL

-- ALL omits liquid production rates and totals.
FLPR
FLPT
-- FIELD is the root group containing both wells. Check group liquid output
-- alongside the field and well liquid summaries.
GLPR
FIELD /
GLPT
FIELD /
WLPR
/
WLPT
/
