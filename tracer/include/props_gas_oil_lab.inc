-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 UiB and NORCE

-- Gas and oil properties of the 1D two-phase gas tracer tests (LAB units)

-- Gas and oil with immobile oil (kro = 0 at Sg = 0.5): only the gas moves, in a column with Sg = 0.5
-- Wet gas table with a negligible vaporized oil (Rv = 1e-8), as the flow diffusion needs a wet gas PVT model
PVTG
  1    1.0E-8 1.0001 0.02
     0.0    1.0001 0.02 /
  300  1.0E-8 1.0    0.02
     0.0    1.0    0.02 /
/

PVDO
  1   1.0001 2.0
  300 1.0    2.0 /

SGOF
  0.0 0.0 1.0 0.0
  0.5 0.5 0.0 0.0
  1.0 1.0 0.0 0.0 /

-- Specify constant rock compressibility.
ROCK
  1.0 4.35E-11 /

DENSITY
  0.7 1.02 0.0018475
/
