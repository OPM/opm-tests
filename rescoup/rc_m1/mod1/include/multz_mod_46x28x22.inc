-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2024 Equinor

-- Layer 8
EQUALS
'MULTZ'  0.02    6  13  12  28  8  8 /
/



-- MZ layer 10
EQUALS
  'MULTZ'   0.03  14  29   1   7  10  10  /  C south east
  'MULTZ'   0.05  14  25   8  12  10  10  /  C-segm mid/B-2H
  'MULTZ'   0.25   6  29   1  19  10  10  /  C-segm middle
  'MULTZ'   0.5   17  17  24  28  10  10  /  C north west
  'MULTZ'   0.5    6  12  20  21  10  10  /  C north west
  'MULTZ'   0.5    8  12  22  22  10  10  /  C north west
  'MULTZ'   0.5   10  12  23  25  10  10  /  C north west   
  'MULTZ'   0.5   18  33  20  28  10  10  /  C1, D4 & D3
  'MULTZ'   0.5    6  13  26  28  10  10  /  B-4AH
/


-- MZ layer 15
EQUALS
  'MULTZ'   0.00003   6  29   1   3  15  15	/ C south
  'MULTZ'   0.00005   6  29   4  21  15  15 /  C middle
  'MULTZ'   0.000001 19  29  21  28  15  15 /  C-1H
  'MULTZ'   1.0      19  29  20  27  17  17 /  C-1H
  'MULTZ'   0.0008    8  18  22  22  15  15 /  C north
  'MULTZ'   0.0008    9  18  23  23  15  15 /
  'MULTZ'   0.0008   10  18  24  25  15  15 /
  'MULTZ'   0.0008   11  18  26  26  15  15 /
  'MULTZ'   0.0008   12  18  27  27  15  15 /
  'MULTZ'   0.0008   13  18  28  28  15  15 /
  
  'MULTZ'   0.01     12  12  28  28  15  15 /	  D-segm
   MULTZ    0.0035    6   7  22  28  15  15 /	 D, E west
   MULTZ    0.0035    8   8  23  28  15  15 /
   MULTZ    0.0035    9   9  24  28  15  15 /
   MULTZ    0.0035   10  10  26  28  15  15 /
/



-- D-1H water
EQUALS
  'MULTZ'    1.0  22  24   3   4  11  11 /  
  'MULTZ'    0.1  21  25   1   1  15  15 /    
  'MULTZ'    1.0  22  24   1   1  17  17 / 
/  

-- B-1 & B-3 water
EQUALS
  'MULTZ'    0.1 12  13  16  17  15  15 /  
/ 


