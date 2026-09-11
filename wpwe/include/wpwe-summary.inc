-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- Timestep event indicators, plus enough of the well and connection state to
-- explain why each event happened.

WPWE0
/
WPWE1
/
WPWE2
/
WPWE3
/
WPWE4
/
WPWE5
/
WPWE6
/
WPWE7
/

-- Well level context.  WSTAT distinguishes a shut well from a stopped one,
-- which is what WPWE4 and WPWE7 turn on.
ALL

-- Connection level context.  CECON tests the connection ratios, not the well
-- ratios, so these are what decide when a workover fires and on which
-- completion.  Without them an event cannot be traced back to its cause.
CWCT
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
CGOR
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
CWGR
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
COPR
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
CWPR
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
CGPR
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
CPI
 'B-1H' /
 'B-2H' /
 'B-3H' /
 'C-1H' /
 'C-2H' /
/
