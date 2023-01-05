#### PINCH5_NOGAP1 Results
Base case model with the combination of DZ, MINPV and PINCH with the NOGAP option should result in layer 2 getting 
pinched out and resulting in a connection between layers 1 and 3.
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
_Base Case_

![](ECL/PINCH5_ECL_INDEX.png)

_Modified_

Layer 2 inactive. 

![](ECL/PINCH5_NOGAP1_ECL_INDEX.png)
![](ECL/PINCH5_NOGAP1_ECL_TRANZ.png)
                                   