-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

WELSPECS
-- Well   Grp     I  J  RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
   PROD1  WGRP1   6  3  1*        OIL   0.0       STD      STOP      YES    0         SEG       0            /
    /
COMPDAT
-- Well    I   J   K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 54.1443 - MD Out: 63.9786 Transmissibility: 5.97415
   PROD1   6   3   7    7    OPEN     1*    5.974150E+0   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 63.9786 - MD Out: 74.2244 Transmissibility: 9.83149
   PROD1   6   3   8    8    OPEN     1*    9.831486E+0   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 74.2244 - MD Out: 84.47 Transmissibility: 188.574
   PROD1   6   3   9    9    OPEN     1*    1.885740E+2   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 84.47 - MD Out: 94 Transmissibility: 46.8491
   PROD1   6   3   10   10   OPEN     1*    4.684912E+1   0.21600   1*   0.00000   1*   'Z' /
    /
