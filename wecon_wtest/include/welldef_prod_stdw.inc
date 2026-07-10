-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor

WELSPECS
-- Well   Grp    I  J  RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
   PROD1  TEST   1  2   1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
   PROD2  TEST   1  11  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
   PROD3  TEST   1  8   1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
/
    
COMPDAT
-- Well    I   J   K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
   PROD1   1   2   2    2    OPEN     1*    2.620758E-1   0.21600   1*   0.00000   1*   'Z' /
   PROD1   1   2   3    3    OPEN     1*    2.067888E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   2   3    3    OPEN     1*    5.813045E-1   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   2   4    4    OPEN     1*    1.662311E+0   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   2   5    5    OPEN     1*    1.056551E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   3   5    5    OPEN     1*    8.141714E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   3   6    6    OPEN     1*    2.038282E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   3   7    7    OPEN     1*    4.730186E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   3   8    8    OPEN     1*    6.394396E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   3   9    9    OPEN     1*    6.289439E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   4   9    9    OPEN     1*    2.448046E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD1   2   4   10   10   OPEN     1*    1.286707E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD1   3   4   10   10   OPEN     1*    7.782286E+3   0.21600   1*   0.00000   1*   'Y' /
   PROD1   3   5   10   10   OPEN     1*    7.891051E+3   0.21600   1*   0.00000   1*   'Y' /
   PROD1   3   5   11   11   OPEN     1*    3.861438E-1   0.21600   1*   0.00000   1*   'Z' /

   PROD2   1   11   2    2    OPEN     1*    4.215980E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD2   1   11   3    3    OPEN     1*    7.786982E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD2   1   11   4    4    OPEN     1*    1.037343E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   1   11   5    5    OPEN     1*    3.310083E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD2   2   11   5    5    OPEN     1*    9.111885E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD2   2   11   6    6    OPEN     1*    8.310540E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD2   2   11   7    7    OPEN     1*    2.651428E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   2   11   8    8    OPEN     1*    4.453475E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   2   10   8    8    OPEN     1*    3.629758E+3   0.21600   1*   0.00000   1*   'X' /
   PROD2   3   10   8    8    OPEN     1*    4.682212E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   3   10   7    7    OPEN     1*    5.367339E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   3   10   6    6    OPEN     1*    1.240750E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   3   9    6    6    OPEN     1*    1.486882E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   3   9    5    5    OPEN     1*    2.037473E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   4   9    5    5    OPEN     1*    3.234876E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD2   4   9    4    4    OPEN     1*    4.679529E+3   0.21600   1*   0.00000   1*   'Z' /

   PROD3   1   8   1    1    OPEN     1*    1.358143E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD3   1   8   2    2    OPEN     1*    4.692989E-1   0.21600   1*   0.00000   1*   'Z' /
   PROD3   1   8   3    3    OPEN     1*    2.091210E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD3   1   8   4    4    OPEN     1*    2.781385E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD3   1   8   5    5    OPEN     1*    1.010722E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   8   5    5    OPEN     1*    5.384757E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   8   6    6    OPEN     1*    8.313947E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   8   7    7    OPEN     1*    1.986928E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   8   8    8    OPEN     1*    1.716222E+3   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   8   9    9    OPEN     1*    2.607651E+1   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   7   9    9    OPEN     1*    5.911771E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   7   10   10   OPEN     1*    8.088040E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   7   11   11   OPEN     1*    4.311953E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   7   12   12   OPEN     1*    7.640429E+2   0.21600   1*   0.00000   1*   'Z' /
   PROD3   2   7   13   13   OPEN     1*    1.800719E+2   0.21600   1*   0.00000   1*   'Z' /
 /

