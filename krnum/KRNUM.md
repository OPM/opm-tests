# KRNUM Test Documentation

Case Name         | Case Desciption                                               | Base Model | Test<br />Type | Results<br />Match | Comments |
----------------- | ------------------------------------------------------------  | ---------- | ----- |------- | ------------------------------------- |
KRNUM-02X         | Oil-Water, with dominating flow direction in X-direction with tables 5 and 9 | MODEL-X | Reg | Yes        | Perfect match with commercial simulator.
KRNUM-02Y         | Oil-Water, with dominating flow direction in Y-direction with tables 5 and 9 | MODEL-Y | Reg | No         | OPM Flows runs with no warnings.<br /><br /> E100 stops with errors "SEGMENT   5 IN WELL PROD01   HAS A LENGTH <OR= 0" etc.
KRNUM-02Z         | Oil-Water, with dominating flow direction in Z-direction with tables 5 and 9 | MODEL-Z | Reg | Yes        | OPM Flow stops with "Error: Problem with keyword COMPSEG" <br /><br /> E100 will run with warning messages "CONNECTION WILL BE IGNORED".
KRNUM-03X         | Oil-Gas, with dominating flow direction in X-direction with tables 6 and 3   | MODEL-X | Reg | No, but OK |
KRNUM-03Y         | Oil-Gas, with dominating flow direction in Y-direction with tables 6 and 3   | MODEL-Y | Reg |            |
KRNUM-03Z         | Oil-Gas, with dominating flow direction in Z-direction with tables 6 and 3   | MODEL-Z | Reg |            |
[]()              |                                                                              | []()    |     |            |
KRNUM-02X-        | Same as KRNUM-02X, but using tables 9 and 5 for KRNUMX-                      | MODEL-X |     | NA         | No resuts, as the option is not currently supported.
KRNUM-02Y-        | Same as KRNUM-02Y, but using tables 9 and 5 for KRNUMY-                      | MODEL-Y |     | NA         | No resuts, as the option is not currently supported.
KRNUM-02Z-        | Same as KRNUM-02Z, but using tables 9 and 5 for KRNUMZ-                      | MODEL-Z |     | NA         | No resuts, as the option is not currently supported.
KRNUM-03X-        | Same as KRNUM-03X, but using tables 3 and 6 for KRNUMX-                      | MODEL-X |     | NA         | No resuts, as the option is not currently supported.
KRNUM-03Y-        | Same as KRNUM-03Y, but using tables 3 and 6 for KRNUMY-                      | MODEL-Y |     | NA         | No resuts, as the option is not currently supported.
KRNUM-03Z-        | Same as KRNUM-03Z, but using tables 3 and 6 for KRNUMZ-                      | MODEL-Z |     | NA         | No resuts, as the option is not currently supported.
[]()              |                                                                              | []()    |     |            |
KRNUM-02X-IMBNUM  | Same as KRNUM-02X, but with Hysteresis Model active                          | MODEL-X |     | NA         |
KRNUM-02Y-IMBNUM  | Same as KRNUM-02Y, but with Hysteresis Model active                          | MODEL-Y |     | NA         |
KRNUM-02Z-IMBNUM  | Same as KRNUM-02Z, but with Hysteresis Model active                          | MODEL-Z |     | NA         |
KRNUM-03X-IMBNUM  | Same as KRNUM-03X, but with Hysteresis Model active                          | MODEL-X |     | NA         |
KRNUM-03Y-IMBNUM  | Same as KRNUM-03Y, but with Hysteresis Model active                          | MODEL-Y |     | NA         |
KRNUM-03Z-IMBNUM  | Same as KRNUM-03Z, but with Hysteresis Model active                          | MODEL-Z |     | NA         |
[]()              |                                                                              | []()    |     |            |
KRNUMXY_SOLVENT   |                                                                              |         |     |            |


**Notes:**

1. _Test Type_ column shows if the case is used for integration testing (_Int_), or regression testing (_Reg_).
2. _Results Match_ column indicate if the OPM Flow results match the commercial simulator.

**Version: 13 February 2023**

## MODEL-X and MODEL-Y

MODEL-X (X tests) and MODEL-Y (Y tests) are simple three-phase (20, 20, 10) Cartesian Regular Corner-Point Grids, used
for testing directional relative permeability options. The models are divided into four segments which are
identical in size, properties, well layout, etc. The only difference between these segments are the KRNUMX, KRNUMY and
KRNUMZ assignments.

A total of 16 relative permeability curves are provided, but only three of these are being used. Table-1 is used for
COMPDAT connections, and Table-5 and Table-9 are applied to the grid blocks via the KRNUM keywords.

**Oi-Water Case**

![](plots/KRNUM_model-X-plt01.jpg)

**Gas-Oil Case**

![](plots/KRNUM_model-X-plt02.jpg)

## MODEL-Z

This model is a simple three-phase (10, 20, 18) Cartesian Regular Corner-Point Grid, and is used for testing directional
relative permeability options with focused on oil water (SWOF) cases. The model is divided into four segments which are
identical in size, properties, well layout, etc. The only difference between these segments were KRNUMX, KRNUMY and
KRNUMZ definitions.

A total of 16 relative permeability curves are provided, but only three of these are being used. Table-1 is used for
COMPDAT connections, and Table-5 and Table-9 are applied to the grid blocks via the KRNUM keywords.

![](plots/KRNUM_model-Z-plt01.jpg)

![](plots/KRNUM_model-Z-plt02.jpg)

## RESULTS

### KRNUM-02X (Oil-Water) Description and Results

Based on MODEL-X with:

1) The dominating flow direction (by far) in this model, is in X-direction.
2) The table below shows table number used in X-,Y- and Z- direction for the different segments.

```
+-----------+------+------+------+------+
|           | S1   | S2   | S3   | S4   |
|-----------+------+------+------+------+
|           | B-1H | B-2H | B-3H | B-4H |
+-----------+------+------+------+------+
|  KRNUMX   |   5  |   5  |   5  |   9  |
|  KRNUMY   |   5  |   9  |   9  |   9  |
|  KRNUMZ   |   5  |   5  |   9  |   9  |
+-----------+------+------+------+------+
```

3) Table 5 is optimistic with respect to wct: SWOF krw = curved , krow = linear.
4) Table 9 ispersimistic with respect to wct: SWOF krw = linear , krow = curved.

[KRNUM-02X ECL Results](plots/KRNUM-02X-ECL.md)

---

### KRNUM-02Y (Oil-Water) Description and Results

Based on MODEL-Y with:

1) The dominating flow direction (by far) in this model, is in Y-direction.
2) The table below shows table number used in X-,Y- and Z- direction for the different segments.

```
+-----------+------+------+------+------+
|           | S1   | S2   | S3   | S4   |
|-----------+------+------+------+------+
|           | B-1H | B-2H | B-3H | B-4H |
+-----------+------+------+------+------+
|  KRNUMX   |   5  |   9  |   9  |   9  |
|  KRNUMY   |   5  |   5  |   5  |   9  |
|  KRNUMZ   |   5  |   5  |   9  |   9  |
+-----------+------+------+------+------+
```

3) Table 5 is optimistic with respect to wct: SWOF krw = curved , krow = linear.
4) Table 9 ispersimistic with respect to wct: SWOF krw = linear , krow = curved.

[KRNUM-02Y ECL Results](plots/KRNUM-02Y-ECL.md)

---

### KRNUM-02Z (Oil-Water) Description and Results

Based on MODEL-Z with:

1) The dominating flow direction (by far) in this model, is in Z-direction.
2) The table below shows table number used in X-,Y- and Z- direction for the different segments.

```
+-----------+------+------+------+------+
|           | S1   | S2   | S3   | S4   |
|-----------+------+------+------+------+
|           | B-1H | B-2H | B-3H | B-4H |
+-----------+------+------+------+------+
|  KRNUMX   |   5  |   9  |   9  |   9  |
|  KRNUMY   |   5  |   5  |   9  |   9  |
|  KRNUMZ   |   5  |   5  |   5  |   9  |
+-----------+------+------+------+------+
```

3) Table 5 is optimistic with respect to wct: SWOF krw = curved , krow = linear.
4) Table 9 ispersimistic with respect to wct: SWOF krw = linear , krow = curved.

[KRNUM-02Z ECL Results](plots/KRNUM-02Z-ECL.md)

---
### KRNUM-03X (Oil-Gas) Description and Results

Based on MODEL-X with:

1) The dominating flow direction (by far) in this model, is in X-direction.
2) The table below shows table number used in X-,Y- and Z- direction for the different segments.

```
+-----------+------+------+------+------+
|           | S1   | S2   | S3   | S4   |
|-----------+------+------+------+------+
|           | B-1H | B-2H | B-3H | B-4H |
+-----------+------+------+------+------+
|  KRNUMX   |   6  |   3  |   3  |   3  |
|  KRNUMY   |   6  |   6  |   6  |   3  |
|  KRNUMZ   |   6  |   6  |   3  |   3  |
+-----------+------+------+------+------+
```
3) Table 6 is optimistic with respect to gor  : SGOF  krg = curved , krog = linear.
4) Table 3 is persimistic with respect to gor : SGOF  krg = linear , krog = curved.
5) Fluid contacts changed to simulate an oil-gas reservoir model.
6) Well positions reversed such the injectors are at the crest and are converted to gas injection wells.

[KRNUM-03X ECL Results](plots/KRNUM-03X-ECL.md)

---

### KRNUM-03Y (Oil-Gas) Description and Results

Based on MODEL-Z with:

1) The dominating flow direction (by far) in this model, is in Y-direction.
2) The table below shows table number used in X-,Y- and Z- direction for the different segments.

```
+-----------+------+------+------+------+
|           | S1   | S2   | S3   | S4   |
|-----------+------+------+------+------+
|           | B-1H | B-2H | B-3H | B-4H |
+-----------+------+------+------+------+
|  KRNUMX   |   6  |   6  |   6  |   3  |
|  KRNUMY   |   6  |   3  |   3  |   3  |
|  KRNUMZ   |   6  |   6  |   3  |   3  |
+-----------+------+------+------+------+
```

3) Table 6 is optimistic with respect to gor  : SGOF  krg = curved , krog = linear
4) Table 3 is persimistic with respect to gor : SGOF  krg = linear , krog = curved
5) Fluid contacts changed to simulate an oil-gas reservoir model.
6) Well positions reversed such the injectors are at the crest and are converted to gas injection wells.

[KRNUM-03Y ECL Results](plots/KRNUM-03Y-ECL.md)

---

### KRNUM-03Z (Oil-Gas) Description and Results

Based on MODEL-Z with:

1) The dominating flow direction (by far) in this model, is in Z-direction.
2) The table below shows table number used in X-,Y- and Z- direction for the different segments.

```
+-----------+------+------+------+------+
|           | S1   | S2   | S3   | S4   |
|-----------+------+------+------+------+
|           | B-1H | B-2H | B-3H | B-4H |
+-----------+------+------+------+------+
|  KRNUMX   |   6  |   3  |   3  |   3  |
|  KRNUMY   |   6  |   6  |   3  |   3  |
|  KRNUMZ   |   6  |   6  |   6  |   3  |
+-----------+------+------+------+------+
```
3) Table 6 is optimistic with respect to gor  : SGOF  krg = curved , krog = linear
4) Table 3 is persimistic with respect to gor : SGOF  krg = linear , krog = curved
5) Fluid contacts changed to simulate an oil-gas reservoir model.
6) Well positions reversed such the injectors are at the crest and are converted to gas injection wells.

[KRNUM-03Z ECL Results](plots/KRNUM-03Z-ECL.md)

---

### KRNUM-02X- (Oil-Water) Description and Results

Same as KRNUM-02X, but in addition the negative versons of KRNUM, that is KRNUMX-, KRNUMY-
and KRNUMZ- are used. Thus, instead of tables 5 and 9, we use tables 9 and 5 for KRNUM-

**No Results as the option is currently not supported.**

---

### KRNUM-02Y- (Oil-Water) Description and Results

Same as KRNUM-02Y, but in addition the negative versons of KRNUM, that is KRNUMX-, KRNUMY-
and KRNUMZ- are used. Thus, instead of tables 5 and 9, we use tables 9 and 5 for KRNUM-

**No Results as the option is currently not supported.**

---

### KRNUM-02Z- (Oil-Water) Description and Results

Same as KRNUM-02Z, but in addition the negative versons of KRNUM, that is KRNUMX-, KRNUMY-
and KRNUMZ- are used. Thus, instead of tables 5 and 9, we use tables 9 and 5 for KRNUM-

**No Results as the option is currently not supported.**

---
### KRNUM-03X- (Oil-Gas) Description and Results

Same as KRNUM-03X, but in addition the negative versons of KRNUM, that is KRNUMX-, KRNUMY-
and KRNUMZ- are used. Thus, instead of Tables 6 and 3, we use Tables 3 and 6 for KRNUM-

**No Results as the option is currently not supported.**

---

### KRNUM-03Y- (Oil-Gas) Description and Results

Same as KRNUM-03Y, but in addition the negative versons of KRNUM, that is KRNUMX-, KRNUMY-
and KRNUMZ- are used. Thus, instead of Tables 6 and 3, we use Tables 3 and 6 for KRNUM-

**No Results as the option is currently not supported.**

---

### KRNUM-03Z- (Oil-Gas) Description and Results

Same as KRNUM-03Z, but in addition the negative versons of KRNUM, that is KRNUMX-, KRNUMY-
and KRNUMZ- are used. Thus, instead of Tables 6 and 3, we use Tables 3 and 6 for KRNUM-

**No Results as the option is currently not supported.**

---

### KRNUM-02X-IMBNUM (Oil-Water) Description and Results

Same as KRNUM-02X, but with:
3) KRNUM  table  5 optimistic with respect to wct: SWOF krw = curved , krow = linear
4) KRNUM  table  9 persimistic with respect to wct: SWOF krw = linear , krow = curved
5) IMBNUM table 21 optimistic with respect to wct: SWOF krw = curved , krow = linear
6) IMBNUM table 25 persimistic with respect to wct: SWOF krw = linear , krow = curved
7) Carlson Hysteresis Model with hysteresis modeling applied to both relative permeability,
   and capillary pressure curves.

---

### KRNUM-02Y-IMBNUM (Oil-Water) Description and Results

Same as KRNUM-02Y, but with:
3) KRNUM  table  5 optimistic with respect to wct: SWOF krw = curved , krow = linear
4) KRNUM  table  9 persimistic with respect to wct: SWOF krw = linear , krow = curved
5) IMBNUM table 21 optimistic with respect to wct: SWOF krw = curved , krow = linear
6) IMBNUM table 25 persimistic with respect to wct: SWOF krw = linear , krow = curved
7) Carlson Hysteresis Model with hysteresis modeling applied to both relative permeability,
   and capillary pressure curves.

---

### KRNUM-02Z-IMBNUM (Oil-Water) Description and Results

Same as KRNUM-02Z, but with:
3) KRNUM  table  5 optimistic with respect to wct: SWOF krw = curved , krow = linear
4) KRNUM  table  9 persimistic with respect to wct: SWOF krw = linear , krow = curved
5) IMBNUM table 21 optimistic with respect to wct: SWOF krw = curved , krow = linear
6) IMBNUM table 25 persimistic with respect to wct: SWOF krw = linear , krow = curve
7) Carlson Hysteresis Model with hysteresis modeling applied to both relative permeability,
   and capillary pressure curves.

### KRNUM-03X-IMBNUM (Oil-Gas) Description and Results

Same as KRNUM-03X, but with:
3) KRNUM  table  6 optimistic with respect to gor  : SGOF  krg = curved , krog = linear
4) KRNUM  table  3 persimistic with respect to gor : SGOF  krg = linear , krog = curved
5) IMBNUM table 22 optimistic with respect to wct: SWOF krw = curved , krow = linear
6) IMBNUM table 19 persimistic with respect to wct: SWOF krw = linear , krow = curved
7) Carlson Hysteresis Model with hysteresis modeling applied to both relative permeability,
   and capillary pressure curves.

---

### KRNUM-03Y-IMBNUM (Oil-Gas) Description and Results

Same as KRNUM-03Y, but with:
3) KRNUM  table  6 optimistic with respect to gor  : SGOF  krg = curved , krog = linear
4) KRNUM  table  3 persimistic with respect to gor : SGOF  krg = linear , krog = curved
5) IMBNUM table 25 optimistic with respect to wct: SWOF krw = curved , krow = linear
6) IMBNUM table 19 persimistic with respect to wct: SWOF krw = linear , krow = curved
7) Carlson Hysteresis Model with hysteresis modeling applied to both relative permeability,
   and capillary pressure curves.

---

### KRNUM-03Z-IMBNUM (Oil-Gas) Description and Results

Same as KRNUM-03Z, but with:
3) KRNUM  table  6 optimistic with respect to gor  : SGOF  krg = curved , krog = linear
4) KRNUM  table  3 persimistic with respect to gor : SGOF  krg = linear , krog = curved
5) IMBNUM table 25 optimistic with respect to wct: SWOF krw = curved , krow = linear
6) IMBNUM table 19 persimistic with respect to wct: SWOF krw = linear , krow = curved
7) Carlson Hysteresis Model with hysteresis modeling applied to both relative permeability,
   and capillary pressure curves.

---

### KRNUMXY_SOLVENT Description and Results

This simulation is based on the data given in:
Comparison of Solutions to a Three-Dimensional Black-Oil Reservoir Simulation Problem
by Aziz S. Odeh,
Journal of Petroleum Technology, January 1981

Modified by Tor Harald Sandve, IRIS 2015 to work as a test case for the Solvent model, with
the following changes:
(1) Use family II input (SWFN, SGFN, SOF3)
(2) Add solvent data
(3) Add directional relative permeability (KRNUM[XY] = 2, KRNUMZ = 1)

---
