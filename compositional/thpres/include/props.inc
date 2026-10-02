-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026, SINTEF Digital

CNAMES
CO2
METHANE
DECANE
/

EOS
PR /

BIC
0
0
0
/

ACF
0.22394 0.01142 0.4884
/

PCRIT
73.773
45.992
21.03
/

TCRIT
304.128
190.564
617.7
/

MW
44.00
16.04
142.28
/

VCRIT
0.09412
0.09863
0.60980
/

SGFN
0.0 0.00 0.0
0.1 0.00 0.0
0.2 0.05 0.0
0.4 0.10 0.0
0.6 0.40 0.0
0.8 0.60 0.0
0.99 0.70 0.0
/

SWFN
0.01 0.0  0.0
0.20 0.00 0.0
0.40 0.01 0.0
0.60 0.20 0.0
0.80 0.80 0.0
1.00 1.00 0.0
/

SOF3
0.0 0.00 0.0
0.1 0.00 0.0
0.2 0.05 0.05
0.4 0.10 0.10
0.6 0.40 0.40
0.8 0.60 0.60
0.99 0.70 0.70
/

STCOND
15.0 1.0 /

ROCK
    68.9476  0.0 /

PVTW
    75.0  1.03  4.0E-5  0.3  0.0 /

DENSITY
    800.0  1000.0  1.0 /

-- One table per equilibration region.
ZMFVD
 2000   0 0.7 0.3
 2100   0 0.3 0.7  /
 2000   0 0.7 0.3
 2100   0 0.3 0.7  /

RTEMP
100
/
