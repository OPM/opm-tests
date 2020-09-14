-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor


WELSPECS
-- Well  Grp  I   J  RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
   INJ1  TEST   12  4  1*        WATER   0.0       STD      STOP      YES    0         SEG       0            /
   INJ2  TEST   12  11  1*       WATER   0.0       STD      STOP      YES    0         SEG       0            /
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
