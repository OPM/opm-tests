-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2018-2022 Equinor
--
-- This file is a GRID property file containing the FAULTS Keyword for MODEL02.
--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
--                                                                                 
--       DEFINE FAULTS IN THE GRID GEOMETRY 
--                                                                                       
--       FAULT       ------------ FAULT TRACE -------------               
--       NAME         I1   I2    J1   J2    K1   K2    FACE         
FAULTS                                                 
         'F1'         2    2     1    4     1    11    I   /
         'F1'         3    3     5    5     1    11    J-  /
         'F1'         3    3     5    8     1    11    I   /
         'F1'         1    3     8    8     1    11    J   /
                                                           
         'F2'         3    3     10   22    1    11    I   /
                                                           
         'F3'         1    2     16   16    1    11    J-  /
         'F3'         2    2     16   22    1    11    I   /
                                                           
         'F4'         9    9     12   22    1    11    I   /
/
ECHO        
--                                                                              
-- *********************************************************************************************************************************
-- END OF FILE                                                                  
-- *********************************************************************************************************************************
