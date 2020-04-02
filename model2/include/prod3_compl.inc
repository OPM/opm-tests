-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

--WELSPECS
---- Well   Grp        I   J   RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
--   PROD3  'WGRP1'   11  19  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
--    /

COMPDAT
-- Well    I    J    K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 38.8799 - MD Out: 47.0872 Transmissibility: 22.9401
   PROD3   11   19   6    6    OPEN     1*    2.294014E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 47.0872 - MD Out: 57.0771 Transmissibility: 13.089
   PROD3   11   19   7    7    OPEN     1*    1.308895E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 57.0771 - MD Out: 67.067 Transmissibility: 27.8022
   PROD3   11   19   8    8    OPEN     1*    2.780218E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 67.067 - MD Out: 69.5 Transmissibility: 37.0367
   PROD3   11   19   9    9    OPEN     1*    3.703671E+1   0.21600   1*   0.00000   1*   'Z' /
    /
