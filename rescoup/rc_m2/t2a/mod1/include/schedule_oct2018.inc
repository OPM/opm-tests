-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The schedule of the RES-1 decks of rc_m2 from 1 to 20 Oct 2018: the rates
-- of the first report steps (DATES 2, 5, 10, 15, 19 and 20 Oct 2018), the
-- water injector F-1H, and the UDQ of the injection pressure limit. It ends
-- with the WCONINJE of C-4H, C-1H and F-1H on 20 Oct 2018. No deck changes
-- these controls later, so they hold for the rest of the run.

WCONHIST
 'B-2H'  'OPEN'  'ORAT' 1866.7  0.9  202012  /
 'D-1H'  'OPEN'  'ORAT' 1095.1  1.1  119023  /
 'D-2H'  'OPEN'  'ORAT' 2138.2  0.0  229418  /
/

WCONINJH
 'C-1H'  'WATER' 'OPEN' 2344.0 7* 'RATE' /
 'C-4H'  'GAS'   'OPEN' 521885.3 7* 'RATE'  /
/


DATES
 2 'OCT' 2018 /
/

WCONHIST
 'B-2H'  'OPEN'  'ORAT' 2416.7  1.1  261521  /
 'D-1H'  'OPEN'  'ORAT' 1644.2  1.7  178667  /
 'D-2H'  'OPEN'  'ORAT' 2689.1  0.0  288540  /
/

WCONINJH
 'C-1H'  'WATER' 'OPEN' 3244.0 7* 'RATE' /
 'C-4H'  'GAS'  'OPEN' 671911.2 7* 'RATE'  /
/


DATES
 5 'OCT' 2018 /
/


WCONHIST
 'B-2H'  'OPEN'  'ORAT' 2936.7  1.4  317762  /
 'D-1H'  'OPEN'  'ORAT' 2165.1  2.2  235197  /
 'D-2H'  'OPEN'  'ORAT' 3208.2  0.0  344225  /
/

WCONINJH
 'C-1H'  'WATER' 'OPEN' 3844.0 7* 'RATE' /
 'C-4H'  'GAS'  'OPEN' 721843.4 7* 'RATE'  /
/


DATES
 10 'OCT' 2018 /
/

WCONHIST
 'B-2H'  'OPEN'  'ORAT' 3166.7  1.5  342615  /
 'D-1H'  'OPEN'  'ORAT' 2392.7  2.5  259838  /
 'D-2H'  'OPEN'  'ORAT' 3440.6  0.0  369140  /
/

WCONINJH
 'C-1H'  'WATER' 'OPEN' 4344.0 7* 'RATE' /
 'C-4H'  'GAS'  'OPEN' 771694.8 7* 'RATE'  /
/

DATES
 15 'OCT' 2018 /
/

WELOPEN
 'B-2H'  'SHUT' /
 'D-1H'  'SHUT' /
 'D-2H'  'SHUT' /
/

WCONINJH
 'C-1H'  'WATER' 'OPEN' 0.0 7* 'RATE' /
 'C-4H'  'GAS'  'OPEN' 0.0 7* 'RATE'  /
/


DATES
 19 'OCT' 2018 /
/

WELSPECS
 'F-1H' 'MANI-F' 8 2 1* 'WATER' /
/

COMPDAT
 'F-1H' 8 2 15 20 'OPEN' 2* 0.216 3* 'Z' /
/

WCONINJE
 'F-1H'  'WATER'  'OPEN'  'GRUP'  0.0  1*  450.0 /
/

UDQ
--Initial pressure
DEFINE WUIWBP4 WBP4 /
UPDATE WUIWBP4 NEXT /
-- Injection pressure limitation
DEFINE WUBHPWI (WUIWBP4 + WWIR/(WPI4 	+ 0.001)) /
--DEFINE WUBHPWI (WUIWBP4) /
UPDATE WUBHPWI ON   /
UNITS  WUBHPWI BARA /
/

DATES
 20 'OCT' 2018 /
/

WCONINJE
 'C-4H'  'GAS'    'OPEN'  'RATE'  1000000.0   1*  550.0 /
 'C-1H'  'WATER'  'OPEN'  'GRUP'  7000.0  1*  WUBHPWI /
 'F-1H'  'WATER'  'OPEN'  'GRUP'  7000.0  1*  WUBHPWI /
/
