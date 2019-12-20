RUNSPEC

TITLE
	SPE 9

DIMENS
	24 25 15 /
OIL
WATER
GAS
DISGAS
-- From figure 7 in Killough's paper it is evident 
-- that GOR is increasing with time, meaning
-- that there must be dissolved gas present

FIELD

START
	1 'JAN' 2015 /

WELLDIMS
-- Item 1: maximum number of wells in the model
-- 	   - there are 26 wells in SPE9; 1 injector and 25 producers
-- Item 2: maximum number of grid blocks connected to any one well
-- 	   - the injector is completed in 5 layers
-- Item 3: maximum number of groups in the model
-- 	   - only one group in model
-- Item 4: maximum number of wells in any one group
-- 	   - this can definitetly not be more than 26 
	26 5 1 26 /
TABDIMS
-- The number of rows in SWOF exceeds the default maximum,
-- so item 3 in this keyword must be changed:
	1* 1* 40 /

EQLDIMS
/

--NSTACK
--	25 /
-- Eclipse suggested increasing NSTACK

UNIFOUT
UNIFIN


GRID
-- Killough says 'the grid was in conventional rectangular 
-- coordinates without corner point geometry or local grid refinements'


NOECHO

INIT

INCLUDE
	'SPE9.GRDECL' /

PORO
-- Porosity in each level is contant
-- The values are specified in table 1 in Killough's paper
   	600*0.087
	600*0.097
	600*0.111
	600*0.16
	600*0.13
	600*0.17
	600*0.17
	600*0.08
	600*0.14
	600*0.13
	600*0.12
	600*0.105
	600*0.12
	600*0.116
	600*0.157 /

-- PERMX, PERMY & PERMZ
INCLUDE
	PERMVALUES.DATA /

ECHO

PROPS

PVTW
-- Item 1: pressure reference (psia)
-- Item 2: water FVF (rb per bbl or rb per stb)
-- Item 3: water compressibility (psi^{-1})
-- Item 4: water viscosity (cp)
-- Item 5: water 'viscosibility' (psi^{-1})

-- Item 1 and 2 are stated in Killough, and item 5 is assumed = zero
-- Item 3 and 4 are taken from SPE2
  	3600 1.0034 3e-6 0.96 0 /

--NOTE:
--   a)	It is not explicitly stated in Killough that it is okay to use SPE2-values here. 
--   b)	I am not 100% sure if the given compressibility value is at ref. pres. 3600psia.
--   c)	Item 3 and 4 can probably be explained on the basis of Killough's dataset. In 
-- 	order to do that I need info about keywords in VIP

ROCK
-- Item 1: reference pressure (psia)
-- Item 2: rock compressibility (psi^{-1})

-- Using values from SPE2:
   	3600 4e-6 /

-- NOTE:
--   a) It is not explicitly stated in Killough that it is okay to use SPE2-values here.
--   a) I am not 100% sure if the given compressibility value is at 3600psia.
--   b) 'Comp. Methods for Multiphase Flow in Porous Media' states
--      that rock compr. is 1e-6 inverse psi. This is probably correct, as
--   	I think this is based on Killough's dataset - to be sure, I need 
-- 	more info about keywords in VIP.

DENSITY
-- Density (lb per ft³) at surface cond. of 
-- oil, water and gas, respectively (in that order)

-- The values for oil and water are given by Killough to
-- be 0.7206 and 1.0095 gm per cc, or equivalently 
-- 44.9856 and 63.0210 lb per ft³

-- A gas density of 0.07039 lb per ft³ was calculated using formula at 
-- petrowiki.org/Calculating_gas_properties:
-- (28.967*Specific gravity*pressure)/(Z-factor*gas constant*temperature) 
-- with the values given in Killough's table 2 at 14.7 psia (1 atm).
-- A temperature of 15C=59F was also used in the above formula.
	44.9856 63.0210 0.07039 /
	
PVTO
-- Column 1: dissolved gas-oil ratio (Mscf per stb)
-- Column 2: bubble point pressure for oil (psia)
-- Column 3: oil FVF for saturated oil (rb per stb)
-- Column 4: oil viscosity for saturated oil (cP)

-- Using values from table 2 in Killough's paper:
0  	 14.7	 1	 1.20 /
0.165	 400	 1.0120	 1.17 /
0.335	 800	 1.0255	 1.14 /
0.500	 1200	 1.0380	 1.11 /
0.665	 1600	 1.0510	 1.08 /
0.828	 2000	 1.0630	 1.06 /
0.985	 2400	 1.0750	 1.03 /
1.130	 2800	 1.0870	 1.00 /
1.270	 3200	 1.0985	 0.98 /
1.390	 3600	 1.1100	 0.95 /
1.500	 4000	 1.1200	 0.94 
         4600    1.1089  0.94 /
--	 5000	 1.1189	 0.94 /
/
-- Comment in regards to the last row in PVTO:
--   Killough says that 'at 1000psi above the saturation
--   pressure the Bo is 0.999 times that of the Bo at Psat'
--   which means that the FVF (i.e. Bo) at 4600psia is 0.999*0.1100=1.1089
--   Killough also says that 'the oil viscosity does not 
--   increase with increasing pressure in undersaturated conditions'
--   which explains why the oil viscosity is 0.94.

PVDG
-- Column 1: gas phase pressure (psia)
-- Column 2: gas formation volume factor (rb per Mscf)
-- 	     - This is calculated using formula:
--	       Bg=5.03676*Z*temperature(R)/pressure(psia) rb/Mscf
--	       where a constant temperature=100F=559.67R has been used because
--	       that is the initial reservoir temperature according to Killough's paper
--	       The above formula is retrieved from 
--	       petrowiki.org/Gas_formation_volume_factor_and_density
-- Column 3: gas viscosity (cP)

-- Using values from table 2 in Killough's paper:
   14.7	 191.7443 	0.0125
   400    5.8979	0.0130
   800    2.9493	0.0135
   1200	  1.9594	0.0140
   1600	  1.4695	0.0145
   2000	  1.1797	0.0150
   2400	  0.9796	0.0155
   2800	  0.8397	0.0160
   3200	  0.7398	0.0165
   3600	  0.6498	0.0170
   4000	  0.5849	0.0175 /


SGOF
-- Column 1: gas saturation
-- Column 2: gas relative permeability
-- Column 3: oil relative permeability when oil, gas and connate water are present
-- Column 4: corresponding oil-gas capillary pressure (psi)

-- Using values from table 3 in Killough's paper:
0  	  0	     1		0
0.04	  0	     0.6	0.2
0.1	  0.022	     0.33	0.5
0.2	  0.1	     0.1	1.0
0.3	  0.24	     0.02	1.5
0.4	  0.34	     0		2.0
0.5	  0.42	     0		2.5
0.6	  0.5	     0		3.0
0.7	  0.8125     0		3.5
0.84891   0.9635     0		3.82 /
--0.88491 1	     0		3.9  /
-- Comment in regards to the last row in SGOF:
--   Changes have been made so that the last row
--   is at a gas sat. of Sg=1-Swc=1-0.151090=0.84891
--   The Krg and Pcog values corresponding to Sg=0.84891
--   have been approximated by assuming linear relation between
--   Krg/Pcog and Sg in the range Sg=0.7 to Sg=0.88491

SWOF
-- Column 1: water saturation
-- Column 2: water relative permeability
-- Column 3: oil relative permeability when only oil and water are present
-- Column 4: corresponding water-oil capillary pressure (psi) 

-- These values are taken from Killough's dataset:
0.151090     0.0     1.0     400.0
0.151230     0.0     0.99997 359.190
0.151740     0.0     0.99993 257.920
0.152460     0.0     0.99991 186.310
0.156470     0.0     0.999510 79.060
0.165850     0.0     0.996290 40.010
0.178350     0.0     0.991590 27.930
0.203350 0.000010    0.978830 20.400
0.253350 0.000030    0.943730 15.550
0.350000 0.000280    0.830230 11.655
0.352000 0.002292    0.804277  8.720
0.354000 0.004304    0.778326  5.947
0.356000 0.006316    0.752374  3.317
0.358000 0.008328    0.726422  1.165
0.360000 0.010340    0.700470  0.463
0.364395 0.015548    0.642258 -0.499
0.368790 0.020756    0.584046 -1.139
0.370000 0.022190    0.568020 -1.194
0.380000 0.035890    0.434980 -1.547
0.400000 0.069530    0.171430 -1.604
0.433450 0.087900    0.125310 -1.710
0.461390 0.104910    0.094980 -1.780
0.489320 0.123290    0.070530 -1.860
0.517250 0.143030    0.051130 -1.930
0.573120 0.186590    0.024640 -2.070
0.601060 0.210380    0.016190 -2.130
0.656930 0.261900    0.005940 -2.260
0.712800 0.318650    0.001590 -2.380
0.811110 0.430920    0.000020 -2.600
0.881490 0.490000    0.000000 -2.750 /


-- These values are approximated by reading off the graphs
-- in figure 1 and 2 in Killough's paper:
-- $$$ 0.18	 0	1     21
-- $$$ 0.25	 0	0.95  16
-- $$$ 0.34	 0.07	0.5   12
-- $$$ 0.345	 0.08	0.4    9
-- $$$ 0.35	 0.09	0.3    6
-- $$$ 0.355	 0.095	0.2    0
-- $$$ 0.36	 0.1	0.19  -2
-- $$$ 0.75	 0.32	0.02  -2.5
-- $$$ 0.88149	 0.5	0     -3 /

