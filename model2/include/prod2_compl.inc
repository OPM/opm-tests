-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

WELSPECS
-- Well   Grp       I   J  RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
   PROD2  'WGRP2'   10  4   1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
    /
COMPDAT
-- Well    I    J   K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 50.5 - MD Out: 58.5359 Transmissibility: 16.4566
   PROD2   10   4   7    7    OPEN     1*    1.645656E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 58.5359 - MD Out: 68.531 Transmissibility: 17.6162
   PROD2   10   4   8    8    OPEN     1*    1.761616E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 68.531 - MD Out: 78.5261 Transmissibility: 80.7301
   PROD2   10   4   9    9    OPEN     1*    8.073011E+1   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 78.5261 - MD Out: 86.8645 Transmissibility: 10.1955
   PROD2   10   4   10   10   OPEN     1*    1.019552E+1   0.21600   1*   0.00000   1*   'Z' /
    /
