-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor

WELSPECS
-- Well  Grp  I   J  RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
   INJ1  TEST   12  4  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
   INJ2  TEST   12  11  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
  /
    
COMPDAT
-- Well   I    J   K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
   INJ1   12   4   10   10   OPEN     1*    3.805588E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ1   12   4   11   11   OPEN     1*    2.218552E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ1   12   4   12   12   OPEN     1*    3.851861E+2   0.21600   1*   0.00000   1*   'Z' /
   INJ1   11   4   12   12   OPEN     1*    5.047051E+1   0.21600   1*   0.00000   1*   'Z' /
   INJ1   11   3   12   12   OPEN     1*    4.117891E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ1   11   3   13   13   OPEN     1*    4.451832E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ1   11   2   13   13   OPEN     1*    4.378857E+2   0.21600   1*   0.00000   1*   'Z' /
   INJ1   11   2   14   14   OPEN     1*    4.254187E+2   0.21600   1*   0.00000   1*   'Z' /

   INJ2   12   11   8    8    OPEN     1*    2.646663E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   12   11   9    9    OPEN     1*    1.489845E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   12   11   10   10   OPEN     1*    3.123783E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   11   11   10   10   OPEN     1*    1.298751E+1   0.21600   1*   0.00000   1*   'Z' /
   INJ2   11   12   10   10   OPEN     1*    6.245692E+2   0.21600   1*   0.00000   1*   'Z' /
   INJ2   11   12   11   11   OPEN     1*    3.027223E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   11   12   12   12   OPEN     1*    2.764161E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   11   12   13   13   OPEN     1*    3.038591E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   11   13   13   13   OPEN     1*    1.733318E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   10   13   13   13   OPEN     1*    8.708993E+2   0.21600   1*   0.00000   1*   'Z' /
   INJ2   10   13   14   14   OPEN     1*    5.148531E+3   0.21600   1*   0.00000   1*   'Z' /
   INJ2   10   13   15   15   OPEN     1*    3.347545E+3   0.21600   1*   0.00000   1*   'Z' /
 /

WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   INJ1     2040.80786     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              15.67696     1.07239          0.15200     0.0000100 /
   3             3            1              2              26.44181     1.71091          0.15200     0.0000100 /
   4             4            1              3              13.24838     0.72078          0.15200     0.0000100 /
   5             5            1              4              2.88004      0.09540          0.15200     0.0000100 /
   6             6            1              5              26.63327     0.57359          0.15200     0.0000100 /
   7             7            1              6              56.70546     1.50616          0.15200     0.0000100 /
   8             8            1              7              32.65352     1.01595          0.15200     0.0000100 /
   9             9            1              8              5.46836      0.17581          0.15200     0.0000100 /
 /

COMPSEGS
-- Name
   INJ1 /
-- I      J     K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   12     4     10     1             0.00000          31.35391        /
   12     4     11     1             31.35391         52.88361        /
   12     4     12     1             52.88361         57.85067        /
   11     4     12     1             57.85067         58.64369        /
   11     3     12     1             58.64369         111.11722       /
   11     3     13     1             111.11722        172.05462       /
   11     2     13     1             172.05462        176.42426       /
   11     2     14     1             176.42426        182.99133       /
 /

WELSEGS
-- Name     Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   INJ2     2040.12627     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              8.90379      0.71969          0.15200     0.0000100 /
   3             3            1              2              18.46997     1.49291          0.15200     0.0000100 /
   4             4            1              3              24.34800     1.76042          0.15200     0.0000100 /
   5             5            1              4              14.85521     0.99067          0.15200     0.0000100 /
   6             6            1              5              3.33762      0.15776          0.15200     0.0000100 /
   7             7            1              6              20.32708     0.81001          0.15200     0.0000100 /
   8             8            1              7              41.30717     1.44667          0.15200     0.0000100 /
   9             9            1              8              45.16068     1.38238          0.15200     0.0000100 /
   10            10           1              9              32.36706     0.87516          0.15200     0.0000100 /
   11            11           1              10             16.48358     0.38923          0.15200     0.0000100 /
   12            12           1              11             30.63304     0.46551          0.15200     0.0000100 /
   13            13           1              12             43.85461     0.52102          0.15200     0.0000100 /
 /

COMPSEGS
-- Name
   INJ2 /
-- I      J      K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   12     11     8      1             0.00000          17.80758        /
   12     11     9      1             17.80758         36.93994        /
   12     11     10     1             36.93994         66.50358        /
   11     11     10     1             66.50358         66.65037        /
   11     12     10     1             66.65037         73.17881        /
   11     12     11     1             73.17881         107.30452       /
   11     12     12     1             107.30452        155.79315       /
   11     12     13     1             155.79315        197.62588       /
   11     13     13     1             197.62588        220.52727       /
   10     13     13     1             220.52727        230.59304       /
   10     13     14     1             230.59304        281.79335       /
   10     13     15     1             281.79335        318.30225       /
 /
