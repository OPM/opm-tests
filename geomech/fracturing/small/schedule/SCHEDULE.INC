-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2025 Equinor

WELSPECS
        P1          I        8        8   2.5340000e+03      WATER        0        STD       SHUT        YES        0        SEG        0 / 
/

COMPDAT
        P1        8        8        8        8       OPEN       -1   1.9960170e+01   2.1600000e-01       -1   0.0000000e+00         1*          Z       -1 / 
        P1        8        8        9        9       OPEN       -1   2.4948690e+01   2.1600000e-01       -1   0.0000000e+00         1*          Z       -1 / 
        P1        8        8       10       10       OPEN       -1   2.4947167e+01   2.1600000e-01       -1   0.0000000e+00         1*          Z       -1 / 
        P1        8        8       11       11       OPEN       -1   2.1830104e+01   2.1600000e-01       -1   0.0000000e+00         1*          Z       -1 / 
        P1        8        8       12       12       OPEN       -1   4.3658685e+01   2.1600000e-01       -1   0.0000000e+00         1*          Z       -1 / 
/

WCONINJE
        P1      WATER       OPEN       RATE   3.0000000e+03             1*             1*             1*        0             1*             1*             1*             1*             1* / 
/

WTEMP
        P1   1.000000e+01 / 
/

BCPROP
       1       FREE      WATER   1.0000000e+00   1.0000000e+00   1.0000000e+00      FIXED        1        1        1   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00 / 
       2       FREE      WATER   1.0000000e+00   1.0000000e+00   1.0000000e+00      FIXED        1        1        1   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00 / 
       3       FREE      WATER   1.0000000e+00   1.0000000e+00   1.0000000e+00      FIXED        1        1        1   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00 / 
       4       FREE      WATER   1.0000000e+00   1.0000000e+00   1.0000000e+00      FIXED        1        1        1   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00 / 
       6       NONE      WATER   1.0000000e+00   1.0000000e+00   1.0000000e+00      FIXED        1        1        1   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00 / 
       5       NONE      WATER   1.0000000e+00   1.0000000e+00   1.0000000e+00      FIXED        1        1        1   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00   0.0000000e+00 / 
/

TSTEP
   1
   2
   4
   4
   4
   8
   9.000000
   32.000000
   30.000000
   30.000000
   30.000000
   30.000000
   30.000000
   30.000000
   30.000000
   30.000000
   30.000000
    4.000000
/
