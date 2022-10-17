-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2018-2022 Equinor
--
-- This file contains the multi-segment well specification keywords for MODEL02.
--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
-- ---------------------------------------------------------------------------------------------------------------------------------
--       INJE1 - WELL SEGMENT AND COMPLETION SEGMENT SPECIFICATION DATA                                                     
-- ---------------------------------------------------------------------------------------------------------------------------------
WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   INJ1     2533.59374     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length      Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              4.23244     4.23114          0.15200     0.0000100 /
   3             3            1              2              9.22711     9.22429          0.15200     0.0000100 /
   4             4            1              3              9.98936     9.98630          0.15200     0.0000100 /
   5             5            1              4              9.98939     9.98633          0.15200     0.0000100 /
   6             6            1              5              6.24336     6.24145          0.15200     0.0000100 /
   7             7            1              6              6.24330     6.24139          0.15200     0.0000100 /
   8             8            1              7              9.98933     9.98627          0.15200     0.0000100 /
   9             9            1              8              9.98932     9.98626          0.15200     0.0000100 /
   10            10           1              9              9.98938     9.98632          0.15200     0.0000100 /
   11            11           1              10             9.98939     9.98633          0.15200     0.0000100 /
   12            12           1              11             9.52742     9.52451          0.15200     0.0000100 /
    /
COMPSEGS
-- Name
   INJ1 /
-- I     J      K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   2     13     1      1             0.00000          8.46488         /
   2     13     2      1             8.46488          18.45423        /
   2     13     3      1             18.45423         24.73579        /
/   
ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
