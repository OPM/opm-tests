-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2015 Statoil
-- Copyright (C) 2015 SINTEF ICT, Applied Mathematics

SKPRWAT
   2   /    -- table number
   0.0     200.0   400.0   / -- throughput values
   0.0     30.0   50.0    100.0  / -- velocity values
  -- the rest will be the skin pressure values,
  -- each row corresponds to one sample points in the throughput direction
   0.     2    4    8 /
   0.     20   40   80 /
   0.     50   100  200 /
/
