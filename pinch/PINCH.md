# PINCH Test Documentation

Case Name                 | Case Desciption                                                         | Base Model  | Test<br />Type | Results<br />Match | Comments |
------------------------- |-------------------------------------------------------------------------|-------------|-----|------- | ------------------------------------- |
PINCH05                   | Base case 2D five layer model with no modifications.                    | PINCH05     |     | NA     |  Results are correct.
PINCH05_GAP1              | DZ, MINPV, and PINCH GAP modification #1, layer 2 inactive.             | PINCH05     |     | NA     |  Results are correct.
PINCH05_GAP2              | DZ, MINPV, and PINCH GAP modification #2, layers 2 and 3 inactive.      | PINCH05     |     | NA     |  Results are correct.
PINCH05_GAP3              | DZ, MINPV, and PINCH GAP modification #2, layers 2 to 4 inactive.       | PINCH05     |     | NA     |  Results are correct.
PINCH05_NOGAP1            | DZ, MINPV, and PINCH NOGAP modification #1, layer 2 inactive.           | PINCH05     |     | NA     |  Option currently not supported, show commercial simulator results instead.        
PINCH05_NOGAP2            | DZ, MINPV, and PINCH NOGAP modification #2, layers 2 and 3 inactive     | PINCH05     |     | NA     |  Option currently not supported, show commercial simulator results instead.
PINCH05_NOGAP3            | DZ, MINPV, and PINCH NOGAP modification #2, layers 2 to 4 inactive.     | PINCH05     |     | NA     |  Option currently not supported, show commercial simulator results instead.
PINCH_MULTZ_ALL           | PINCH(PINCHMUL) equal to ALL and MULTZ = 1.0                            | PINCH_MULTZ | Reg | NA     |  Results are correct, and MULTZ and MULTZ give same results.                                             
PINCH_MULTZ-\_ALL         | Same as PINCH_MULTZ_ALL, but using MULTZ- instead.                      | PINCH_MULTZ |     | NA     |  Results are correct, and MULTZ and MULTZ give same results.                                            
PINCH_MULTZ_ALL_BARRIER   | PINCH(PINCHMUL) equal to ALL and MULTZ = 1.0, except layer 10 equal 0.0 | PINCH_MULTZ | Reg | NA     |  Results are correct, and MULTZ and MULTZ give same results.                                             
PINCH_MULTZ-\_ALL_BARRIER | Same as PINCH_MULTZ_ALL_BARRIER, but using MULTZ- instead.              | PINCH_MULTZ |     | NA     |  Results are correct, and MULTZ and MULTZ give same results.                                            
PINCH_NONE                | Drogon synthetic reservoir model.                                       | DROGON      |     | NA     |  Fails to run due to ENDSCALE(DIRECT) set to DIRECT as only the default value of NODIR is supported, as well as PCW and PCG keywords not supported.                                           

**Currently, OPM Flow does not support PINCH(PINCHOPT) equal to NOGAP; thus, these tests map used for when the option
has been implemented.**

**Notes:** 

1. _Test Type_ column shows if the case is used for integration testing (_Int_), or regression testing (_Reg_).  
2. _Results Match_ column indicate if the OPM Flow results match the commercial simulator.

**Version: 06 January 2023**
                               
### PINCH5 Model (Cartesian Regular Grid) Description and Results

The model is a simple (1, 1, 5) model with five vertically stacked cells, no MINPV and no PINCH directives included.
It is meant as a base case to verify the grid and grid transmissibilities, and compare with the other PINCH5 test 
cases.

![](plots/REF/PINCH05_INDEX.png)
![](plots/REF/PINCH05_TRANZ.png)

---

### PINCH5_GAP1 Description and Results
Base case model with:
```
DZ
   1 .1 1 1 1 /  
MINPV
   0.5
/
PINCH
   0.5   GAP   1*   1*
/
```
[PINCH5_GAP1 Results](plots/PINCH05_GAP1.md) 

---


### PINCH5_GAP2 Description and Results
Base case model with the combination of DZ, MINPV and PINCH with the GAP option:     
```
DZ
   1 .1 .2 1 1 /
MINPV
   0.5
/
PINCH
   0.5   GAP   1*   1*
/
```
[PINCH5_GAP2 Results](plots/PINCH05_GAP2.md) 

---

### PINCH5_GAP3 Description and Results
Base case model with the combination of DZ, MINPV and PINCH with the GAP option:     
```
DZ
   1 .1 .3 .2 1 /
MINPV
   0.5
/
PINCH
   0.41   GAP   1*   1*
/
```
[PINCH5_GAP3 Results](plots/PINCH05_GAP3.md) 

---

### PINCH5_NOGAP1 Description and Results
Base case model with the combination of DZ, MINPV and PINCH with the NOGAP option:     
```
DZ
   1 .1 1 1 1 /
MINPV
   0.5
/
PINCH
   0.5   NOGAP   1*   1*
/
```
[PINCH5_NOGAP1 Results](plots/PINCH05_NOGAP1_ECL.md) 

---

### PINCH5_NOGAP2 Description and Results
Base case model with the combination of DZ, MINPV and PINCH with the NOGAP option:     
```
DZ
   1 .1 .2 1 1 /
MINPV
   0.5
/
PINCH
   0.5   NOGAP   1*   1*
/
```
[PINCH5_NOGAP2 Results](plots/PINCH05_NOGAP2_ECL.md) 

---

### PINCH5_NOGAP3 Description and Results
Base case model with the combination of DZ, MINPV and PINCH with the NOGAP option:     
```
DZ
   1 .1 .3 .2 1 /
MINPV
   0.5
/
PINCH
   0.41   NOGAP   1*   1*
/
```
[PINCH5_NOGAP3 Results](plots/PINCH05_NOGAP3_ECL.md) 

---

### PINCH_MULTZ_ALL Description and Results
PINCH(PINCHMUL) equal to ALL, which results in the pinch-out transmissibility being calculated from the minimum value 
of the MULTZ of the active cell at the top of the pinch-out and all the inactive cells in the pinch-out vertical
column. Here, MULTZ is set to 1.0 
```
MULTZ
 19*1.0 /
PINCH
     1*      'GAP'     1*  'TOPBOT'  'ALL'  / --default values
```

[PINCH_MULTZ_ALL Results](plots/PINCH_MULTZ_ALL_PLUS.md)

---

### PINCH_MULTZ-_ALL Description and Results  
Same as PINCH_MULTZ_ALL, but using MULTZ- instead, that is:
```
MULTZ-
 19*1.0 /
PINCH
     1*      'GAP'     1*  'TOPBOT'  'ALL'  / --default values
```

[PINCH_MULTZ-\_ALL Results](plots/PINCH_MULTZ_ALL_MINUS.md) 

---

### PINCH_MULTZ_ALL_BARRIER Description and Results  
PINCH(PINCHMUL) equal to ALL, which results in the pinch-out transmissibility being calculated from the minimum value 
of the MULTZ of the active cell at the top of the pinch-out and all the inactive cells in the pinch-out vertical
column. Here, MULTZ is set to 1.0, except layer 10 where MULTZ is set equal 0.0 to enable a barrier.
```
MULTZ
 19*1.0 /
PINCH
     1*      'GAP'     1*  'TOPBOT'  'ALL'  / --default values
EQUALS
 'MULTZ' 0.0 4* 10 10 /
/          
```

[PINCH_MULTZ_ALL_BARRIER Results](plots/PINCH_MULTZ_ALL_BARRIER_PLUS.md)

---

### PINCH_MULTZ-_ALL_BARRIER Description and Results
Same as PINCH_MULTZ_ALL, but using MULTZ- instead, that is:
```
MULTZ-
 9*1.0 0.0 9*1.0 /
PINCH
     1*      'GAP'     1*  'TOPBOT'  'ALL'  / --default values
```

[PINCH_MULTZ-\_ALL_BARRIER Results](plots/PINCH_MULTZ_ALL_BARRIER_MINUS.md) 

---

### PINCH_NONE Description and Results
Drogon synthetic reservoir model.

No results as the case fails to run due to ENDSCALE(DIRECT) set to DIRECT as only the default value of NODIR is 
supported, as well as PCW and PCG keywords also not supported.

**Not Documented and No Results**

---