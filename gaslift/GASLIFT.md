# GASLIFT Test Documentation

Case Name | Case Desciption                                               | Base Model | Results<br />Match | Comments |
--------- | -----------------------------                                 | ---------- | ------- | ------------------------------------- |
GASLIFT-01| Two-Phase, Cartesian regular, with variable GLIFT             | GASLIFT    | Fails  | Two-Phase not supported.
GASLIFT-02| Two-Phase, Corner-Point, with variable GLIFT                  | GASLIFT    | Fails  | Two-Phase not supported.
GASLIFT-03| Three-Phase, Corner-Point, variable GLIFT, MODEL05 PVT        | GASLIFT    | No     | Three-Phase. Gas lift not working when only GOR in VFP table (no ALQ)?
GASLIFT-04| Three-Phase, Corner-Point, variable GLIFT, MODEL05 PVT/VFP    | GASLIFT    | No     | Completely different, various gas lift optimization warnings. 
GASLIFT-05| Base                                                          | MODEL05    | No     | Completely different, wells shut-in that should be flowing, convergence issues.
GASLIFT-06| Base and group ORAT=6000                                      | MODEL05    | No     | Completely different, all wells shut-in except C-2H.  
GASLIFT-07| Base and group LIFTOPT(OPTLIFT)=NO                            | MODEL05    | No     | Completely different, convergence issues, Should be similar to GASLIFT-05.
GASLIFT-08| Base and group ORAT=6000, Max ALQ from VFP                    | MODEL05    | No     | Completely different, convergence issues, no gas lift on several wells.  
GASLIFT-09| Base and group ORAT=6000, Max ALQ from VFP, TSTEP=15          | MODEL05    | No     | Completely different, convergence issues, no gas lift on several wells.
GASLIFT-10| Base and group ORAT=6000, Max ALQ from VFP, TSTEP=15, WTEST   | MODEL05    | No     | Completely different, WTEST works may be use the same logic for wells that have convergence issues.
GASLIFT-11| Base and group ORAT=6000, Max ALQ from VFP, GLIFTLIM(MXLIFT)  | MODEL05    | No     | Completely different, convergence issues, no gas lift on several wells. 
GASLIFT-12| MSW Base for Multi-Segment Wells                              | MODEL05    | No     | Completely different, convergence issues, no gas lift any well. 
GASLIFT-13| MSW and BRANPROP and NODEPROP                                 | MODEL05    | No     | Completely different, runs with Robust bhp(thp) not solved precisely for well C-2H series of messages
GASLIFT-14| MSW and BRANPROP and NODEPROP(GASLIFT)=YES                    | MODEL05    | Fails  | Fails with Program threw an exception: No ALQ value registered for well: F-1H.
GASLIFT-15| MSW and BRANPROP and NODEPROP(GASLIFT)=YES, RESTART run       | MODEL05    | Fails  | Fails because GASLIFT-14 fails.
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, see the GASLIFT.odp document for comparisons.
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   All cases run with one day time steps for comparison purposes.

**Version: 26 November 2021**
