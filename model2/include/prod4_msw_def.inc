-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

WELSEGS
-- Name      Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   PROD4     2573.46482     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              4.19625      4.17540          0.15200     0.0000100 /
   3             3            1              2              9.20107      9.15536          0.15200     0.0000100 /
   4             4            1              3              10.00971     9.95999          0.15200     0.0000100 /
   5             5            1              4              9.64411      9.59620          0.15200     0.0000100 /
    /
COMPSEGS
-- Name 
   PROD4 /
-- I      J     K     Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   11     6     1     1             0.00000          8.39250         /
   11     6     2     1             8.39250          18.40214        /
   11     6     3     1             18.40214         28.41193        /
   11     6     4     1             28.41193         37.27578        /
    /
