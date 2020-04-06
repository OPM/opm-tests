-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

--WELSPECS
---- Well   Grp  I   J  RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
--   PROD4  1*   11  6  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
--    /

COMPDAT
-- Well    I    J   K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 0 - MD Out: 8.3925 Transmissibility: 29.8535
   PROD4   11   6   1    1    OPEN     1*    2.985345E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 8.3925 - MD Out: 18.4021 Transmissibility: 0.659477
   PROD4   11   6   2    2    OPEN     1*    6.594767E-1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 18.4021 - MD Out: 28.4119 Transmissibility: 9.11594
   PROD4   11   6   3    3    OPEN     1*    9.115936E+0   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 28.4119 - MD Out: 37.2758 Transmissibility: 41.4122
   PROD4   11   6   4    4    OPEN     1*    4.141221E+1   0.21600   1*   0.00000   1*   'Z' /
    /
