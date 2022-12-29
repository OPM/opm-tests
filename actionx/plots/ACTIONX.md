# ACTIONX Test Documentation

Main Keyword | Secondary Keywords | Case Name        | Run Type   | Base Model | Results<br />Match | Comments |
------------ | ------------------ | ---------------- | ---------  | ---------- | ------- | ------------------------------------- |
BOX          | ENDBOX, MULTX, MULTY, MULTZ                                         | ACTIONX_BOX        | Prediction | MULT       | Close | Complete. Field matches but well results are variable, some identical some much less so, mostly due to water production.
COMPDAT      | COMPLUMP, WELOPEN                                                   | ACTIONX_COMPDAT    | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
COMPLUMP     | WELOPEN                                                             | ACTIONX_COMPLUMP   | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
ECHO         | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
ENDBOX       | BOX, MULTX, MULTY, MULTZ                                            | See ACTIONX_BOX    | Prediction | MULT       | Close | Complete, same as ACTIONX_BOX.
GCONINJE     | WELOPEN                                                             | ACTIONX_GCONINJE   | Prediction | MODEL02    | Close | Complete
GCONPROD     | UDQ, WCONINJE, WCONPROD                                             | ACTIONX_GCONPROD   | Prediction | MODEL02    | No    | Complete: Results are inconsistent with E100. Also, need to check UDADIMS parameters are consistent with input deck and issue a warning if not, otherwise will create an error in the E100.
GCONSUMP     | GCONPROD, WCONPROD                                                  | ACTIONX_GCONSUMP   | Prediction | MODEL02    | Yes   | Complete: Gas Sales and Fuel Missing from SUMMARY file.
GRUPNET      | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
GRUPTARG     | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
GRUPTREE     | GCONPROD, GCONINJE, WCONINJE, WELOPEN, WELSSPECS, WGRUPCON          | ACTIONX_GRUPTREE   | Prediction | MODEL02    | Close | Completed. Results consistent at field level,but group SUMMARY vectors and production volumes are missing from SUMMARY file and Production reports (print file) if the groups are not defined upfront.
GSATINJE     | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
GSATPROD     | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
INCLUDE      | COMPSEGS, WELSEGS                                                   | ACTIONX_INCLUDE    | Prediction | WSEGVALV   | Yes   | Complete and the run matches non-include version, as the commercial simulator does not support the INCLUDE keyword in an ACTIONX block.
MULT         |                                                                     | ACTIONX_MULT       | Prediction | MULT       | Yes   | Base MULT model, no ACTIONX. Base MULT run. All wells match except OP-A02 and OP-B02 water production
MULT-        | BOX, ENDBOX, MULTX-, MULTY-, MULTZ-                                 | ACTIONX_MULT-      | Prediction | MULT       | Close | Regression test case. Runs okay and the results are generally close.
MULT+        | BOX, ENDBOX  MULTX, MULTY, MULTZ                                    | ACTIONX_MULT+      | Prediction | MULT       | Close | Regression test case. Runs okay and the results are generally close.
MULTX        | BOX, ENDBOX                                                         | ACTIONX_MULTX      | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTX-       | BOX, ENDBOX                                                         | ACTIONX_MULTX-     | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTY        | BOX, ENDBOX                                                         | ACTIONX_MULTY      | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTY-       | BOX, ENDBOX                                                         | ACTIONX_MULTY-     | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTZ        | BOX, ENDBOX                                                         | ACTIONX_MULTZ      | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
MULTZ-       | BOX, ENDBOX                                                         | ACTIONX_MULTZ-     | Prediction | MULT       | Close | Reference case not for regression testing. Field matches but well results are variable, some identical some much less so.
NEXT         | WELTARG                                                             | ACTIONX_NEXT       | Prediction | MODEL05    | No    | NEXT is an alias for NEXSTEP – see NEXTSTEP for documentation.
NEXTSTEP     | WELTARG                                                             | ACTIONX_NEXTSTEP   | Prediction | MODEL05    | No    | Numerically the fluid rates and the pressures match the commercial simulator, but the time steps defined by NEXTSTEP are not honored.
NOECHO       | -                                                                   | -                  | -          | -          | -     | Not supported in deck.
UDQ          | WCONPROD                                                            | ACTIONX_UDQ        | Prediction | SPE09      | Yes   | Complete and run matches commercial simulator.    
WCONINJE     | WELOPEN                                                             | ACTIONX_WCONINJE   | Prediction | MODEL02    | Yes   | Complete and run matches commercial simulator. 
WCONPROD     | GCONPROD, UDQ, WCONINJE                                             | ACTIONX_WCONPROD   | Prediction | MODEL02    | No    | Complete: Runs but the the results are inconsistent with the the commercial simulator, as the field does not re-open as a gas field.
WEFAC        | -                                                                   | ACTIONX_WEFAC      | Prediction | MODEL02    | Yes   | Complete and run matches commercial simulator.
WELOPEN      | COMPDAT, COMPLUMP                                                   | See ACTIONX_COMPDAT| History    | MODEL02    | Yes   | Same as ACTIONX_COMPDAT.                     
WELPI        | -                                                                   | ACTIONX_WELPI      | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
WELSPECS     | COMPDAT, WCONPROD                                                   | ACTIONX_WELSPECS   | Fails      | WSEGVALV   | Fails | Fails but fix currently in progress. Note for the commercial simulator, one has to move ACT-04 after the well has been defined, in order for it to run.
WELTARG      | -                                                                   | ACTIONX_WELTARG    | Prediction | WSEGVALV   | Yes   | Complete and run matches commercial simulator.
WGRUPCON     | GCONPROD, GCONINJE, WCONINJE, WELOPEN                               | ACTIONX_WGRUPCON   | Prediction | MODEL02    | Close | Complete, matches except WI01 for ACT-03 near the end of the run that results in a discrepancy.
WINJMULT     | -                                                                   | ACTIONX_           | -          | -          | -     | Not supported in deck.
WPIMULT      | -                                                                   | ACTIONX_WPIMULT    | History    | MODEL02    | Yes   | Complete and run matches commercial simulator.
WSEGVALV     | COMPSEGS, WELSEGS                                                   | ACTIONX_WSEGVALV   | Prediction | WSEGVALV   | Yes   | Complete and run matches commercial simulator.
WTEST        | WECON                                                               | ACTIONX_WTEST      | Prediction | SPE09      | No    | Completed: Fixed the WECON issue all the wells now flow, some are perfect matches but there are some that are way off, don’t know why at this stage – may not be an ACTIONX issue.
WTMULT       | -                                                                   | ACTIONX_WTMULT     | Prediction | MODEL05    | Yes   | Complete and run matches commercial simulator.
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the ACTIONX.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   Under comments _Not supported in deck_ means the keyword functionality is currently not supported by OPM Flow.

**Version: 20 December 2021**

## ACTIONX Tests Using the MULT Model

This model is is a simple (9, 9, 2) model with with six oil producers and four water injectors using a Irregular Corner-Point 
grid. This a three phase model using MODEL05 PVT and well VFP data. The model has several groups as shown below:
```
                   FIELD                                                                     
                   |                                                                         
                   |---PLAT-1                                                                
                   |   |                                                                     
                   |   |---PLAT-1A                                                           
                   |   |---PLAT-1B                                                           
                   |                                                                         
                   |---PLAT-2  
```

![](plots/MODEL_MULT.jpg) 

### ACTIONX_BOX Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTX, MULTY and MULTZ in the GRID section set to 0.5 for all grid blocks.
 4) MULTX, MULTY and MULTZ in ACTIONX block ACT-01 set to 2.0 for the top layer. Note that ACT-01 is activated prior to the 
    wells being declared, so that the connection factors are the same as the base case.
 5) MULTX, MULTY and MULTZ in ACTIONX block ACT-02 set to 2.0 for the bottom layer. Note that ACT-02 is activated prior to the 
    wells being declared, so that the connection factors are the same as the base case.

[ACTIONX_BOX ECL Results](plots/ACTIONX_BOX-ECL.md)

### ACTIONX_MULT Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.

[ACTIONX_MULT ECL Results](plots/ACTIONX_MULT-ECL.md)

### ACTIONX_MULT- Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTX-, MULTY- and MULTZ- in the GRID section set to 0.5 for all grid blocks.
 4) MULTX-, MULTY- and MULTZ- in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the 
    wells being declared, so that the connection factors are the same as the base case.

[ACTIONX_MULT- ECL Results](plots/ACTIONX_MULT--ECL.md)

### ACTIONX_MULT+ Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTX in the GRID section set to 0.5 for all grid blocks.
 4) MULTX in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULT+ ECL Results](plots/ACTIONX_MULT+-ECL.md)

### ACTIONX_MULTX- Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTX- in the GRID section set to 0.5 for all grid blocks.
 4) MULTX- in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULTX- ECL Results](plots/ACTIONX_MULTX--ECL.md)

### ACTIONX_MULTX+ Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTX in the GRID section set to 0.5 for all grid blocks.
 4) MULTX in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULTX+ ECL Results](plots/ACTIONX_MULTX+-ECL.md)

### ACTIONX_MULTY- Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTY- in the GRID section set to 0.5 for all grid blocks.
 4) MULTY- in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULTY- ECL Results](plots/ACTIONX_MULTY--ECL.md)

### ACTIONX_MULTY+ Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTY in the GRID section set to 0.5 for all grid blocks.
 4) MULTY in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULTY+ ECL Results](plots/ACTIONX_MULTY+-ECL.md)

### ACTIONX_MULTZ- Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTZ- in the GRID section set to 0.5 for all grid blocks.
 4) MULTZ- in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULTZ- ECL Results](plots/ACTIONX_MULTZ--ECL.md)

### ACTIONX_MULTZ+ Description and Results
 1) The field has an oil rate target of 10,000 m3/d and water injection is via PLAT-1 and PLAT-2 is set VREP 0.90.
 2) Well testing is on for physically shut wells.
 3) MULTZ in the GRID section set to 0.5 for all grid blocks.
 4) MULTZ in ACTIONX block ACT-01 set to 2.0 for all grid blocks. Note that ACT-01 is activated prior to the wells being
    declared, so that the well connection factors are the same as the base case.

[ACTIONX_MULTZ+ ECL Results](plots/ACTIONX_MULTZ+-ECL.md)

---   
## ACTIONX Tests Using the MODEL02 Model   
This case has standard wells, 3 producers and 2 injectors. Well OP03 has modified completions compared to the base case model
and the water oil contact of equilibrium region 2 has been moved to get a stronger well water cut development.
 1) Production wells with preferred phase (OIL, GAS)
    PROD1 - OIL
    PROD2 - OIL
    PROD3 - GAS
 2) Injection wells with preferred phase (GAS, WATER)
    INJ1 - WATER
    INJ2 - GAS
    Note that both injection wells inject both gas and water at various times.
 3) All wells get their PI values adjusted at least once, with wells PROD2, PROD3 and INJ2 getting their PI adjusted an extra
    time and wells PROD1 and INJ1 having their PI adjusted at the same time as the well is opened.
 4) Well PROD3 has modified completions compared to the base case model.
 5) The water oil contact of equilibrium region 2 has been moved to get a stronger well water cut development.

![](plots/MODEL_MODEL02.jpg)  

### ACTIONX_COMPDAT Description and Results
The model has been modified to test the COMPDAT keyword with the ACTIONX keyword, as follows:
 1) The case is based on with the input deck re-factored to match the manual style, and with the well declarations declared at
    the beginning of the run.
 2) ACTIONX COMPLUMP - PROD2 completions are defined in ACT-01, instead of the deck and ACT02 opens completion 2, well is opened
                       in the deck.
 3) ACTIONX COMPLUMP - INJ1 completions are defined in ACT-01 and ACT-04 shuts completion 1 and opens completion 2.
 4) ACTIONX COMPDAT -  PROD1 connections 09-10, INJ1 connections 08-11 defined in ACT-01.
 5) ACTIONX COMPDAT -  PROD2 connections 10-11 defined in ACT-02.
 6) ACTIONX COMPDAT -  PROD3 connections 07-10 connections defined in ACT-03.

[ACTIONX_COMPDAT ECL Results](plots/ACTIONX_COMPDAT-ECL.md) 

### ACTIONX_COMPLUMP Description and Results
The model has been modified to test the COMPLUMP keyword with the ACTIONX keyword, as follows:
 1) The case is based on  with the input deck re-factored to match the manual style, and with the well declarations declared at
    the beginning of the run.
 2) ACTIONX COMPLUMP - PROD2 completions are defined in ACT-01, instead of the deck and ACT02 opens completion 2, well is opened
                       in the deck.
 3) ACTIONX COMPLUMP - INJ1 completions are defined in ACT-01 and ACT-03 shuts completion 1 and opens completion 2.

The results should therefore be identical to the original case, ../model2/0B_WELPI_MODEL2.DATA.

[ACTIONX_COMPLUMP ECL Results](plots/ACTIONX_COMPLUMP-ECL.md) 

### ACTIONX_GCONINJE Description and Results
The model tests the use of the ACTIONX and GCONINJE keywords to control gas and water injection rates.
 1) Production wells with preferred phase (OIL, GAS)
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phase (GAS, WATER)
    GI01 - GAS
    WI01 - WAT
 3) ACTIONX GCONINJE - Re-inject 0.95 of produced gas up 200e3 m3/day
 4) ACTIONX GCONINJE - Voidage replacement with makeup water with maximum 4000 m3/day.

[ACTIONX_GCONINJE ECL Results](plots/ACTIONX_GCONINJE-ECL.md) 

### ACTIONX_GCONPROD Description and Results
The model tests the use of the ACTIONX and GCONPROD keywords to control gas production. This run is a depletion case, with no
pressure support from the producers or injectors.
 1) Production wells with preferred phases.
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phases.
    GI01 - GAS (not active)
    WI01 - WAT (not active)
 3) ACTIONX GCONPROD - Set max gas rate for when GOR >= 150 m3/m3.
 4) ACTIONX GCONPROD - Once GOR >= 200 m3/m3 cut back gas rate by UDA variable.
 5) ACTIONX GCONPROD - Once FOPR <= 500 then convert to gas field.
 6) ACTIONX WCONPROD - Gas field minimum gas rate of 50E3 m3/day then shut-in all wells and exit.

[ACTIONX_GCONPROD ECL Results](plots/ACTIONX_GCONPROD-ECL.md) 

### ACTIONX_GCONSUMP Description and Results
The model tests the use of the ACTIONX and the GCONSUMP keyword to consume fuel at various stages. In addition, the GCONPROD
keyword is employed to control gas production. This run is a prediction depletion case, with no pressure support from the
producers or injectors, and with the field converted to a gas field operation with the ACTIONX ACT-02 block.
 1) Production wells with preferred phases.
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phases.
    GI01 - GAS (not active)
    WI01 - WAT (not active)
 3) ACTIONX GCONSUMP - Set max gas rate for when GOR >= 150 m3/m3 and increase gas consumption.
 4) ACTIONX GCONSUMP - Once GOR >= 200 m3/m3 and OPR <=1500 m3/d then convert to gas field with increased gas consumption.

Although the case runs, we are unable to check the gas sales and fuel gas consumption volumes as the required summary vectors
are currently not written out.

[ACTIONX_GCONSUMP ECL Results](plots/ACTIONX_GCONSUMP-ECL.md) 

### ACTIONX_GRUPTREE Description and Results
The model tests the use of the ACTIONX and GRUPTREE keywords to switch wells to different groups, together with group controls
and controlling gas and water injection rates.
 1) Production wells with preferred phase (OIL, GAS)
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phase (GAS, WATER)
    GI01 - GAS
    WI01 - WAT
 3) ACTIONX WGRUPCON - GI01 and all oil wells on group control with guide rates under the MAIN group.
 4) ACTIONX GRUPTREE - All producers on group control and each producer is assigned to a different group.
 5) ACTIONX GRUPTREE - All injectors on group control under separate groups and voidage replacement with water, set to a
    maximum of 4.0E3 m3/day.

[ACTIONX_GRUPTREE ECL Results](plots/ACTIONX_GRUPTREE-ECL.md) 


### ACTIONX_WCONINJE Description and Results
The model tests the use of the ACTIONX and WCONINJE keywords to control gas and water injection rates.
 1) Production wells with preferred phase (OIL, GAS)
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phase (GAS, WATER)
    GI01 - GAS
    WI01 - WAT
 3) ACTIONX WCONINJE - Inject 100E3 m3/day of gas and no water.
 4) ACTIONX WCONINJE - Inject 150E3 m3/day of gas and 3.0E3 m3/d of water.
 5) ACTIONX WCONINJE - Inject 200E3 m3/day of gas and 3.5E3 m3/d of water.
 6) ACTIONX WCONINJE - Inject 200E3 m3/day of gas and 4.0E3 m3/d of water when FGOR >= 200 m3/m3.

[ACTIONX_WCONINJE ECL Results](plots/ACTIONX_WCONINJE-ECL.md) 

### ACTIONX_WCONPROD Description and Results
The model tests the use of the ACTIONX and WCONPROD keywords to control gas production. This run is a depletion case, with no
pressure support from the producers or injectors.
 1) Production wells with preferred phases.
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phases.
    GI01 - GAS (not active)
    WI01 - WAT (not active)
 3) UDQ              - Variables and calculations to calculate cut back rates
 4) ACTIONX_WCONPROD - OP01 GOR >= 150 m3/m3 cut back gas rate by UDA variable
 5) ACTIONX_WCONPROD - OP02 GOR >= 150 m3/m3 cut back gas rate by UDA variable.
 6) ACTIONX_WCONPROD - OP03 GOR >= 150 m3/m3 cut back gas rate by UDA variable.
 7) ACTIONX_WCONPROD - Once FOPR <= 500 then convert to gas field.
 8) ACTIONX_WCONPROD - Gas field minimum gas rate of 2.0E6 m3/day then shut-in all wells and exit.

[ACTIONX_WCONPROD ECL Results](plots/ACTIONX_WCONPROD-ECL.md) 

### ACTIONX_WEFAC Description and Results
The model tests the use of the ACTIONX and GCONINJE keywords to control gas and water injection rates.
 1) Production wells with preferred phase (OIL, GAS)
    OP01  - OIL
    OP02  - OIL
    OP03  - OIL (Completion 2)
 2) Injection wells with preferred phase (GAS, WATER)
    GI01 - GAS
    WI01 - WAT
 3) ACTIONX  WEFAC - Increase all oil wells uptime from 0.80 to 0.90.
 4) ACTIONX  WEFAC - Increase all oil wells uptime from 0.95 to 0.95.
 5) ACTIONX  WEFAC - Increase all injection wells uptime from 0.80 to 1.00

[ACTIONX_WEFAC ECL Results](plots/ACTIONX_WEFAC-ECL.md) 

### ACTIONX_WELPI Description and Results
The model has been modified to test the WELPI keyword with the ACTIONX keyword, as follows:
 1) The input deck has been re-factored to match the manual style, and with the well declarations declared at the beginning of
    the run.
 2) Instead of the well productivity indices being modified in the deck, they are implemented via the ACTIONX keyword instead
     (ACT-01 to ACT-04). The results should therefore be identical to the original case ../model2/0B_WELPI_MODEL2.DATA.

[ACTIONX_WELPI ECL Results](plots/ACTIONX_WELPI-ECL.md) 

### ACTIONX_WPIMULT Description and Results
The model has been modified to test the WPIMULT keyword with the ACTIONX keyword, as follows:
 1) The input deck has been re-factored to match the manual style, and with the well declarations declared at the beginning of
    the run.
 2) For this case, instead of the well productivity indices being modified in the deck, they are implemented via the ACTIONX
     keyword (ACT-01 to ACT04), using the WPIMULT keyword. The multipliers are derived from the WELPI none productivity case
     divided by the WELPI base case run. Thus, results should therefore be close/identical to the original WELPI case.

[ACTIONX_WPIMULT ECL Results](plots/ACTIONX_WPIMULT-ECL.md) 

---   
## ACTIONX Tests Using the SPE09 Model   
This simulation is based on the data given in Ninth SPE Comparative Solution Project:

   "A Reexamination of Black-Oil Simulation", by J.E. Killough, Journal of Petroleum Technology, 1995

A data set from one of the participants was supplied to the participants of SPE 9. Some of the information in this
data set has been used here as well. The origin of information or data used in this simulation is specified in comments.
This does not include data whose origin - should be obvious to the reader.

Note:  
 1) This version users a Cartesian Regular Grid; however, OPM Flow does not have an OLDTRAN option that is normally used
     with this type of grid. This means that OPM Flow users the NEWTRAN transmissibility calculation instead, that is
     normally used to calculate the transmissibilities Corner Point Geometry grids. Thus, to compare with the commercial
     simulator the NEWTRAN keyword should be added in the GRID section to ensure that the transmissibilities are comparable.
 2) NEWTRAN has been added to this input deck but is not required as OPM Flow only has this option.
 3) This is the corner-point geometry version of SPE09.

![](plots/MODEL_SPE09.jpg) 


### ACTIONX_UDQ Description and Results
The model has been modified to test both the WECON and WTEST keywords as follows:
 1) All wells have there initial rates set at the begining of the run with no additional changes and their BHP datum depth
    defaulted instead of set to 9110 ft.
 2) UDQ              - GOR limits and oil rate cutback value defined by UDQ variables.
 3) ACTIONX WCONPROD - beam back oil rate if GOR >= 2.0 Mscf/stb for all oil wells.
 4) ACTIONX WCONPROD - beam back oil rate if GOR >= 3.0 Mscf/stb for all oil wells.
 5) ACTIONX WCONPROD - beam back oil rate if GOR >= 4.0 mscf/stb for all oil wells.
 6) Minimum economic oil rate set to 25 stb/d and shut-in well.

[ACTIONX_UDQ ECL Results](plots/ACTIONX_UDQ-ECL.md) 

### ACTIONX_WTEST Description and Results
The model has been modified to test both the WECON and WTEST keywords as follows:
 1) All wells have there initial rates set at the begining of the run with no additional changes and their BHP datum depth
    defaulted instead of set to 9110 ft.
 2) Initial WECON - defines well economic limits ORAT=NONE     , WCUT=0.95 and GOR=2.0 Mscf/stb.
 3) ACTIONX WECON - defines well economic limits ORAT=100 stb/d, WCUT=0.95 and GOR=3.0 Mscf/stb.
 4) ACTIONX WECON - defines well economic limits ORAT=100 stb/d, WCUT=0.95 and GOR=4.0 Mscf/stb.
```   
     WELL     TST    TST    NO.    STRT
     NAME     INTV   TYPE   TSTS   TIME
     ----     ----   ----   ----   ----
     WTEST
     'OP0*'   30.0   PE     1      0.0 /
     'OP1*'   30.0   PE     2     15.0 /
     'OP2*'   30.0   PE     3     30.0 /
     /
```   
[ACTIONX_WTEST ECL Results](plots/ACTIONX_WTEST-ECL.md)       

---   
## ACTIONX Tests Using the WSEGVALV Model   
The WSEGVALV model is a test case for modeling an Inflow Control Devise ("ICD") for multi-segment wells using the WSEGVALV
keyword in the SCHEDULE section. In addition the COMPSEGS and WELSEGS keywords are used to define PROD1 the single multi-segment 
well in the model.  The grid is a simple (12, 5, 10) in the (x, y, z) dimensions and has one well (PROD1). All three phases are 
active, but only the oil and water phases are initially present.  

![](plots/MODEL_WSEGVALV.jpg)  
  
### ACTIONX_INCLUDE Description and Results  
This model is based on the WSEGVALV model and has been modified to test the INCLUDE keyword to load the COMPSEGS, WELSEGS and
WSEGVALV keywords within an ACTIONX block. Note that the commercial simulator does not support the INCLUDE keyword in an ACTIONX 
block.

Complete and the run matches non-include version, as the commercial simulator does not support the INCLUDE keyword in an 
ACTIONX block.
  
[ACTIONX_INCLUDE Results](plots/ACTIONX_INCLUDE-PLT.md)

### ACTIONX_WELSPECS Description and Results
This model is based on the WSEGVALV model and has been modified to test the WELSPECS, COMPDAT, WCONPROD keywords with the
ACTIONX keyword.

Run fails, but fix currently in progress. Note for the commercial simulator, one has to move ACT-04 after the well has been defined, in order for it to run.

**No results**

### ACTIONX_WELTARG Description and Results
The model has been modified as follows:
 1) ACTIONX WELTARG - PROD1 set oil rate target.
 2) ACTIONX WELTARG - PROD1 set VFPPROD table and ESP speed (LIFT).
 3) ACTIONX WELTARG - PROD1 set THP and ESP speed (LIFT).
 4) ACTIONX WELTARG - PROD1 set ESP speed (LIFT).

[ACTIONX_WELTARG ECL Results](plots/ACTIONX_WELTARG-ECL.md) 

### ACTIONX_WSEGVALV Description and Results
This model is based on the WSEGVALV model and has been modified to test the COMPSEGS, WELSEGS and WSEGVALV keywords with the
ACTIONX keyword.

[ACTIONX_WSEGVALV ECL Results](plots/ACTIONX_WSEGVALV-ECL.md) 

---  