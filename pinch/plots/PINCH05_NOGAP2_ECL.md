#### PINCH5_NOGAP2 Results
Base case model with the combination of DZ, MINPV and PINCH with the NOGAP option should result in layer 2 and 3 getting 
pinched out and resulting in a connection between layers 1 and 4.
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
_Base Case_

![](ECL/PINCH05_ECL_INDEX.png)

_Modified_

Layer 2 and 3 inactive. 

![](ECL/PINCH05_NOGAP2_ECL_INDEX.png)
![](ECL/PINCH05_NOGAP2-ECL_TRANZ.png)
                                   