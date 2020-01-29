RPTRST
	'BASIC=2' /

TUNING
 4.0  60.0  0.1    /
                   /
  12 2 15          /


WELSPECS
-- Column 3: I-value of well head or heel
-- Column 4: J-value of well head or heel
-- 	     - these coordinates are listed in Killough's dataset
-- Column 5: ref. depth of BHP (ft)
--           - stated in the middle of the top perforated cell
-- 	     - not anymore stated to be 9110ft in Killough
-- Column 6: preferred phase for well
-- 	     - should be water for injector and oil for producers
-- Column 7: drainage radius for calc. of productivity or 
--           injectivity indices (ft)
--	     - stated to be 60ft in Killough

-- #: 1	       2   3  4 5	 6	7  
 'INJE1'    'P'  24 25  9110 'WATER'	60   /
 'PRODU2'   'P'   5  1  9110 'OIL'	60   /
 'PRODU3'   'P'   8  2  9110 'OIL'	60   /
 'PRODU4'   'P'  11  3  9110 'OIL'	60   /
 'PRODU5'   'P'  10  4  9110 'OIL'	60   /
 'PRODU6'   'P'  12  5  9110 'OIL'	60   /
 'PRODU7'   'P'   4  6  9110 'OIL'	60   /
 'PRODU8'   'P'   8  7  9110 'OIL'	60   /
 'PRODU9'   'P'  14  8  9110 'OIL'	60   /
 'PRODU10'  'P'  11  9  9110 'OIL'	60   /
 'PRODU11'  'P'  12 10  9110 'OIL'	60   /
 'PRODU12'  'P'  10 11  9110 'OIL'	60   /
 'PRODU13'  'P'   5 12  9110 'OIL'	60   /
 'PRODU14'  'P'   8 13  9110 'OIL'	60   /
 'PRODU15'  'P'  11 14  9110 'OIL'	60   /
 'PRODU16'  'P'  13 15  9110 'OIL'	60   /
 'PRODU17'  'P'  15 16  9110 'OIL'	60   /
 'PRODU18'  'P'  11 17  9110 'OIL'	60   /
 'PRODU19'  'P'  12 18  9110 'OIL'	60   /
 'PRODU20'  'P'   5 19  9110 'OIL'	60   /
 'PRODU21'  'P'   8 20  9110 'OIL'	60   /
 'PRODU22'  'P'  11 21  9110 'OIL'	60   /
 'PRODU23'  'P'  15 22  9110 'OIL'	60   /
 'PRODU24'  'P'  12 23  9110 'OIL'	60   /
 'PRODU25'  'P'  10 24  9110 'OIL'	60   /
 'PRODU26'  'P'  17 25  9110 'OIL'	60   /
/

COMPDAT
-- Column 2: I-value of connecting grid block
-- Column 3: J-value of connecting grid block
-- Column 4: K-value of upper connecting grid block
-- Column 5: K-value of lower connecting grid block
-- 	     - these coordinates are listed in Killough's dataset
-- Column 9: well bore diameter
-- 	     - Killough says radius is 0.5ft

--Item 8 must be entered in order to get a match between Eclipse and Flow
--No match if item 8 is defaulted

-- #: 1	      	     2  3	 4    5	  6	7	8	9 

     'INJE1'        24 25	11   15	'OPEN'	1*	1*	1 /
     'PRODU2'        5  1	 2    4	'OPEN'	1*	1*	1 /
     'PRODU3'        8  2	 2    4	'OPEN'	1*	1*	1 /
     'PRODU4'       11  3	 2    4	'OPEN'	1*	1*	1 /
     'PRODU5'       10  4	 2    4	'OPEN'	1*	1*	1 /
     'PRODU6'       12  5	 2    4	'OPEN'	1*	1*	1 /
     'PRODU7'        4  6	 2    4	'OPEN'	1*	1*	1 /
     'PRODU8'        8  7	 2    4	'OPEN'	1*	1*	1 /
     'PRODU9'       14  8	 2    4	'OPEN'	1*	1*	1 /
     'PRODU10'      11  9	 2    4	'OPEN'	1*	1*	1 /
     'PRODU11'      12 10	 2    4	'OPEN'	1*	1*	1 /
     'PRODU12'      10 11	 2    4	'OPEN'	1*	1*	1 /
     'PRODU13'       5 12	 2    4	'OPEN'	1*	1*	1 /
     'PRODU14'       8 13	 2    4	'OPEN'	1*	1*	1 /
     'PRODU15'      11 14	 2    4	'OPEN'	1*	1*	1 /
     'PRODU16'      13 15	 2    4	'OPEN'	1*	1*	1 /
     'PRODU17'      15 16	 2    4	'OPEN'	1*	1*	1 /
     'PRODU18'      11 17	 2    4	'OPEN'	1*	1*	1 /
     'PRODU19'      12 18	 2    4	'OPEN'	1*	1*	1 /
     'PRODU20'       5 19	 2    4	'OPEN'	1*	1*	1 /
     'PRODU21'       8 20	 2    4	'OPEN'	1*	1*	1 /
     'PRODU22'      11 21	 2    4	'OPEN'	1*	1*	1 /
     'PRODU23'      15 22	 2    4	'OPEN'	1*	1*	1 /
     'PRODU24'      12 23	 2    4	'OPEN'	1*	1*	1 /
     'PRODU25'      10 24	 2    4	'OPEN'	1*	1*	1 /
     'PRODU26'      17 25	 2    4	'OPEN'	1*	1*	1 /
/

WEFAC
  'PRODU*' 0.80 /
/

WEFAC
  'INJE1*' 0.50 /
/

WCONINJE
-- Killough says the water injector is set to a max rate of
-- 5000 STBW per D with a max BHP of 4000psia at a reference 
-- depth of 9110ft subsea:
--   #:  1	    2       3      4     5       7
	'INJE1' 'WATER' 'OPEN' 'RATE' 5000 1* 4000 /
/

WCONPROD
-- Killough says the max oil rate for all producers is set to 
-- 1500 STBO per D at time zero and that the min flowing BHP
-- is set to 1000psia (with a ref. depth of 9110ft
-- for this pressure in all wells):
--   #:   1           2      3     4       9
     	 'PRODU*' 'OPEN' 'ORAT' 1500 4* 1000  /
-- Here, the wildcard '*' has been used to indicate that this applies
-- to all producers; PRODU1-PRODU25.
/


TSTEP
10*10 /

-- At 100 days, the max oil rate for all producers is lowered
-- to 100 STBO per D:
WELTARG
  'PRODU*' ORAT 100.0 /
/

TSTEP
4*10 /

DATES
31 'MAY'  2015 /
/

TSTEP
   10 /

-- At 160 days, the max oil rate for all producers is changed
-- back to 1500 STBO per D:
WCONPROD
--   #:   1           2      3     4       9
     	 'PRODU*' 'OPEN' 'ORAT' 1500 4* 1000 /
/


TSTEP
5*10 /
-- End of simulation at 210 days

