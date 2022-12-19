# ACTIONW Test Documentation

Case Name         | Case Desciption                                               | Base Model | Test<br />Type | Results<br />Match | Comments |
----------------- | ------------------------------------------------------------  | ---------- | ----- |------- | ------------------------------------- |
MSW-3D            | Base model to test a production multi-segment well (PROD01) in a 3D grid.                           | MSW-3D  |    | YES    | Perfect match with commercial simulator.
MSW-3D-01         | Error checking test, missing some COMPDAT connections.                                              | MSW-3D  |    | NA     | 
MSW-3D-02         | Error checking test, missing some COMPSEGS connections.                                             | MSW-3D  |    | NA     |
MSW-3D-03         | Error checking test, missing some WELSEGS connections.                                              | MSW-3D  |    | NA     | 
MSW-3D-04         | Error checking test, missing all COMPDAT connections.                                               | MSW-3D  |    | NA     | 
MSW-3D-05         | Error checking test, missing all COMPSEGS connections.                                              | MSW-3D  |    | NA     |
MSW-3D-06         | Error checking test, missing all WELSPSEGS connections.                                             | MSW-3D  |    | NA     | 
MSW-3D-07         | Error checking test, revert to original WELSEGS keyword to check for warnings                       | MSW-3D  |    | NA     |

**The ACTIONW keyword is currently not supported, but work is ongoing to implement the keyword; thus, these tests are
designed to test the implementation when the keyword has been implemented.**

**Notes:** 

1. _Test Type_ column shows if the case is used for integration testing (_Int_), or regression testing (_Reg_).  
2. _Results Match_ column indicate if the OPM Flow results match the commercial simulator.
3. All models run on five day time steps via the TUNNING keyword.

**Version: 20 December 2022**

### Multi-Segment Well 3D Model (Cartesian Regular Grid Model)

This model is a simple three-phase (10, 10, 10) Cartesian regular grid model that users the rock and fluid properties 
from the Norne full field model. The model has one standard water injector (INJE01) and one multi-segment oil well 
producer (PROD01). Previous versions of this case had inconsistent WELSEGS parameters, which have been corrected in 
this version.

![](plots/msw-3d-model-plt01.jpg)

![](plots/msw-3d-model-plt02.jpg)

### MSW-3D Description and Results

Base case model with:

1) Base model to test a production multi-segment well (PROD01) in a 3D grid.                  
2) Maximum well water injection rate set to 15,000 m3/d subject to a maximum BHP of 450 barsa
3) Oil production is controled by a minimum BHP of 260 barsa.     
4) Multi-segment well SUMMARY vectors that are currently supported are now written out.

[MSW-3D ECL Results](plots/MSW-3D-ECL.md)

### MSW-3D-01 Description and Results

This case is based on the Base case run, MSW, and differs by commenting out some layers in the COMPDAT keyword to check
if errors or warning messages are issued for this type of error. The model is run in NOSIM mode for checking purposes 
only. 

### MSW-3D-02 Description and Results

This case is based on the Base case run, MSW, and differs by commenting out some layers in the COMPSEGS keyword to 
check if errors or warning messages are issued for this type of error. The model is run in NOSIM mode for checking
purposes only. 

### MSW-3D-03 Description and Results

This case is based on the Base case run, MSW, and differs by commenting out some layers in the WELSEGS keyword to 
check if errors or warning messages are issued for this type of error. The model is run in NOSIM mode for checking
purposes only. 

### MSW-3D-04 Description and Results

This case is based on the Base case run, MSW, and differs by commenting out all layers in the COMPDAT keyword to check
if errors or warning messages are issued for this type of error. The model is run in NOSIM mode for checking purposes 
only. 

### MSW-3D-05 Description and Results

This case is based on the Base case run, MSW, and differs by commenting out all layers in the COMPSEGS keyword to 
check if errors or warning messages are issued for this type of error. The model is run in NOSIM mode for checking
purposes only. 

### MSW-3D-06 Description and Results

This case is based on the Base case run, MSW, and differs by commenting out all layers in the WELSEGS keyword to 
check if errors or warning messages are issued for this type of error. The model is run in NOSIM mode for checking
purposes only. 

### MSW-3D-07 Description and Results

This case is based on the Base case run, MSW, and differs by using the original WELSEGS keyword to check if errors 
or warning messages are issued for inconsistent data on this keyword. The model is run in NOSIM mode for checking 
purposes only. 
