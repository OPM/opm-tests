# GASLIFT Test Documentation

Case Name | Case Desciption                                               | Base Model | Results<br />Match | Comments |
--------- | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
GASLIFT-01| Two-Phase, Cartesian regular, with variable GLIFT             | GASLIFT    | Fails  | Two-Phase not supported.
GASLIFT-02| Two-Phase, Corner-Point, with variable GLIFT                  | GASLIFT    | Fails  | Two-Phase not supported.
GASLIFT-03| Three-Phase, Corner-Point, variable GLIFT, MODEL05 PVT        | GASLIFT    | Yes    | Fair to good well match - results apprear reasonable. 
GASLIFT-04| Three-Phase, Corner-Point, variable GLIFT, MODEL05 PVT/VFP    | GASLIFT    | Yes    | Fair to good well match - results apprear reasonable. 
GASLIFT-05| Base                                                          | MODEL05    | Yes    | Generally good well match except at end due to lack of gas lift.
GASLIFT-06| Base and group ORAT=6000                                      | MODEL05    | Mixed  | Generally good well match, except C1-1H and C-2H.  
GASLIFT-07| Base and group LIFTOPT(OPTLIFT)=NO                            | MODEL05    | No     | Different, gas lift not applied in some casesB-1H for example, Should be similar to GASLIFT-05.
GASLIFT-08| Base and group ORAT=6000, Max ALQ from VFP                    | MODEL05    | Mixed  | Field matches, but well results are variable, with some being well matched (B-1H) others not (B-2H).  
GASLIFT-09| Base and group ORAT=6000, Max ALQ from VFP, TSTEP=15          | MODEL05    | No     | Different, no gas lift on several wells (B-1H, B-3H, C-1H).
GASLIFT-10| Base and group ORAT=6000, Max ALQ from VFP, TSTEP=15, WTEST   | MODEL05    | Yes    | Field matches, WTEST works, well B-3H and C-2H different.
GASLIFT-11| Base and group ORAT=6000, Max ALQ from VFP, GLIFTLIM(MXLIFT)  | MODEL05    | Yes    | Field matches, no gas lift on several wells B-2H and C-1H. 
GASLIFT-12| MSW Base for Multi-Segment Wells                              | MODEL05    | No     | Different, either no gas lift (B-2H) or insufficent gas lift (B-1H, B-3H, and C-2H). 
GASLIFT-13| MSW and BRANPROP and NODEPROP                                 | MODEL05    | No     | Different, either no gas lift (B-2H) or insufficent gas lift (B-1H, B-3H, and C-2H), various "switching" messages.
GASLIFT-14| MSW and BRANPROP and NODEPROP(GASLIFT)=YES                    | MODEL05    | No     | Different, either no gas lift (B-2H and B-3H) or insufficent gas lift (B-1H,
GASLIFT-15| MSW and BRANPROP and NODEPROP(GASLIFT)=YES, RESTART run       | MODEL05    | No     | Both simulators fail - ignore results for now,  will investigate further.
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the GASLIFT.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   All cases run with one day time steps for comparison purposes.

**Version: 03 October 2022**

## GASLIFT Model (Irregular Corner-Point)
![](plots/GASLIFT.jpg)

## GASLIFT MODEL05 Model (Irregular Corner-Point)

![](plots/GASLIFT_MODEL05.jpg)


 ** GASLIFT-01 Results
![](plots/GASLIFT-01-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_A01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-01-Well_OP_A01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_A01_Production_Performance.png)
![](plots/GASLIFT-01-Well_OP_A02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-01-Well_OP_A02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_A02_Production_Performance.png)
![](plots/GASLIFT-01-Well_OP_B01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-01-Well_OP_B01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_B01_Production_Performance.png)
![](plots/GASLIFT-01-Well_OP_B02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-01-Well_OP_B02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_B02_Production_Performance.png)
![](plots/GASLIFT-01-Well_OP_C01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-01-Well_OP_C01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_C01_Production_Performance.png)
![](plots/GASLIFT-01-Well_OP_C02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-01-Well_OP_C02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-01-Well_OP_C02_Production_Performance.png)

 ** GASLIFT-02 Results
![](plots/GASLIFT-02-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_A01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-02-Well_OP_A01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_A01_Production_Performance.png)
![](plots/GASLIFT-02-Well_OP_A02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-02-Well_OP_A02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_A02_Production_Performance.png)
![](plots/GASLIFT-02-Well_OP_B01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-02-Well_OP_B01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_B01_Production_Performance.png)
![](plots/GASLIFT-02-Well_OP_B02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-02-Well_OP_B02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_B02_Production_Performance.png)
![](plots/GASLIFT-02-Well_OP_C01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-02-Well_OP_C01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_C01_Production_Performance.png)
![](plots/GASLIFT-02-Well_OP_C02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-02-Well_OP_C02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-02-Well_OP_C02_Production_Performance.png)

 ** GASLIFT-03 Results
![](plots/GASLIFT-03-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_A01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-03-Well_OP_A01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_A01_Production_Performance.png)
![](plots/GASLIFT-03-Well_OP_A02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-03-Well_OP_A02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_A02_Production_Performance.png)
![](plots/GASLIFT-03-Well_OP_B01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-03-Well_OP_B01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_B01_Production_Performance.png)
![](plots/GASLIFT-03-Well_OP_B02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-03-Well_OP_B02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_B02_Production_Performance.png)
![](plots/GASLIFT-03-Well_OP_C01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-03-Well_OP_C01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_C01_Production_Performance.png)
![](plots/GASLIFT-03-Well_OP_C02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-03-Well_OP_C02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-03-Well_OP_C02_Production_Performance.png)

 ** GASLIFT-04 Results
![](plots/GASLIFT-04-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_A01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-04-Well_OP_A01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_A01_Production_Performance.png)
![](plots/GASLIFT-04-Well_OP_A02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-04-Well_OP_A02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_A02_Production_Performance.png)
![](plots/GASLIFT-04-Well_OP_B01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-04-Well_OP_B01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_B01_Production_Performance.png)
![](plots/GASLIFT-04-Well_OP_B02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-04-Well_OP_B02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_B02_Production_Performance.png)
![](plots/GASLIFT-04-Well_OP_C01_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-04-Well_OP_C01_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_C01_Production_Performance.png)
![](plots/GASLIFT-04-Well_OP_C02_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-04-Well_OP_C02_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-04-Well_OP_C02_Production_Performance.png)


 ** GASLIFT-05 Results
![](plots/GASLIFT-05-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-05-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-05-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-05-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-05-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-05-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-05-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-05-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-05-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-05-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-05-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-05-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-05-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-05-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-05-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-05-Well_C_2H_Production_Performance.png)

 ** GASLIFT-06 Results
![](plots/GASLIFT-06-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-06-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-06-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-06-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-06-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-06-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-06-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-06-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-06-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-06-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-06-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-06-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-06-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-06-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-06-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-06-Well_C_2H_Production_Performance.png)

 ** GASLIFT-07 Results
![](plots/GASLIFT-07-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-07-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-07-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-07-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-07-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-07-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-07-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-07-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-07-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-07-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-07-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-07-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-07-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-07-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-07-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-07-Well_C_2H_Production_Performance.png)

 ** GASLIFT-08 Results
![](plots/GASLIFT-08-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-08-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-08-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-08-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-08-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-08-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-08-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-08-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-08-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-08-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-08-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-08-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-08-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-08-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-08-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-08-Well_C_2H_Production_Performance.png)

 ** GASLIFT-09 Results
![](plots/GASLIFT-09-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-09-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-09-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-09-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-09-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-09-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-09-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-09-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-09-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-09-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-09-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-09-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-09-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-09-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-09-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-09-Well_C_2H_Production_Performance.png)

 ** GASLIFT-10 Results
![](plots/GASLIFT-10-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-10-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-10-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-10-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-10-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-10-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-10-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-10-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-10-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-10-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-10-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-10-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-10-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-10-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-10-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-10-Well_C_2H_Production_Performance.png)

 ** GASLIFT-11 Results
![](plots/GASLIFT-11-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-11-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-11-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-11-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-11-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-11-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-11-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-11-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-11-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-11-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-11-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-11-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-11-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-11-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-11-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-11-Well_C_2H_Production_Performance.png)

 ** GASLIFT-12 Results
![](plots/GASLIFT-12-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-12-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-12-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-12-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-12-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-12-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-12-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-12-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-12-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-12-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-12-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-12-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-12-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-12-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-12-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-12-Well_C_2H_Production_Performance.png)

 ** GASLIFT-13 Results
![](plots/GASLIFT-13-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-13-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-13-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-13-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-13-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-13-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-13-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-13-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-13-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-13-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-13-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-13-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-13-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-13-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-13-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-13-Well_C_2H_Production_Performance.png)

 ** GASLIFT-14 Results
![](plots/GASLIFT-14-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-14-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-14-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-14-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-14-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-14-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-14-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-14-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-14-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-14-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-14-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-14-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-14-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-14-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-14-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-14-Well_C_2H_Production_Performance.png)

 ** GASLIFT-15 Results
![](plots/GASLIFT-15-Field_Production_Comparison_Plot.png)
![](plots/GASLIFT-15-Well_B_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-15-Well_B_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-15-Well_B_1H_Production_Performance.png)
![](plots/GASLIFT-15-Well_B_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-15-Well_B_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-15-Well_B_2H_Production_Performance.png)
![](plots/GASLIFT-15-Well_B_3H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-15-Well_B_3H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-15-Well_B_3H_Production_Performance.png)
![](plots/GASLIFT-15-Well_C_1H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-15-Well_C_1H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-15-Well_C_1H_Production_Performance.png)
![](plots/GASLIFT-15-Well_C_2H_Oil_Gas_Lift_Performance_Plot.png)
![](plots/GASLIFT-15-Well_C_2H_Pressure_Comparison_Plot.png)
![](plots/GASLIFT-15-Well_C_2H_Production_Performance.png)


