-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   INJ2     2593.13677     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length      Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              3.04940     3.04930          0.15200     0.0000100 /
   3             3            1              2              8.04535     8.04507          0.15200     0.0000100 /
   4             4            1              3              9.99195     9.99161          0.15200     0.0000100 /
   5             5            1              4              9.99198     9.99164          0.15200     0.0000100 /
   6             6            1              5              6.24496     6.24474          0.15200     0.0000100 /
   7             7            1              6              6.24492     6.24471          0.15200     0.0000100 /
   8             8            1              7              9.99198     9.99164          0.15200     0.0000100 /
   9             9            1              8              9.99201     9.99167          0.15200     0.0000100 /
   10            10           1              9              9.99192     9.99158          0.15200     0.0000100 /
   11            11           1              10             9.99192     9.99158          0.15200     0.0000100 /
   12            12           1              11             9.48501     9.48468          0.15200     0.0000100 /
    /
COMPSEGS
-- Name
   INJ2 /
-- I      J      K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   12     20     9      1             69.13491         78.54044        /
   12     20     10     1             78.54044         88.53239        /
   12     20     11     1             88.53239         97.51045        /
    /
