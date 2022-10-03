# SPE02 - Radial and Spider Grid Test Documentation

Case Name       | Run Type   | Description                                                              | Results<br />Match | Comments |
--------------- | ---------  | ------------------------------------------------------------------------ | ------- | ------------------------------------- |
SPE02-RADIAL-01 | Prediction | 1. Radial grid.<br />2. Grid structure define explicitly via: INRAD, DRV, DTHETAV, DZV and TOPS.   <br />3. All grid property data defined via the EQUALS keyword, except PERMZ that users COPY and MULTIPLY keywords.       | N/A     | Complete
SPE02-RADIAL-02 | Prediction | 1. Radial grid.<br />2. Grid structure define explicitly via: INRAD, OUTRAD, DTHETAV, DZV and TOPS.<br />3. PERMR and PORO grid property data defined via the EQUALS keyword, PERMTHT and PERMZ by COPY and MULTPLY keywords.| N/A     | Stops with errors.
SPE02-RADIAL-03 | Prediction | 1. Radial grid.<br />2. Grid structure define explicitly via: INRAD, DRV, DTHETAV, DZV and TOPS.   <br />3. All grid property data defined explicitly.                                                                       | N/A     | Complete.
SPE02-RADIAL-04 | Prediction | 1. Radial grid.<br />2. Grid structure define explicitly via: INRAD, DR (top layer only, other layers defaulted), DTHETAV, DZV and TOPS.<br />3. PERMR and PORO grid property data defined via the EQUALS keyword, PERMTHT and PERMZ by COPY and MULTIPLY keywords.| N/A     | Stops with errors.
SPE02-RADIAL-05 | Prediction | 1. Radial grid.<br />2. Grid structure define explicitly via: INRAD, DRV, DTHETA (changed from DTHETAV), DZV and TOPS.<br />3. PERMR and PORO grid property data defined via the EQUALS keyword, PERMTHT and PERMZ by COPY and MULTIPLY keywords| N/A     | Stops with errors.
SPE02-SPIDER-01 | Prediction | 1. Spider grid.<br />2. Grid structure define explicitly via: INRAD, DRV, DTHETAV, DZV and TOPS.   <br />3. All grid property data defined via the EQUALS keyword, except PERMZ that users COPY and MULTIPLY keywords.       | N/A     | Stops with solver failed to converge after cutting timestep 10 times.
SPE02-SPIDER-02 | Prediction | 1. Spider grid.<br />2. Grid structure define explicitly via: INRAD, OUTRAD, DTHETAV, DZV and TOPS.<br />3. PERMR and PORO grid property data defined via the EQUALS keyword, PERMTHT and PERMZ by COPY and MULTPLY keywords.| N/A     | Stops with errors.
SPE02-SPIDER-03 | Prediction | 1. Spider grid.<br />2. Grid structure define explicitly via: INRAD, DRV, DTHETAV, DZV and TOPS.   <br />3. All grid property data defined explicitly.                                                                       | N/A     | Stops with solver failed to converge after cutting timestep 10 times.
SPE02-SPIDER-04 | Prediction | 1. Spider grid.<br />2. Grid structure define explicitly via: INRAD, DR (top layer only, other layers defaulted), DTHETAV, DZV and TOPS.<br />3. PERMR and PORO grid property data defined via the EQUALS keyword, PERMTHT and PERMZ by COPY and MULTIPLY keywords.| N/A     | Stops with errors.
SPE02-SPIDER-05 | Prediction | 1. Spider grid.<br />2. Grid structure define explicitly via: INRAD, DRV, DTHETA (changed from DTHETAV), DZV and TOPS.<br />3. PERMR and PORO grid property data defined via the EQUALS keyword, PERMTHT and PERMZ by COPY and MULTIPLY keywords| N/A     | Stops with errors.
           
**Notes:** 

1.   _Results Match_ column indicate if the OPM Flow results match the commercial simulator, N/A means not applicable. 
2.   Under comments, _Complete_ means that the test case is completed, it does not mean that the runs are necessarily comparable to the commercial simulator.
3.   Under comments _Not supported in deck_ means the keyword functionality is currently not supported by OPM Flow.

**Version: 20 April 2022**
     