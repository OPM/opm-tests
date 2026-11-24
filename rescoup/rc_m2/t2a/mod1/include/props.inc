-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- The PROPS section of the RES-1 decks of rc_m2.
--
-- The relative paths in INCLUDE are resolved from the directory of the deck that is run, so
-- this file only works in a deck at rescoup/rc_m2/<case>/mod1/.

--------------------------------------------------------------------------------
--
--    Input of fluid properties and relative permeability
--
---------------------------------------------------------

NOECHO

INCLUDE
'../../../common/mod1/PVT-WET-GAS.INC' /


-- initial water saturation
INCLUDE
 '../../../common/mod1/swatinit_46x28x22.grdecl' /

-- relative perm.
INCLUDE
'../../../common/mod1/SCAL_NORNE.INC' /

SCALECRS
 YES /

-- endpoints may be used as tuning papameters
EQUALS
SWL 0.04 1 46 1  28 1  1   /
SWL 0.05 1 46 1  28 2  2   /
SWL 0.15 1 46 1  28 3  3   /
SWL 0.15 1 46 1  28 4  4   /
SWL 0.05 1 46 1  28 5  10  / Ile 2.2.2 and Ile 2.2.1, Ile 2.1.3, Ile 2.1.2, and Ile 2.1.1 Ile 1.3 and Ile 1.2
SWL 0.16 1 46 1  28 11 12  / ile 1.1 and tofte 2.2
SWL 0.07 1 46 1  28 13 15  / tofte 2.1
SWL 0.06 1 46 1  28 16 16  / tofte 1.2.2
SWL 0.12 1 46 1  28 17 22  / Tofte 1.2.1, Tofte 1.2.1, tofte 1.1, tilje
/

COPY
  SWL SWCR /
  SWL SGU  /
/

ADD
SWCR   0.08  1 46 1  28 1 22  /
/

-- SGU = 1 - SWL
MULTIPLY
SGU  -1  1 46 1  28 1 22  /
/

ADD
SGU   1  1 46 1  28 1 22  /
/

EQUALS
SGL   0.0  1 46 1  28 1 22  /
SGCR  0.03 1 46 1  28 1 22  /
SOWCR 0.13 1 46 1  28 1 22  /
SOGCR 0.07 1 46 1  28 1 22  /
SWU   1.0  1 46 1  28 1 22  /
/

-- Hysteresis input
EHYSTR
   0.1   0  0.1 1* KR /

COPY
 'SWCR'  'ISWCR'   1 46 1  28  5  22 /
 'SGU'   'ISGU'    1 46 1  28  5  22 /
 'SWL'   'ISWL'    1 46 1  28  5  22 /
 'SWU'   'ISWU'    1 46 1  28  5  22 /
 'SGL'   'ISGL'    1 46 1  28  5  22 /
 'SOGCR' 'ISOGCR'  1 46 1  28  5  22 /
 'SOWCR' 'ISOWCR'  1 46 1  28  5  22 /
 /

EQUALS
ISGCR 0.22 1 46 1  28  1  22 /
/

RPTPROPS
1 1 1 5*0 0 /
