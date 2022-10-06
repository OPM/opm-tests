-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2018-2022 Equinor
--
-- This file contains the well specification keywords generate via OPMRUN(WELSPEC) option for MODEL02.
--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
--
-- WELL SPECIFICATION DATA
--
-- WELL   GROUP  LOC.  LOC.  BHP    PHASE  DRAIN  INFLOW  OPEN  CROSS  PVT    HYDS  FIP
-- NAME    NAME   I    J     DEPTH  FLUID  AREA   EQUANS  SHUT  FLOW   TABLE  DENS  REGN
WELSPECS
    OP01   WGRP1     6     3     1*    OIL    0.0     STD  STOP    YES      0   SEG     0  /
    OP02   WGRP2    10     4     1*    OIL    0.0     STD  STOP    YES      0   SEG     0  /
    OP03   WGRP1    11    19     1*    OIL    0.0     STD  STOP    YES      0   SEG     0  /
    WI01    INJE     2    13     1*  WATER    0.0     STD  STOP    YES      0   SEG     0  /
/
--
--  WELL CONNECTION DATA
--
-- WELL   LOC.  LOC.  LOC.  LOC.  OPEN  SAT         CONN     WELL  KH       SKIN  D     DIR       MD-IN   MD-OUT   CONN
-- NAME   II    JJ    K1    K2    SHUT  TAB         FACT     DIA   FACT     FACT  FACT  PEN        MDMS     MDMS   FACTOR
COMPDAT
   OP01      6     3     7     7  OPEN   1*  5.974150E+0  0.21600    1*  0.00000    1*  'Z'  /  54.1443  63.9786  5.97415
   OP01      6     3     8     8  OPEN   1*  9.831486E+0  0.21600    1*  0.00000    1*  'Z'  /  63.9786  74.2244  9.83149
   OP01      6     3     9     9  OPEN   1*  1.885740E+2  0.21600    1*  0.00000    1*  'Z'  /  74.2244    84.47  188.574
   OP01      6     3    10    10  OPEN   1*  4.684912E+1  0.21600    1*  0.00000    1*  'Z'  /    84.47       94  46.8491
          
   OP02     10     4     7     7  OPEN   1*  1.645656E+1  0.21600    1*  0.00000    1*  'Z'  /     50.5  58.5359  16.4566
   OP02     10     4     8     8  OPEN   1*  1.761616E+1  0.21600    1*  0.00000    1*  'Z'  /  58.5359   68.531  17.6162
   OP02     10     4     9     9  OPEN   1*  8.073011E+1  0.21600    1*  0.00000    1*  'Z'  /   68.531  78.5261  80.7301
   OP02     10     4    10    10  OPEN   1*  1.019552E+1  0.21600    1*  0.00000    1*  'Z'  /  78.5261  86.8645  10.1955
          
   OP03     11    19     6     6  OPEN   1*  2.294014E+1  0.21600    1*  0.00000    1*  'Z'  /  38.8799  47.0872  22.9401
   OP03     11    19     7     7  OPEN   1*  1.308895E+1  0.21600    1*  0.00000    1*  'Z'  /  47.0872  57.0771   13.089
   OP03     11    19     8     8  OPEN   1*  2.780218E+1  0.21600    1*  0.00000    1*  'Z'  /  57.0771   67.067  27.8022
   OP03     11    19     9     9  OPEN   1*  3.703671E+1  0.21600    1*  0.00000    1*  'Z'  /   67.067     69.5  37.0367
   
   WI01      2    13     1     1  OPEN   1*  1.172656E+2  0.21600    1*  0.00000    1*  'Z'  /        0  8.46488  117.266
   WI01      2    13     2     2  OPEN   1*  1.330772E+0  0.21600    1*  0.00000    1*  'Z'  /  8.46488  18.4542  1.33077
   WI01      2    13     3     3  OPEN   1*  3.339084E+1  0.21600    1*  0.00000    1*  'Z'  /  18.4542  24.7358  33.3908
/
ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
