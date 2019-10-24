-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor


WELSEGS
-- Name      Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   E-3AH     2606.75341     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough  
-- Main Stem Segments
   2             2            1              1              23.39931     0.81537          0.15200     0.00001 /
   3             3            1              2              9.46590      0.32985          0.15200     0.00001 /
   4             4            1              3              78.88220     2.74873          0.15200     0.00001 /
   5             5            1              4              51.70261     1.80163          0.15200     0.00001 /
   6             6            1              5              37.40843     1.24585          0.15200     0.00001 /
   7             7            1              6              90.35401     -0.46360         0.15200     0.00001 /
   8             8            1              7              10.70360     -0.10790         0.15200     0.00001 /
   9             9            1              8              22.55691     -0.22740         0.15200     0.00001 /
   10            10           1              9              58.54508     -0.67202         0.15200     0.00001 /
   11            11           1              10             54.55903     -0.51415         0.15200     0.00001 /
   12            12           1              11             8.37720      0.11018          0.15200     0.00001 /
   13            13           1              12             2.18543      0.04376          0.15200     0.00001 /
   14            14           1              13             18.01759     0.56549          0.15200     0.00001 /
   15            15           1              14             8.50625      0.31349          0.15200     0.00001 /
   16            16           1              15             41.88622     1.54369          0.15200     0.00001 /
    /

COMPSEGS
-- Name 
   E-3AH /
-- I      J      K     Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   7      65     2     1             0.00000          23.39931        /
   7      66     2     1             23.39931         32.86521        /
   8      66     2     1             32.86521         111.74741       /
   8      67     2     1             111.74741        163.45002       /
   9      67     2     1             163.45002        200.85846       /
   9      68     2     1             200.85846        291.21247       /
   9      69     2     1             291.21247        301.91607       /
   10     69     2     1             301.91607        324.47298       /
   10     69     1     1             324.47298        383.01806       /
   10     70     1     1             383.01806        437.57710       /
   11     70     2     1             445.95430        448.13972       /
   11     71     1     1             474.65774        516.54978       /
    /
