-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2026 UiB and NORCE

-- Density, rock compressibility, dry gas and live oil PVT of the 1D gas tracer tests with dissolved gas (FIELD units)

ROCK
  14.7 3.0E-6 /

DENSITY
  56.0 64.79 0.0702 /

PVDG
  14.7   166.666 0.008
  264.7  12.093  0.0096
  514.7  6.274   0.0112
  1014.7 3.197   0.014
  2014.7 1.614   0.0189
  2514.7 1.294   0.0208
  3014.7 1.080   0.0228
  4014.7 0.811   0.0268
  5014.7 0.649   0.0309
  9014.7 0.386   0.047 /

PVTO
  0.001 14.7   1.0620 1.04 /
  0.0905 264.7 1.15   0.975 /
  0.18  514.7  1.207  0.91 /
  0.371 1014.7 1.295  0.83 /
  0.636 2014.7 1.435  0.695 /
  0.775 2514.7 1.5    0.641 /
  0.93  3014.7 1.565  0.594 /
  1.270 4014.7 1.695  0.51
      9014.7 1.579  0.74 /
  1.618 5014.7 1.827  0.449
      9014.7 1.671  0.64 /
/
