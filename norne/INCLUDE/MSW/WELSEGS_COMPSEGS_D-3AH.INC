-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor


WELSEGS
-- Name      Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   D-3AH     2629.54274     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length        Depth Change     Diam        Rough  
-- Main Stem Segments
   2             2            1              1              34.18549      0.87020          0.15200     0.00001 /
   3             3            1              2              66.36106      1.68924          0.15200     0.00001 /
   4             4            1              3              41.34269      1.05239          0.15200     0.00001 /
   5             5            1              4              93.85166      1.83391          0.15200     0.00001 /
   6             6            1              5              11.73249      0.22512          0.15200     0.00001 /
   7             7            1              6              103.43660     1.92816          0.15200     0.00001 /
   8             8            1              7              18.52938      0.28913          0.15200     0.00001 /
   9             9            1              8              83.15094      1.29746          0.15200     0.00001 /
   10            10           1              9              48.04547      0.65527          0.15200     0.00001 /
   11            11           1              10             51.39386      0.22405          0.15200     0.00001 /
   12            12           1              11             77.43111      -0.44376         0.15200     0.00001 /
   13            13           1              12             20.13638      -0.32317         0.15200     0.00001 /
   14            14           1              13             32.19900      -0.51677         0.15200     0.00001 /
    /

COMPSEGS
-- Name 
   D-3AH /
-- I      J      K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   17     50     14     1             0.00000          34.18549        /
   17     49     14     1             34.18549         100.54654       /
   16     49     14     1             100.54654        141.88923       /
   16     48     14     1             141.88923        235.74089       /
   15     48     14     1             235.74089        247.47338       /
   15     47     14     1             247.47338        350.90998       /
   15     46     14     1             350.90998        369.43936       /
   14     46     14     1             369.43936        452.59030       /
   14     45     14     1             452.59030        500.63577       /
   13     45     14     1             500.63577        552.02964       /
   13     44     14     1             552.02964        629.46075       /
   12     44     14     1             629.46075        649.59713       /
   12     43     14     1             649.59713        681.79613       /
    /
