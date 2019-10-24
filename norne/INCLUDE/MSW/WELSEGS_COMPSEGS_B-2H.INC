-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor


WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   B-2H     2628.80798     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough  
-- Main Stem Segments
   2             2            1              1              32.88465     1.17156          0.15200     0.00001 /
   3             3            1              2              86.44803     3.07185          0.15200     0.00001 /
   4             4            1              3              18.93421     0.42349          0.15200     0.00001 /
   5             5            1              4              68.64440     1.38693          0.15200     0.00001 /
   6             6            1              5              65.91381     1.28385          0.15200     0.00001 /
   7             7            1              6              66.70159     -0.45032         0.15200     0.00001 /
   8             8            1              7              60.13916     -0.47501         0.15200     0.00001 /
   9             9            1              8              2.47559      -0.01955         0.15200     0.00001 /
   10            10           1              9              63.27279     0.44784          0.15200     0.00001 /
   11            11           1              10             63.70035     1.24859          0.15200     0.00001 /
   12            12           1              11             64.34392     1.26121          0.15200     0.00001 /
   13            13           1              12             68.60470     0.12651          0.15200     0.00001 /
   14            14           1              13             68.08461     -0.18550         0.15200     0.00001 /
   15            15           1              14             74.53264     -0.31561         0.15200     0.00001 /
   16            16           1              15             49.91077     -0.22692         0.15200     0.00001 /
    /

COMPSEGS
-- Name
   B-2H /
-- I      J      K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   17     31     9      1             0.00000          32.88465        /
   19     31     9      1             119.33268        138.26689       /
   20     31     10     1             206.91129        272.82510       /
   21     31     10     1             272.82510        339.52669       /
   22     31     10     1             339.52669        399.66585       /
   22     32     10     1             399.66585        402.14143       /
   24     32     10     1             465.41422        529.11457       /
   25     32     10     1             529.11457        593.45849       /
   29     32     10     1             804.68044        854.59121       /
    /
