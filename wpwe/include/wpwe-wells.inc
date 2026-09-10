-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 Equinor

-- Initial well definitions and controls from CECON-02.

WELSPECS
--WELL     GROUP  IHEEL JHEEL   DREF PHASE   DRAD INFEQ SIINS XFLOW PRTAB  DENS
 'B-1H'  'B1'  15    3      1*   OIL     1*   1*   SHUT 1* 1* 1* /
 'B-2H'  'B1'   8    7      1*   OIL     1*   1*   SHUT 1* 1* 1* /
 'B-3H'  'B1'  14   12      1*   OIL     1*   1*   SHUT 1* 1* 1* /
 'C-1H'  'C1'  13   20      1*   OIL     1*   1*   SHUT 1* 1* 1* /
 'C-2H'  'C1'  13   28      1*   OIL     1*   1*   SHUT 1* 1* 1* /
/

COMPDAT
--WELL      I   J    K1   K2 OP/SH  SATN    TRAN    WBDIA    KH     SKIN DFACT   DIR    PEQVR
 'B-1H'    15    3    1    4   OPEN    1*      1*    0.216    1*	0    1*    Z	   1* /
 'B-2H'     8    7    1    6   OPEN    1*      1*    0.216    1*	0    1*    Z	   1* /
 'B-3H'    14   12    1    5   OPEN    1*      1*    0.216    1*	0    1*    Z	   1* /
 'C-1H'    13   20    1    5   OPEN    1*      1*    0.216    1*	0    1*    Z	   1* /
 'C-2H'    13   28    1    5   OPEN    1*      1*    0.216    1*	0    1*    Z	   1* /
/

WCONPROD
--  Well_name  Status  Ctrl  Orate   Wrate  Grate Lrate  RFV  FBHP   WHP  VFP Glift
   'B-1H'      OPEN    ORAT  1500.0   1*    1*    1*     1*   100.0  1*   1*  1*  /
   'B-2H'      OPEN    ORAT  1500.0   1*    1*    1*     1*   100.0  1*   1*  1*  /
   'B-3H'      OPEN    ORAT  1500.0   1*    1*    1*     1*   100.0  1*   1*  1*  /
   'C-1H'      OPEN    ORAT  1500.0   1*    1*    1*     1*   100.0  1*   1*  1*  /
   'C-2H'      OPEN    ORAT  1500.0   1*    1*    1*     1*   100.0  1*   1*  1*  /
/
