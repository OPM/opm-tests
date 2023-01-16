# GPMAINT Test Documentation

Case Name         | Case Desciption                                                                                    | Base Model | Test<br />Type | Results<br />Match | Comments |
----------------- |----------------------------------------------------------------------------------------------------| ---------- | ----- |------- | ------------------------------------- |
GPMAINT-01        | Base case GPMAINT using FIPNUM equal to 2 for LOWEAST group, and GPMAINT(GRPCNTL) equal to WINS    | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.
GPMAINT-02        | GPMAINT using FIPLAYER equal to 2 for LOWEAST group, and GPMAINT(GRPCNTL) equal to WINS            | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.
GPMAINT-03        | GPMAINT using FIPAREAS equal to 6 for LOWEAST group, and GPMAINT(GRPCNTL) equal to WINS            | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.
GPMAINT-04        | GPMAINT using FIPNUM equal to 2 for LOWEAST group, GPMAINT(GRPCNTL) equal to WINS with GCONINJE    | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.
GPMAINT-05        | GPMAINT using FIPAREAS equal to 4 and 6, and GPMAINT(GRPCNTL) equal to WINJ and WINS with GCONINJE | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.
GPMAINT-06        | GPMAINT using FIPAREAS equal to 1, 2 and 3, and GPMAINT(GRPCNTL) equal to GINJ                     | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.
GPMAINT-07        | GPMAINT using FIPAREAS equal to 1, 2 and 3, and GPMAINT(GRPCNTL) equal to GINS and GINJ           | GPMAINT |     | No         | OPM Flow throws an exception assemble() failed (It=0). <br /><br /> E100 runs as expected.

**Notes:**

1. _Test Type_ column shows if the case is used for integration testing (_Int_), or regression testing (_Reg_).
2. _Results Match_ column indicate if the OPM Flow results match the commercial simulator.

**Version: 16 January 2023**

### GPMAINT Model Description  (Regular Corner-Point)
Upper Reservoir
![](plots/gpmain-model-upper-ternary.jpg)
Upper Reservoir FIPAREAS
![](plots/gpmain-model-upper-fip.jpg)

Lower Reservoir
![](plots/gpmain-model-lower-ternary.jpg)
Lower Reservoir FIPAREAS
![](plots/gpmain-model-lower-fip.jpg)

This model is based MODEL04 and consists of a (30, 15, 13) Regular Corner-Point Grid, with two separate reservoirs: an Upper
Reservoir (layers 1 - 6), a Shale Inactive Layer (7), and a Lower Reservoir (layers 8 - 13). In addition, the FIPNUM array has
been introduced to identify the two reservoirs, together with two FIPxxxxx arrays, FIPLAYER and FIPAREAS. The former is
identical to the FIPNUM array, whereas, the latter breaks each reservoir into three separate reporting regions, resulting in six
FIP regions.

There are a total of 12 oil producers and eight water injection wells, and all wells using the multi segment well model. Secondly
the surface network has been changed, so that wells OPL1, WID1 and WID2 now all belong to the same group, LOWEAST, and
consequently, AQF group has been removed, as shown below:

```

                                          FIELD
                                            |
              ------------------------------+-----------------------------------
                                |                        |
                              UPPER                    LOWER
                         ------+------            +------+-------------+
                        |            |                   |             |
                      MAIN          SE                 CENTRAL      LOWEAST
                 ------+-----        +-----+-----+       +      +-----+-----+
                |           |        |     |     |       |      |     |     |
               NW          NE       OPU6  OPU7  WIU4     |     OPL1  WID1  WID2
                |    +-----+-----+                       |
                |    |     |     |           +-----+-----+-----+-----+-----+
                |   OPU4  OPU5  WIU3         |     |     |     |     |     |
                |                           OPL2  OPL3  OPL4  OPL5  WIL1  WIL2
             ---+--+-----+-----+-----+
             |     |     |     |     |
            OPU1  OPU2  OPU3  WIU1  WIU2
```
In the above figure the UPPER reservoir wells have been renamed for a gas-oil reservoir as follows:
1) WIU1 in group NW has been renamed to OPUW1,
2) WIU2 in group NW has been renamed to OPUW2,
3) WIU3 in group NE has been renamed to OPUW3,
4) WIU4 in group SE has been renamed to OPUW4,
5) OPU1 in group NW has been renamed to GIU1,
6) OPU5 in group NE has been renamed to GIU5, and
7) OPU7 in group SE has been renamed to GIU7,

since the Upper reservoir is now a gas-oil reservoir.

The model is used to test the GPMAINT keyword using different configurations of the keyword and the various FIP regions.

## RESULTS

### GPMAINT-01 Lower Oil-Water Reservoir Description and Results

Base case model with:

 1) Only the LOWEAST wells are active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    LOWEAST  WINS   2       1*       145     15.0   30.0       /
    /
```
**No Results**

---

### GPMAINT-02 Lower Oil-Water Reservoir Description and Results

 1) Only the LOWEAST wells are active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    LOWEAST  WINS   2       LAYER    145     15.0   30.0       /
    /
```

**No Results**

---

### GPMAINT-03 Lower Oil-Water Reservoir Description and Results

 1) Only the LOWEAST wells are active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    LOWEAST  WINS   6       AREAS    145     15.0   30.0       /
    /
```

**No Results**

---

### GPMAINT-04 Lower Oil-Water Reservoir Description and Results

 1) Only the LOWEAST wells are active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    LOWEAST  WINS   2       1*       145     15.0   30.0       /
    /
```
 2) Intially restrict water injection GCONINJE via:
```
    -- GRUP  FLUID CNTL   SURF   RESV   REINJ  VOID  GRUP  GUIDE  GUIDE GRUP  GRUP
    -- NAME  TYPE  MODE   RATE   RATE   FRAC   FRAC  CNTL  RATE   DEF   REINJ RESV
    GCONINJE
    FIELD    WAT   NONE   800    1*     1*     1.0    NO   1*     1*    1*    1*   /
    LOWEAST  WAT   NONE   1000   1*     1*     1.0    YES  1*     1*    1*    1*   /
    /
```
 3) And then the Field surface rate is increase to 2,000 m3/d at 2024-01-01. After which pressure maintenance is switched off at
   2029-01-01 using GPMAINT(GRPCNTL) set to NONE, which means the last injection target rate is maintained as a limit.

**No Results**

---
### GPMAINT-05 Lower Oil-Water Reservoir Description and Results

 1) Only the LOWEAST wells are active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    CENTRAL  WINJ   4       AREAS    100     15.0   30.0       /
    LOWEAST  WINS   6       AREAS    145     15.0   30.0       /
    /
```
 2) Intially restrict water injection using GCONINJE:
```
    -- GRUP  FLUID CNTL   SURF   RESV   REINJ  VOID  GRUP  GUIDE  GUIDE GRUP  GRUP
    -- NAME  TYPE  MODE   RATE   RATE   FRAC   FRAC  CNTL  RATE   DEF   REINJ RESV
    GCONINJE
    FIELD    WAT   NONE   800    1*     1*     1.0    NO   1*     1*    1*    1*   /
    LOWEAST  WAT   NONE   1000   1*     1*     1.0    YES  1*     1*    1*    1*   /
    /
```
 3) And then the Field surface rate is increase to 2,000 m3/d at 2024-01-01, after which pressure maintenance is switched off at
   2029-01-01 for the LOWEAST group using GPMAINT(GRPCNTL) set to NONE, which means the last injection target rate is maintained as a limit.
 4) Finally, at 2030-01-01 the LOWEAST group water injection rate is set to zero.

**No Results**

---

### GPMAINT-06 Upper Gas-Oil Reservoir Description and Results

 1)  Only the UPPER NW and NE wells are intially active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    NW       GINJ   1       AREAS    150     80.0   5.0        /
    NE       GINJ   2       AREAS    150     80.0   5.0        /
    /
```
 2) Then on January 1, 2027 the UPPER SE wells come on stream, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    SE       GINJ   3       AREAS    155     80.0   5.0        /
    /
```

**No Results**

---

### GPMAINT-07 Upper Gas-Oil Reservoir Description and Results
This case is similar to GPMAINT-07, but here we use a mixture of the GINJ and GINS options.
 1)  Only the UPPER NW and NE wells are intially active, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    NW       GINS   1       AREAS    150     300.0  2.0        /
    NE       GINJ   2       AREAS    150     80.0   5.0        /
    /
```
 2) Then on January 1, 2027 the UPPER SE wells come on stream, with GPMAINT set to:
```
    -- GRUP  CNTL   FIPNUM  FIP      PRESS   ALPHA  BETA
    -- NAME  MODE   REGION  FIPNAME  TARGET  CONST  CONST
    GPMAINT
    SE       GINS   3       AREAS    155     200.0  2.0        /
    /
```
Note it was not possible to get a stable run using GINJS for all three regions.

**No Results**

---
