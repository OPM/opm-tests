-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor

WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   F-4H     2618.92993     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              12.39165     12.36053         0.15200     0.0000100 /
   3             3            1              2              16.25938     16.11762         0.15200     0.0000100 /
   4             4            1              3              8.98113      8.82657          0.15200     0.0000100 /
   5             5            1              4              6.86808      6.68655          0.15200     0.0000100 /
   6             6            1              5              3.20457      3.11987          0.15200     0.0000100 /
   7             7            1              6              3.21625      3.13124          0.15200     0.0000100 /
   8             8            1              7              3.81189      3.71114          0.15200     0.0000100 /
   9             9            1              8              1.65358      1.60987          0.15200     0.0000100 /
/

COMPSEGS
-- Name
   F-4H /
-- I      J      K     Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   36     68     1     1             0.00000          12.39165        /
   36     68     2     1             12.39165         28.65104        /
   36     68     3     1             28.65104         37.63217        /
/

