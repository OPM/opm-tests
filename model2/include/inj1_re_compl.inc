-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

--WELSPECS
---- Well  Grp  I  J   RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
--   INJ1  1*   2  13  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
--    /

COMPDAT
-- Well   I   J    K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 62.614 - MD Out: 70.8983 Transmissibility: 17.0311
   INJ1   2   13   8    8    OPEN     1*    1.703110E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 70.8983 - MD Out: 80.8877 Transmissibility: 45.6905
   INJ1   2   13   9    9    OPEN     1*    4.569053E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 80.8877 - MD Out: 90.877 Transmissibility: 25.5814
   INJ1   2   13   10   10   OPEN     1*    2.558139E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 90.877 - MD Out: 99.9426 Transmissibility: 30.8216
   INJ1   2   13   11   11   OPEN     1*    3.082158E+1   0.21600   1*   0.00000   1*   'Z' /
    /
