-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor


WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   D-1H     2593.53150     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough  
-- Main Stem Segments
   2             2            1              1              4.55853      2.81490          0.15200     0.00001 /
   3             3            1              2              9.15310      5.65206          0.15200     0.00001 /
   4             4            1              3              9.17782      5.66732          0.15200     0.00001 /
   5             5            1              4              9.14038      5.64420          0.15200     0.00001 /
   6             6            1              5              3.58717      2.21509          0.15200     0.00001 /
   7             7            1              6              7.34792      4.53735          0.15200     0.00001 /
   8             8            1              7              4.95129      3.05743          0.15200     0.00001 /
   9             9            1              8              17.51294     10.81428         0.15200     0.00001 /
   10            10           1              9              11.62359     7.17759          0.15200     0.00001 /
   11            11           1              10             5.75014      3.55072          0.15200     0.00001 /
   12            12           1              11             15.57005     9.61454          0.15200     0.00001 /
    /

COMPSEGS
-- Name
   D-1H /
-- I      J      K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   22     21     5      1             0.00000          4.55853         /
   22     21     6      1             4.55853          13.71163        /
   22     21     7      1             13.71163         22.88945        /
   22     21     9      1             32.02983         35.61700        /
   22     22     9      1             35.61700         42.96492        /
   22     22     10     1             42.96492         47.91620        /
   23     22     10     1             47.91620         65.42915        /
   23     22     11     1             65.42915         77.05274        /
   23     22     12     1             77.05274         82.80287        /
   23     22     13     1             82.80287         98.37292        /
    /
