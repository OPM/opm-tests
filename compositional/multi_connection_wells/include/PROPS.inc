-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2024, SINTEF Digital, TNO
-- Copyright (C) 2026, SINTEF Digital

-- Shared compositional fluid, rock and saturation properties.

CNAMES
CO2
METHANE
DECANE
/

ROCK
68.9476
0
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
--Sg Krg Pcg
0.0 0.00 0.0
0.1 0.00 0.0
0.2 0.05 0.0
0.4 0.10 0.0
0.6 0.40 0.0
0.8 0.60 0.0
0.99 0.70 0.0
/

SWFN
--Sw Krw Pcw
0.01 0.0  0.0
0.20 0.00 0.0
0.40 0.01 0.0
0.60 0.20 0.0
0.80 0.80 0.0
1.00 1.00 0.0
/

SOF3
--So  Kro(o-w) Kro (o-g-wi)
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

PVTW
--  Pref  Bw    Cw      muw  Cv
    75.0  1.03  4.0E-5  0.3  0.0
/

DENSITY
--  oil     water    gas    (only the water entry is used)
    800.0   1000.0   1.0
/
