-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor


WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   E-2H     2604.23270     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough  
-- Main Stem Segments
   2             2            1              1              23.57574     -0.37434         0.15200     0.00001 /
   3             3            1              2              82.53853     -1.15526         0.15200     0.00001 /
   4             4            1              3              82.91903     -0.38324         0.15200     0.00001 /
   5             5            1              4              46.32853     -0.21413         0.15200     0.00001 /
   6             6            1              5              36.74341     -0.16982         0.15200     0.00001 /
   7             7            1              6              82.98017     -0.06764         0.15200     0.00001 /
   8             8            1              7              82.96513     -0.15841         0.15200     0.00001 /
   9             9            1              8              82.90476     -0.41770         0.15200     0.00001 /
   10            10           1              9              82.34325     -0.28359         0.15200     0.00001 /
   11            11           1              10             59.75370     -0.10755         0.15200     0.00001 /
   12            12           1              11             20.72494     0.18060          0.15200     0.00001 /
   13            13           1              12             1.31349      0.03085          0.15200     0.00001 /
   14            14           1              13             80.83548     2.58529          0.15200     0.00001 /
   15            15           1              14             36.23310     1.17181          0.15200     0.00001 /
    /

COMPSEGS
-- Name
   E-2H /
-- I      J      K     Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   12     64     8     1             0.00000          23.57574        /
   12     63     8     1             23.57574         106.11427       /
   12     62     8     1             106.11427        189.03330       /
   12     61     8     1             189.03330        235.36183       /
   11     61     8     1             235.36183        272.10524       /
   11     60     8     1             272.10524        355.08541       /
   11     59     8     1             355.08541        438.05054       /
   11     58     8     1             438.05054        520.95530       /
   11     57     8     1             520.95530        603.29855       /
   11     56     8     1             603.29855        663.05224       /
   10     56     8     1             663.05224        683.77719       /
   10     56     9     1             683.77719        685.09068       /
   10     55     9     1             685.09068        765.92615       /
   10     54     9     1             765.92615        802.15925       /
    /
