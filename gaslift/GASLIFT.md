# GASLIFT Test Documentation

Case Name | Case Desciption                                            | Base Model | Results<br />Match | Comments |
--------- | -----------------------------                              | ---------- | ------- | ------------------------------------- |
GASLIFT-01| Two-Phase, Cartesian regular, with variable GLIFT          | GASLIFT    | Fails  | Two-Phase not supported.
GASLIFT-02| Two-Phase, Corner-Point, with variable GLIFT               | GASLIFT    | Fails  | Two-Phase not supported.
GASLIFT-03| Three-Phase, Corner-Point, variable GLIFT, MODEL05 PVT     | GASLIFT    | No     | Three-Phase. Gas lift not working when only GOR in VFP table (no ALQ)?
GASLIFT-04| Three-Phase, Corner-Point, variable GLIFT, MODEL05 PVT/VFP | GASLIFT    |        | Waiting on E100 results.
GASLIFT-05| Base Run                                                   | MODEL05    |        | Waiting on E100 results.
GASLIFT-06| Base Run with group ORAT=6000                              | MODEL05    |        | Waiting on E100 results.      
GASLIFT-07| Base Run with group  LIFTOPT(OPTLIFT)=NO                   | MODEL05    | No     | Completely different, convergence issues. Should be similar to GASLIFT-05.
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
          | -                                                          | MODEL05    | -      | 
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the GASLIFT.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.

**Version: 23 November 2021**
