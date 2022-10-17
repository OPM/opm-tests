# GRUPCNTL - Group Control Case Test Documentation

Case Name   | Case Description                           | Model    | Results<br />Match | Comments |
----------- | ------------------------------------------ | ---------| ------- | ------------------------------------- |
GRUPCNTL-01 | 0A1_GRCTRL_LRAT_ORAT_BASE_MODEL2_MSW       | MODEL02  |  Yes    | Good match with commercial simulator            
GRUPCNTL-02 | 0A1_GRCTRL_LRAT_ORAT_BASE_MODEL2_STW       | MODEL02  |  Yes    | Good match with commercial simulator                                      
GRUPCNTL-03 | 0A2_GRCTRL_LRAT_ORAT_GGR_BASE_MODEL2_MSW   | MODEL02  |  Yes    | Good match with commercial simulator                                  
GRUPCNTL-04 | 0A2_GRCTRL_LRAT_ORAT_GGR_BASE_MODEL2_STW   | MODEL02  |  Yes    | Good match with commercial simulator                                      
GRUPCNTL-05 | 0A3_GRCTRL_LRAT_LRAT_BASE_MODEL2_MSW       | MODEL02  |  Yes    | Good match with commercial simulator                                      
GRUPCNTL-06 | 0A3_GRCTRL_LRAT_LRAT_BASE_MODEL2_STW       | MODEL02  |  Yes    | Good match with commercial simulator                                      
GRUPCNTL-07 | 0A4_GRCTRL_LRAT_LRAT_GGR_BASE_MODEL2_MSW   | MODEL02  |  Yes    | Good match with commercial simulator                                      
GRUPCNTL-08 | 0A4_GRCTRL_LRAT_LRAT_GGR_BASE_MODEL2_STW   | MODEL02  |  Yes    | Good match with commercial simulator                                      
GRUPCNTL-09 | 9_1A_DEPL_MAX_RATE_MIN_BHP_MSW             | MODEL02A |  Yes    | Perfect match with commercial simulator                                      
GRUPCNTL-10 | 9_1A_DEPL_MAX_RATE_MIN_BHP_STW             | MODEL02A |  Yes    | Perfect match with commercial simulator                                      
GRUPCNTL-11 | 9_1B_DEPL_MAX_RATE_MIN_THP_MSW             | MODEL02A |  Yes    | Perfect match with commercial simulator                                      
GRUPCNTL-12 | 9_1B_DEPL_MAX_RATE_MIN_THP_STW             | MODEL02A |  Yes    | Perfect match with commercial simulator                                      
GRUPCNTL-13 | 9_2A_DEPL_GCONPROD_1L_MSW                  | MODEL02A |  Yes    | Perfect match with commercial simulator, except for well control mode                                       
GRUPCNTL-14 | 9_2A_DEPL_GCONPROD_1l_STW                  | MODEL02A |  Yes    | Perfect match with commercial simulator, except for well control mode
GRUPCNTL-15 | 9_2B_DEPL_GCONPROD_2L_MSW                  | MODEL02A |  Yes    | Perfect match with commercial simulator, except for well control mode
GRUPCNTL-16 | 9_2B_DEPL_GCONPROD_2L_MSW                  | MODEL02A |  Yes    | Perfect match with commercial simulator, except for well control mode
GRUPCNTL-17 | 9_3B_GINJ_GAS_EXPORT_MSW                   | MODEL02A |  Yes    | Perfect match with commercial simulator, but no Sales Gas or Gas Consumption volumes                                    
GRUPCNTL-18 | 9_3B_GINJ_GAS_EXPORT_STW                   | MODEL02A |  Yes    | Perfect match with commercial simulator, but no Sales Gas or Gas Consumption volumes                                     
GRUPCNTL-19 | 9_3C_GINJ_GAS_GCONSUMP_MSW                 | MODEL02A |  Yes    | Perfect match with commercial simulator, but no Sales Gas or Gas Consumption volumes                                   
GRUPCNTL-20 | 9_3C_GINJ_GAS_GCONSUMP_STW                 | MODEL02A |  Yes    | Perfect match with commercial simulator, but no Sales Gas or Gas Consumption volumes
GRUPCNTL-21 | 9_3D_GINJ_GAS_MAX_EXPORT_MSW               | MODEL02A |  Yes    | Perfect match with commercial simulator, but no Sales Gas or Gas Consumption volumes                                   
GRUPCNTL-22 | 9_3D_GINJ_GAS_MAX_EXPORT_STW               | MODEL02A |  Yes    | Perfect match with commercial simulator, but no Sales Gas or Gas Consumption volumes                                     
GRUPCNTL-23 | 9_3E_GAS_MIN_EXPORT_MSW                    | MODEL02A |  Yes    | Very good match, except for gas volumes after 2019-06-01. Reference case matches commercial simulator.                                
GRUPCNTL-24 | 9_3E_GAS_MIN_EXPORT_STW                    | MODEL02A |  Yes    | Very good match, except for gas volumes after 2019-06-01. Reference case matches commercial simulator                                    
GRUPCNTL-25X | 9_4A_WINJ_MAXWRATES_MAXBHP_GCONPROD_1L_MSW | MODEL02A |         |                                       
GRUPCNTL-26X | 9_4A_WINJ_MAXWRATES_MAXBHP_GCONPROD_1L_STW | MODEL02A |         |                                       
GRUPCNTL-27X | 9_4B_WINJ_VREP-W_MSW                       | MODEL02A |         |                                       
GRUPCNTL-28X | 9_4B_WINJ_VREP-W_STW                       | MODEL02A |         |                                       
GRUPCNTL-29X | 9_4C_WINJ_GINJ_VREP-W_REIN-G_MSW           | MODEL02A |         |                                       
GRUPCNTL-30X | 9_4C_WINJ_GINJ_VREP-W_REIN-G_STW           | MODEL02A |         |                                       
GRUPCNTL-31X | 9_4D_WINJ_GINJ_GAS_EXPORT_MSW              | MODEL02A |         |                                       
GRUPCNTL-32X | 9_4D_WINJ_GINJ_GAS_EXPORT_STW              | MODEL02A |         |                                       
GRUPCNTL-33X | 9_4E_WINJ_GINJ_GUIDERATE_MSW               | MODEL02A |         |                                       
GRUPCNTL-34X | 9_4E_WINJ_GINJ_GUIDERATE_STW               | MODEL02A |         |                                                  
**Notes:** 

1. _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see below for comparisons.
2. If Yes is in **bold** under the _Results Match_ column, then the case is part of the regression testing.
3. Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
4. All cases run with one day time steps for comparison purposes.

**Version: 11 October 2022**

### GRUPCNT MODEL02 Model (Regular Corner-Point)
![](plots/GRUPCNTL-MODEL02.jpg)

This case is based on MODEL02 and is intended to verify various aspects of group and well control inter-actions. The  model is 
is a (13, 22, 11) model with Regular Corner-Point grid. This is a three-phase model using MODEL02 PVT based on the Norne model.
The model has several groups as shown below:
```                                                        
                                                        FIELD                                                                  
                                                          |                                                                    
                                                     --------------
                                                      |           |
                                                    INJE        PROD  
                                                     |            |
                                                   INJE1      -------- 
                                                              |        |
                                                             WGRP1    WGRP2   
                                                               |       |    
                                                           --------  PROD2 
                                                           |      | 
                                                        PROD1   PROD3       
                                                               
                                                                                                                           
```
### GRUPCNT MODEL02A Model (Regular Corner-Point)
![](plots/GRUPCNTL-MODEL02A.jpg) 

This case is based on MODEL02 and is intended to verify various aspects of group and well control inter-actions. The  model is 
is a (13, 22, 11) model with Regular Corner-Point grid. This is a three-phase model using MODEL02 PVT based on the Norne model.
The static data for this model is different to the standard MODEL02, due to fault and NNC modifications, as well as, activating
the hysteresis and end-point scaling option. 

The model has several groups as shown below:
```                                      
                                                          FIELD
                                                            |
                                                          PROD
                                               +-------+-------+-------+   
                                               |       |       |       |    
                                             PROD1   PROD2   PROD3   PROD4  
```

## RESULTS

### GRUPCNTL-01 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **multi-segment wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to 2,500.   
4) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).
5) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).

Note multi-well segment case has maximum time step size of 3.0 days.

![](plots/GRUPCNTL-01-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-01-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-01-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-01-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-01-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-01-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-01-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-01-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-01-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-01-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-02 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **standard wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to 2,500.   
4) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).
5) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).

![](plots/GRUPCNTL-02-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-02-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-02-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-02-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-02-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-02-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-02-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-02-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-02-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-02-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-03 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **multi-segment wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to 2,500.   
4) Group WGRP1: GCONPROD(GUIPHASE) set to **FORM**.
5) Group WGRP2: GCONPROD(GUIPHASE) set to **FORM**.

Note multi-well segment case has maximum time step size of 3.0 days.

```
Warning: Problem with GCONPROD
In GRUPCNTL-03.DATA line 397
The supplied guide rate will be ignored

Warning: Problem with GCONPROD
In GRUPCNTL-03.DATA line 397
The supplied guide rate will be ignored
```
[GRUPCNTL-03 Results](plots/GRUPCNTL-03.md) 

![](plots/GRUPCNTL-03-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-03-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-03-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-03-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-03-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-03-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-03-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-03-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-03-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-03-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-04 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **standard wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to 2,500.   
4) Group WGRP1: GCONPROD(GUIPHASE) set to **FORM**.
5) Group WGRP2: GCONPROD(GUIPHASE) set to **FORM**.
```
Warning: Problem with GCONPROD
In GRUPCNTL-03.DATA line 397
The supplied guide rate will be ignored

Warning: Problem with GCONPROD
In GRUPCNTL-03.DATA line 397
The supplied guide rate will be ignored
```
[GRUPCNTL-04 Results](plots/GRUPCNTL-04.md)  

![](plots/GRUPCNTL-04-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-04-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-04-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-04-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-04-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-04-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-04-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-04-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-04-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-04-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-05 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **multi-segment wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to **900**.   
4) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).
5) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).

Note multi-well segment case has maximum time step size of 3.0 days.

![](plots/GRUPCNTL-05-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-05-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-05-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-05-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-05-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-05-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-05-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-05-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-05-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-05-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-06 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **standard wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to **900**.   
4) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).
5) Group WGRP1: GCONPROD(GUIPHASE) set to 1* (well level).

![](plots/GRUPCNTL-06-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-06-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-06-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-06-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-06-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-06-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-06-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-06-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-06-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-06-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-07 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **multi-segment wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to **900**.
4) Group WGRP1: GCONPROD(GUIPHASE) set to **FORM**.
5) Group WGRP2: GCONPROD(GUIPHASE) set to **FORM**.

Note multi-well segment case has maximum time step size of 3.0 days.

```
Warning: Problem with GCONPROD
In GRUPCNTL-07.DATA line 397
The supplied guide rate will be ignored

Warning: Problem with GCONPROD
In GRUPCNTL-07.DATA line 397
```

![](plots/GRUPCNTL-07-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-07-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-07-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-07-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-07-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-07-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-07-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-07-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-07-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-07-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-08 Description and Results
1) The case has three producers (no VFP) and one water injector.
2) Producers and injectors are **standard wells**.
3) Group PROD: GCONPROD(TARGET) set to LRAT control and GCONPROD(OIL) limit set to **900**.
4) Group WGRP1: GCONPROD(GUIPHASE) set to **FORM**.
5) Group WGRP2: GCONPROD(GUIPHASE) set to **FORM**.
```
Warning: Problem with GCONPROD
In GRUPCNTL-08.DATA line 397
The supplied guide rate will be ignored

Warning: Problem with GCONPROD
In GRUPCNTL-08.DATA line 397
The supplied guide rate will be ignored
```

![](plots/GRUPCNTL-08-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-08-Field_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-08-Group_INJE_Water_Injection_Comparison_Plot.png)
![](plots/GRUPCNTL-08-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-08-Group_WGRP1_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-08-Group_WGRP2_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-08-Well_INJ1_Water_Injection_Performance.png)
![](plots/GRUPCNTL-08-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-08-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-08-Well_PROD3_Production_Performance.png)

---

### GRUPCNTL-09 Description and Results (MODEL02A)

1) The case has **four producers** (no VFP) and no water injectors (depletion case).
2) Producers are multi-segment wells
3) No Group control.
4) WCONPROD(OIL) = 4E3, WCONPROD(GAS) = 4E6, WCONPROD(LIQ) = 8E3, and WCONPROD(BHP) = 60.0, same for all wells. 

![](plots/GRUPCNTL-09-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-09-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-09-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-09-Well_PROD3_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-09-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-09-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-10 Description and Results (MODEL02A)

1) The case has four producers (no VFP) and no water injectors (depletion case).
2) Producers are **standard wells**.
3) No Group control.
4) WCONPROD(OIL) = 4E3, WCONPROD(GAS) = 4E6, WCONPROD(LIQ) = 8E3, and WCONPROD(BHP) = 60.0, same for all wells. 

![](plots/GRUPCNTL-10-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-10-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-10-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-10-Well_PROD3_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-10-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-10-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-11 Description and Results

1) The case has four producers with VFP tables, and no water injectors (depletion case).
2) Producers are multi-segment wells.
3) No Group control.
4) WCONPROD(OIL) = 4E3, WCONPROD(GAS) = 4E6, WCONPROD(LIQ) = 8E3, and WCONPROD(BHP) = 60.0, same for all wells.
5) **WCONPROD(THP) = 30.0 and VFP tables.**

![](plots/GRUPCNTL-11-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-11-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-11-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-11-Well_PROD3_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-11-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-11-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-12 Description and Results

1) The case has four producers with VFP tables, and no water injectors (depletion case).
2) Producers are **standard wells**.
3) No Group control.
4) WCONPROD(OIL) = 4E3, WCONPROD(GAS) = 4E6, WCONPROD(LIQ) = 8E3, and WCONPROD(BHP) = 60.0, same for all wells.
5) **WCONPROD(THP) = 30.0 and VFP tables**.

![](plots/GRUPCNTL-12-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-12-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-12-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-12-Well_PROD3_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-12-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-12-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-13 Description and Results

1) The case has four producers with VFP tables, and no water injectors (depletion case).
2) Producers are multi-segment wells.
3) Group control.
4) WCONPROD(OIL)= 4E3, WCONPROD(GAS)= 4E6, WCONPROD(LIQ) = 8E3, and WCONPROD(BHP) = 60.0, same for all wells. 
5) WCONPROD(THP) = 30.0 and VFP tables.
6) **Group PROD: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.**
7) **Group PROD: GCONPROD(GRPCNTL)=NO**

![](plots/GRUPCNTL-13-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-13-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-13-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-13-Well_PROD3_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-13-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-13-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-14 Description and Results

1) The case has four producers with VFP tables, and no water injectors (depletion case).
2) Producers are **standard wells**.
3) Group control.
4) WCONPROD(OIL)= 4E3, WCONPROD(GAS)= 4E6, WCONPROD(LIQ) = 8E3, and WCONPROD(BHP) = 60.0, same for all wells. 
5) WCONPROD(THP) = 30.0 and VFP tables.
6) **Group PROD: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.**
7) **Group PROD: GCONPROD(GRPCNTL)=NO**

![](plots/GRUPCNTL-14-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-14-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-14-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-14-Well_PROD3_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-14-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-14-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-15 Description and Results

```                                      
                                                   FIELD
                                                     |
                                                   PROD
                                           ----------+------------
                                          |                      |        
                                       MANI-A                 MANI-B      
                                    +-----+------+          +-----+------+
                                    |            |          |            |   
                                  PROD1       PROD2       PROD3        PROD4  
```
 1) The case has four producers with VFP tables, and no water injectors (depletion case).
 2) Producers are multi-segment wells.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group PROD: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3. 
 7) Group PROD: GCONPROD(GRPCNTL)=NO
 8) **Group MANI-A: GCONPROD(TARGET)=FLD, GCONPROD(OIL)=6E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.** 
 9) **Group MANI-A: GCONPROD(GRPCNTL)=YES**
10) **Group MANi-B: Same as MANI-A**

![](plots/GRUPCNTL-15-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Group_MANI_A_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Group_MANI_B_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Well_PRO3D_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-15-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-15-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-15-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-15-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-16 Description and Results
 1) The case has four producers with VFP tables, and no water injectors (depletion case).
 2) Producers are standard wells.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group PROD: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3. 
 7) Group PROD: GCONPROD(GRPCNTL)=NO
 8) **Group MANI-A: GCONPROD(TARGET)=FLD, GCONPROD(OIL)=6E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.** 
 9) **Group MANI-A: GCONPROD(GRPCNTL)=YES**
 10) **Group MANI-B: Same as MANI-A**

![](plots/GRUPCNTL-16-Field_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Group_MANI_A_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Group_MANI_B_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Group_PROD_Production_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Well_PRO3D_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD1_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD1_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD1_Production_Performance.png)
![](plots/GRUPCNTL-16-Well_PROD2_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD2_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD2_Production_Performance.png)
![](plots/GRUPCNTL-16-Well_PROD3_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD3_Production_Performance.png)
![](plots/GRUPCNTL-16-Well_PROD4_Pressure_Comparison_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD4_Production_and_Mode_of_Control_Plot.png)
![](plots/GRUPCNTL-16-Well_PROD4_Production_Performance.png)

---

### GRUPCNTL-17 Description and Results

```                                      
                                             FIELD
                                               |
                                              RES
                                 --------------+------------
                                 |                         |        
                               PROD                      INJE      
                       +-----+-----+-----+           +-----+-----+
                       |     |     |     |           |           |
                    PROD1  PROD2  PROD3  PROD4      INJE1      INJE2
```                                      
 1) The case has four producers with VFP tables, and **two gas injectors**.
 2) Producers and injectors are multi-segment wells.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3. 
 7) Group RES: GCONPROD(GRPCNTL)=NO
 8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
 9) Well INJ1 re-completed 2019-03-01.
 10) Group RES: GCONPROD(GAS)=2.1E6 at 2019-06-01.

---

### GRUPCNTL-18 Description and Results
 1) The case has four producers with VFP tables, and two gas injectors.
 2) Producers and injectors are **standard wells**.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3. 
 7) Group RES: GCONPROD(GRPCNTL)=NO
 8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
 9) Well INJ1 re-completed 2019-03-01.
10) Group RES: GCONPROD(GAS)=2.1E6 at 2019-06-01.

---

### GRUPCNTL-19 Description and Results
1) The case has four producers with VFP tables, and two gas injectors.
2) Producers and injectors are multi-segment wells.
3) Group control.
4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
5) WCONPROD(THP)=30.0 and VFP tables.
6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.  
7) Group RES: GCONPROD(GRPCNTL)=NO
8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
9) Well INJ1 re-completed 2019-03-01.
10) Group RES: GCONPROD(GAS)=2.1E6 at 2019-06-01.
11) Group RES: GCONSALE(GSALE)=0.75E6, GCONSALE(GSALEMAX=0.80E6), GCONSALE(GSALEMIN)=0.50E6, and  GCONSALE(ACTION)=RATE

---

### GRUPCNTL-20 Description and Results
 1) The case has four producers with VFP tables, and two gas injectors.
 2) Producers and injectors are **standard wells**.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.  
 7) Group RES: GCONPROD(GRPCNTL)=NO
 8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
 9) Well INJ1 re-completed 2019-03-01.
10) Group RES: GCONPROD(GAS)=2.1E6 at 2019-06-01.
11) Group RES: GCONSALE(GSALE)=0.75E6, GCONSALE(GSALEMAX=0.80E6), GCONSALE(GSALEMIN)=0.50E6, and  GCONSALE(ACTION)=RATE
---

### GRUPCNTL-21 Description and Results
 1) The case has four producers with VFP tables, and two gas injectors.
 2) Producers and injectors are multi-segment wells.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.  
 7) Group RES: GCONPROD(GRPCNTL)=NO
 8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
 9) Well INJ1 re-completed 2019-03-01.
10) Group RES: GCONPROD(GAS)=2.1E6 at 2019-06-01.
11) Group RES: GCONSALE(GSALE)=0.75E6, GCONSALE(GSALEMAX=0.80E6), GCONSALE(GSALEMIN)=0.50E6, and  GCONSALE(ACTION)=RATE
12) Group RES: GCONSUMP(GASFUEL)=0.25E6

---

### GRUPCNTL-22 Description and Results
 1) The case has four producers with VFP tables, and two gas injectors.
 2) Producers and injectors are **standard wells**.
 3) Group control.
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.  
 7) Group RES: GCONPROD(GRPCNTL)=NO
 8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
 9) Well INJ1 re-completed 2019-03-01.
10) Group RES: GCONPROD(GAS)=2.1E6 at 2019-06-01.
11) Group RES: GCONSALE(GSALE)=0.75E6, GCONSALE(GSALEMAX=0.80E6), GCONSALE(GSALEMIN)=0.50E6, and  GCONSALE(ACTION)=RATE
12) Group RES: GCONSUMP(GASFUEL)=0.25E6

---

### GRUPCNTL-23 Description and Results
 1) The case has four producers with VFP tables, and two gas injectors.
 2) Producers and injectors are multi-segment wells.
 3) Group control.                   
 4) WCONPROD(OIL)=4E3, WCONPROD(GAS)=4E6,WCONPROD(LIQ)=8E3, and WCONPROD(BHP)=60.0, same for all wells. 
 5) WCONPROD(THP)=30.0 and VFP tables.
 6) Group RES: GCONPROD(TARGET)=ORAT, GCONPROD(OIL)=10E3, GCONPROD(WAT)=12E3, GCONPROD(GAS)=1.6E6, GCONPROD(LIQ)=15E3.  
 7) Group RES: GCONPROD(GRPCNTL)=NO
 8) Group INJE: GCONINJE(TYPE)=GAS, GCONINJE(TARGET)=REIN, GCONPROD(REIN)=1.0    
 9) Well INJ1 re-completed 2019-03-01, shut-in 2019-05-20.
10) Group RES: GCONPROD(GAS)=2.3E6 at 2019-06-01.
11) Group RES: GCONSALE(GSALE)=0.30E6, GCONSALE(GSALEMAX=0.40E6), GCONSALE(GSALEMIN)=0.05E6, and  GCONSALE(ACTION)=RATE
12) Group RES: GCONSUMP(GASFUEL)=0.25E6
13) Well INJE2: WCONINJE(BHP)=235.0 

---

### GRUPCNTL-24 Description and Results

---

### GRUPCNTL-25 Description and Results

---

### GRUPCNTL-26 Description and Results

---

### GRUPCNTL-27 Description and Results

---

### GRUPCNTL-27 Description and Results

---

### GRUPCNTL-29 Description and Results

---

### GRUPCNTL-30 Description and Results

---

### GRUPCNTL-31 Description and Results

---

### GRUPCNTL-32 Description and Results

---

### GRUPCNTL-33 Description and Results

---

### GRUPCNTL-34 Description and Results

---

### GRUPCNTL-35 Description and Results (No results on GitHub)

---

### GRUPCNTL-36 Description and Results (No results on GitHub)

---

### Field and Group Control Mode Reference
![](plots/GRUPCNTL-REF01.jpg)

### Field and Group Control Mode Reference
![](plots/GRUPCNTL-REF02.jpg)
