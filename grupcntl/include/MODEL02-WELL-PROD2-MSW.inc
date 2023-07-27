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
--       PROD2 - WELL SEGMENT AND COMPLETION SEGMENT SPECIFICATION DATA                                                     
-- ---------------------------------------------------------------------------------------------------------------------------------
WELSEGS
-- Name      Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   PROD2     2573.59964     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length      Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              3.03082     3.03082          0.15200     0.0000100 /
   3             3            1              2              8.02834     8.02834          0.15200     0.0000100 /
   4             4            1              3              9.99506     9.99505          0.15200     0.0000100 /
   5             5            1              4              9.99511     9.99510          0.15200     0.0000100 /
   6             6            1              5              6.24694     6.24693          0.15200     0.0000100 /
   7             7            1              6              6.24696     6.24696          0.15200     0.0000100 /
   8             8            1              7              9.99513     9.99512          0.15200     0.0000100 /
   9             9            1              8              9.99511     9.99510          0.15200     0.0000100 /
   10            10           1              9              9.99509     9.99508          0.15200     0.0000100 /
   11            11           1              10             9.99511     9.99510          0.15200     0.0000100 /
   12            12           1              11             7.23833     7.23832          0.15200     0.0000100 /
    /
COMPSEGS
-- Name 
   PROD2 /
-- I      J     K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   10     4     7      1             50.50000         58.53588        /
   10     4     8      1             58.53588         68.53103        /
   10     4     9      1             68.53103         78.52605        /
   10     4     10     1             78.52605         86.86453        /
    /
ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
