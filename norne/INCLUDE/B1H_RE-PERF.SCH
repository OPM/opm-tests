-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor


--  WARN: B-1H Layer Tofte 2.1 2002 (13-15) changed to (13-13), pinchout?
--  WARN: B-1H Layer Tofte 2.1 2002 (13-15) changed to (13-13), pinchout?
--      : B-1H Perforation Tofte 2.1 2002 Top:  3730.00 Bot:  3760.00 Diam: 0.22 Skin: 0.00
--      : >> --Tofte 2.1 2002
--      : B-1H Perforation Tofte 2.1 2002 Top:  3986.00 Bot:  4250.00 Diam: 0.22 Skin: 0.00
--      : >> --Tofte 2.1 2002
--  WARN: B-1H Perf interval 4065.999853 to 4066.076648 outside all cells, discarded
--      : B-1H Connection 17 44 15 Perf. Len  19.57 ( 22.0%)
--      : B-1H Connection 17 45 15 Perf. Len  10.43 ( 12.1%)
--      : B-1H Connection 17 47 15 Perf. Len  23.79 ( 27.0%)
--      : B-1H Connection 17 48 15 Perf. Len  56.21 ( 64.8%)
--      : B-1H Connection 18 48 15 Perf. Len  30.25 ( 34.8%)
--      : B-1H Connection 18 49 15 Perf. Len  30.98 ( 35.3%)
--      : B-1H Connection 18 49 14 Perf. Len  58.10 ( 65.3%)
--      : B-1H Connection 18 50 14 Perf. Len  64.58 ( 73.7%)


WELSPECS 
     'B-1H'   'MANI-B2'   14   34  1*       'OIL'  2*      'STOP'  4* /
/

COMPDAT 
-- WELL        I    J    K1  K2            Sat.        CF       DIAM        KH SKIN ND        DIR   Ro 
     'B-1H'   17   44   15   15      'OPEN'  1*     34.720      0.216   3095.832  2*         'Y'     12.828 /
     'B-1H'   17   45   15   15      'OPEN'  1*     19.976      0.216   1779.033  2*         'Y'     12.754 /
     'B-1H'   17   47   15   15      'OPEN'  1*     51.570      0.216   4598.853  2*         'Y'     12.835 /
     'B-1H'   17   48   15   15      'OPEN'  1*    146.533      0.216  13073.180  2*         'Y'     12.863 /
     'B-1H'   18   48   15   15      'OPEN'  1*     80.994      0.216   7382.913  2*         'Y'     14.269 /
     'B-1H'   18   49   15   15      'OPEN'  1*    101.426      0.216   9266.828  2*         'Y'     14.432 /
     'B-1H'   18   49   14   14      'OPEN'  1*    305.155      0.216  27750.031  2*         'Y'     14.105 /
     'B-1H'   18   50   14   14      'OPEN'  1*    425.169      0.216  38596.840  2*         'Y'     13.986 /
/

WCONHIST 
     'B-1H'      'OPEN'      'ORAT'      0.000      0.000      0.000  5* /
/


-- 507.000000 days from start of simulation ( 6 'NOV' 1997 )
DATES
 28 'MAR' 1999 /
/

--      : B-1H Perforation Ile 1.2 2002 Top:  3350.00 Bot:  3426.00 Diam: 0.22 Skin: 0.00
--      : >> --Ile 1.2 2002
--      : B-1H Perforation Ile 1.2 2002 Top:  3474.00 Bot:  3514.00 Diam: 0.22 Skin: 0.00
--      : >> --Ile 1.2 2002
--      : B-1H Perforation Ile 1.3 2002 Top:  3200.00 Bot:  3209.50 Diam: 0.22 Skin: 0.00
--      : >> --Ile 1.3 2002 (DIVIDED)
--  WARN: B-1H Layer Ile 1.3 2002 Adjusted 3200.00 3209.50 to 3168.44 3177.94
--      : B-1H Perforation Ile 1.2 2002 Top:  3209.50 Bot:  3320.00 Diam: 0.22 Skin: 0.00
--      : >> --Ile 1.2 2002
--  WARN: B-1H Perf interval 3317.734605 to 3317.810210 outside all cells, discarded
--      : B-1H Perforation Ile 1.2 2002 Top:  3580.00 Bot:  3650.00 Diam: 0.22 Skin: 0.00
--      : >> --Ile 1.2 2002
--  WARN: B-1H Layer Ile 1.2 2002 Adjusted 3580.00 3650.00 to 3458.65 3528.65
--      : B-1H Connection 15 38  9 Perf. Len   9.50 ( 10.4%)
--      : B-1H Connection 16 38 10 Perf. Len  24.05 ( 26.4%)
--      : B-1H Connection 16 39 10 Perf. Len  84.19 ( 97.3%)
--      : B-1H Connection 16 40 10 Perf. Len  57.18 ( 63.8%)
--      : B-1H Connection 16 41 10 Perf. Len  53.09 ( 60.9%)
--      : B-1H Connection 16 42 10 Perf. Len  37.91 ( 43.7%)
--      : B-1H Connection 17 44 15 Perf. Len  19.57 ( 22.0%)
--      : B-1H Connection 17 45 15 Perf. Len  10.43 ( 12.1%)
--      : B-1H Connection 17 47 15 Perf. Len  23.79 ( 27.0%)
--      : B-1H Connection 17 48 15 Perf. Len  56.21 ( 64.8%)
--      : B-1H Connection 18 48 15 Perf. Len  30.25 ( 34.8%)
--      : B-1H Connection 18 49 15 Perf. Len  30.98 ( 35.3%)
--      : B-1H Connection 18 49 14 Perf. Len  58.10 ( 65.3%)
--      : B-1H Connection 18 50 14 Perf. Len  64.58 ( 73.7%)
WELOPEN 
     'B-1H'      'SHUT'    0    0    0  2* /
/

COMPDAT 
-- WELL        I    J    K1  K2            Sat.        CF       DIAM        KH SKIN ND        DIR   Ro 
     'B-1H'   15   38    9    9      'OPEN'  1*     25.620      0.216   2086.842  2*         'Y'      8.486 /
     'B-1H'   16   38   10   10      'OPEN'  1*     65.351      0.216   5227.131  2*         'Y'      7.844 /
     'B-1H'   16   39   10   10      'OPEN'  1*    206.584      0.216  15780.745  2*         'Y'      6.469 /
     'B-1H'   16   40   10   10      'OPEN'  1*    139.254      0.216  10698.725  2*         'Y'      6.624 /
     'B-1H'   16   41   10   10      'OPEN'  1*    134.824      0.216  10345.683  2*         'Y'      6.590 /
     'B-1H'   16   42   10   10      'OPEN'  1*     99.806      0.216   7702.339  2*         'Y'      6.747 /
     'B-1H'   17   44   15   15      'OPEN'  1*     34.720      0.216   3095.832  2*         'Y'     12.828 /
     'B-1H'   17   45   15   15      'OPEN'  1*     19.976      0.216   1779.033  2*         'Y'     12.754 /
     'B-1H'   17   47   15   15      'OPEN'  1*     51.570      0.216   4598.853  2*         'Y'     12.835 /
     'B-1H'   17   48   15   15      'OPEN'  1*    146.533      0.216  13073.180  2*         'Y'     12.863 /
     'B-1H'   18   48   15   15      'OPEN'  1*     80.994      0.216   7382.913  2*         'Y'     14.269 /
     'B-1H'   18   49   15   15      'OPEN'  1*    101.426      0.216   9266.828  2*         'Y'     14.432 /
     'B-1H'   18   49   14   14      'OPEN'  1*    305.155      0.216  27750.031  2*         'Y'     14.105 /
     'B-1H'   18   50   14   14      'OPEN'  1*    425.169      0.216  38596.840  2*         'Y'     13.986 /
/

WCONHIST 
     'B-1H'      'OPEN'      'ORAT'      0.000      0.000      0.000  5* /
/


-- 511.000000 days from start of simulation ( 6 'NOV' 1997 )
DATES
 1 'APR' 1999 /
/

WCONHIST 
     'B-1H'      'OPEN'      'RESV'   4334.313      0.000 832512.553  5* /
/

RPTSCHED 
 0 0 0 0 0 0 2 2 2 0 1 1 0 1 1 0 0 / 


-- 541.000000 days from start of simulation ( 6 'NOV' 1997 )
DATES
 4 'APR' 1999 /
/


END

