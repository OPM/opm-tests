-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2


--WELSPECS
---- Well  Grp  I   J   RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
--   INJ2  1*   12  20  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
--    /

COMPDAT
-- Well   I    J    K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 69.1349 - MD Out: 78.5404 Transmissibility: 130.856
   INJ2   12   20   9    9    OPEN     1*    1.308560E+2   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 78.5404 - MD Out: 88.5324 Transmissibility: 19.4049
   INJ2   12   20   10   10   OPEN     1*    1.940490E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 88.5324 - MD Out: 97.5105 Transmissibility: 69.1825
   INJ2   12   20   11   11   OPEN     1*    6.918248E+1   0.21600   1*   0.00000   1*   'Z' /
    /
