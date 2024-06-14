-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2024 Equinor
--
--                    FLOWLINE CURVE
--
NOECHO

VFPPROD

-- Table   Datum Depth   Rate Type   WFR Type   GFR Type   THP Type   ALQ Type    UNITS     TAB Type
-- -----   -----------   ---------   --------   --------   --------   --------   --------   --------
      3         114.6         LIQ        WCT        GOR        THP       GRAT     METRIC        BHP /


-- LIQ units - sm³/day  ( 2 values )
   1.0   30000.0 /

-- THP units - Barsa  ( 2 values )
   1.00   201.00 /

-- WCT units - sm³/sm³  ( 2 values )
      0        0.99 /

-- GOR units - sm³/sm³  ( 2 values )
     20         20000 /

-- GRAT units - sm³/day  ( 2 values )
    0.0  3200000.0 /

 1  1  1  1   5.0 45.0 /
 1  1  1  2   5.0 45.0 /
 1  1  2  1   5.0 45.0 /
 1  1  2  2   5.0 45.0 /
 1  2  1  1   5.0 45.0 /
 1  2  1  2   5.0 45.0 /
 1  2  2  1   5.0 45.0 /
 1  2  2  2   5.0 45.0 /
 2  1  1  1   205.0 245.0 /
 2  1  1  2   205.0 245.0 /
 2  1  2  1   205.0 245.0 /
 2  1  2  2   205.0 245.0 /
 2  2  1  1   205.0 245.0 /
 2  2  1  2   205.0 245.0 /
 2  2  2  1   205.0 245.0 /
 2  2  2  2   205.0 245.0 /

ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
