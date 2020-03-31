-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

WELSPECS
-- Well  Grp  I  J   RefDepth  Type  DrainRad  GasInEq  AutoShut  XFlow  FluidPVT  HydSDens  FluidInPlReg
   INJ1  INJE   2  13  1*      WATER   0.0       STD      STOP      YES    0         SEG       0            /
    /
    
COMPDAT
-- Well   I   J    K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
-- ---- Completions for completion type Perforation ----
-- Perforation Completion : MD In: 0 - MD Out: 8.46488 Transmissibility: 117.266
   INJ1   2   13   1    1    OPEN     1*    1.172656E+2   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 8.46488 - MD Out: 18.4542 Transmissibility: 1.33077
   INJ1   2   13   2    2    OPEN     1*    1.330772E+0   0.21600   1*   0.00000   1*   'Z' /
-- Perforation Completion : MD In: 18.4542 - MD Out: 24.7358 Transmissibility: 33.3908
   INJ1   2   13   3    3    OPEN     1*    3.339084E+1   0.21600   1*   0.00000   1*   'Z' /
    /
