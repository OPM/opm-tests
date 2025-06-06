-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2019 Equinor


WELSPECS
 'B-2H' 'MANI-B1' 15 31 1* 'OIL' 2* 'SHUT' 4* / 
 'D-1H' 'MANI-D1' 22 22 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
-- Well   I    J    K1   K2   Status   SAT   TR            DIAM      KH   S         Df   DIR
   B-2H   17   31   9    9    OPEN     1*    7.430869E+1   0.21600   1*   0.00000   1*   'X' /
   B-2H   19   31   9    9    OPEN     1*    3.359289E+1   0.21600   1*   0.00000   1*   'X' /
   B-2H   20   31   10   10   OPEN     1*    2.136764E+2   0.21600   1*   0.00000   1*   'X' /
   B-2H   21   31   10   10   OPEN     1*    2.060525E+2   0.21600   1*   0.00000   1*   'X' /
   B-2H   22   31   10   10   OPEN     1*    1.812375E+2   0.21600   1*   0.00000   1*   'X' /
   B-2H   22   32   10   10   OPEN     1*    7.296676E+0   0.21600   1*   0.00000   1*   'X' /
   B-2H   24   32   10   10   OPEN     1*    1.799540E+2   0.21600   1*   0.00000   1*   'X' /
   B-2H   25   32   10   10   OPEN     1*    1.811680E+2   0.21600   1*   0.00000   1*   'X' /
   B-2H   29   32   10   10   OPEN     1*    1.487762E+2   0.21600   1*   0.00000   1*   'X' /

   D-1H   22   21   5    5    OPEN     1*    3.596203E+0   0.21600   1*   0.00000   1*   'Z' /
   D-1H   22   21   6    6    OPEN     1*    7.216168E+0   0.21600   1*   0.00000   1*   'Z' /
   D-1H   22   21   7    7    OPEN     1*    6.667925E+0   0.21600   1*   0.00000   1*   'Z' /
   D-1H   22   21   9    9    OPEN     1*    6.922773E+0   0.21600   1*   0.00000   1*   'Z' /
   D-1H   22   22   9    9    OPEN     1*    1.473067E+1   0.21600   1*   0.00000   1*   'Z' /
   D-1H   22   22   10   10   OPEN     1*    2.702168E+1   0.21600   1*   0.00000   1*   'Z' /
   D-1H   23   22   10   10   OPEN     1*    9.121026E+1   0.21600   1*   0.00000   1*   'Z' /
   D-1H   23   22   11   11   OPEN     1*    1.210518E+1   0.21600   1*   0.00000   1*   'Z' /
   D-1H   23   22   12   12   OPEN     1*    4.343951E+0   0.21600   1*   0.00000   1*   'Z' /
   D-1H   23   22   13   13   OPEN     1*    1.271003E+2   0.21600   1*   0.00000   1*   'Z' /
/

INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_B-2H.INC' /
 
INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_D-1H.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'B-2H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   38   / 
 'D-1H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   41   / 
/


DATES
 1 'DEC' 1997 / 
/



DATES
 17 'DEC' 1997 / 
/

WELSPECS
 'D-2H' 'MANI-D2' 14 28 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   D-2H   14   26   9    9    OPEN     1*    6.380813E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   26   9    9    OPEN     1*    4.212213E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   25   9    9    OPEN     1*    2.063738E+2   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   24   9    9    OPEN     1*    1.851860E+2   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   23   9    9    OPEN     1*    1.253336E+2   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   23   9    9    OPEN     1*    7.599494E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   22   9    9    OPEN     1*    1.992140E+2   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   21   9    9    OPEN     1*    1.747446E+2   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   20   9    9    OPEN     1*    2.526597E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   20   9    9    OPEN     1*    1.293348E+2   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   15   9    9    OPEN     1*    2.518936E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   15   9    9    OPEN     1*    9.802322E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   14   9    9    OPEN     1*    1.666239E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   14   9    9    OPEN     1*    9.168499E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   15   13   9    9    OPEN     1*    4.432814E+1   0.21600   1*   0.00000   1*   'Y' /
   D-2H   14   13   9    9    OPEN     1*    1.507610E+1   0.21600   1*   0.00000   1*   'Y' /
/

INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_D-2H.INC' /


WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'D-2H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   42   / 
/
--

DATES
 1 'JAN' 1998 / 
 1 'FEB' 1998 / 
 1 'MAR' 1998 / 
 1 'APR' 1998 / 
 1 'MAY' 1998 / 
 1 'JUN' 1998 / 
 1 'JUL' 1998 / 
/

DATES
 16 'JUL' 1998 / 
/


DATES
 1 'AUG' 1998 / 
 1 'SEP' 1998 / 
 1 'OCT' 1998 / 
 1 'NOV' 1998 / 
 1 'DEC' 1998 / 
 1 'JAN' 1999 / 
 1 'FEB' 1999 / 
 1 'MAR' 1999 / 
/


DATES
 28 'MAR' 1999 / 
/

WELSPECS
 'B-1H' 'MANI-B2' 14 34 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   B-1H   15   38   9    9    OPEN     1*    4.075585E+1   0.21600   1*   0.00000   1*   'Z' /
   B-1H   15   39   9    9    OPEN     1*    2.774147E+0   0.21600   1*   0.00000   1*   'Z' /
   B-1H   15   39   10   10   OPEN     1*    2.314484E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   15   40   10   10   OPEN     1*    3.502884E+1   0.21600   1*   0.00000   1*   'Y' /
   B-1H   16   40   10   10   OPEN     1*    1.833441E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   16   41   10   10   OPEN     1*    1.626491E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   16   41   11   11   OPEN     1*    3.024980E+1   0.21600   1*   0.00000   1*   'Y' /
   B-1H   16   42   11   11   OPEN     1*    1.206089E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   16   43   11   11   OPEN     1*    2.136119E+1   0.21600   1*   0.00000   1*   'Y' /
   B-1H   16   43   12   12   OPEN     1*    1.882535E+1   0.21600   1*   0.00000   1*   'Z' /
   B-1H   16   43   13   13   OPEN     1*    3.007846E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   17   43   13   13   OPEN     1*    1.030777E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   17   44   13   13   OPEN     1*    9.863295E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   17   45   13   13   OPEN     1*    1.015916E+3   0.21600   1*   0.00000   1*   'Y' /
   B-1H   17   46   13   13   OPEN     1*    1.046567E+3   0.21600   1*   0.00000   1*   'Y' /
   B-1H   17   47   13   13   OPEN     1*    5.793805E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   18   47   13   13   OPEN     1*    2.778782E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   18   47   14   14   OPEN     1*    7.626643E+1   0.21600   1*   0.00000   1*   'Y' /
   B-1H   18   48   14   14   OPEN     1*    4.085655E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   18   49   14   14   OPEN     1*    4.731361E+2   0.21600   1*   0.00000   1*   'Y' /
   B-1H   18   50   14   14   OPEN     1*    5.824251E+2   0.21600   1*   0.00000   1*   'Y' /
/


INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_B-1H.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'B-1H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   37   / 
/


DATES
 1 'APR' 1999 / 
 1 'MAY' 1999 / 
 1 'JUN' 1999 / 
/

DATES
 22 'JUN' 1999 / 
/

WELSPECS
 'B-3H' 'MANI-B2' 9 37 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   B-3H   8   41   11   11   OPEN     1*    2.741886E+1   0.21600   1*   0.00000   1*   'Z' /
   B-3H   8   42   11   11   OPEN     1*    1.370524E+1   0.21600   1*   0.00000   1*   'Y' /
   B-3H   8   42   12   12   OPEN     1*    1.698820E+1   0.21600   1*   0.00000   1*   'Z' /
   B-3H   8   42   13   13   OPEN     1*    4.555251E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   8   43   13   13   OPEN     1*    8.337489E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   43   13   13   OPEN     1*    2.684324E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   44   13   13   OPEN     1*    9.790088E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   45   13   13   OPEN     1*    9.906278E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   46   13   13   OPEN     1*    9.953857E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   47   13   13   OPEN     1*    9.561068E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   48   13   13   OPEN     1*    9.425532E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   49   13   13   OPEN     1*    9.257671E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   50   13   13   OPEN     1*    8.725549E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   51   13   13   OPEN     1*    2.763078E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   51   14   14   OPEN     1*    1.055753E+2   0.21600   1*   0.00000   1*   'Y' /
   B-3H   9   52   14   14   OPEN     1*    9.613356E+1   0.21600   1*   0.00000   1*   'Y' /
/


INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_B-3H.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'B-3H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   39   / 
/


DATES
 1 'JUL' 1999 / 
 1 'AUG' 1999 / 
 1 'SEP' 1999 / 
/


DATES
 3 'SEP' 1999 / 
/

WELSPECS
 'E-1H' 'MANI-E' 18 68 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   E-1H   17   66   5    5    OPEN     1*    2.882393E+0   0.21600   1*   0.00000   1*   'Y' /
   E-1H   17   65   5    5    OPEN     1*    7.826189E+0   0.21600   1*   0.00000   1*   'Z' /
   E-1H   17   65   6    6    OPEN     1*    1.502791E+1   0.21600   1*   0.00000   1*   'Z' /
   E-1H   17   65   7    7    OPEN     1*    2.142914E+0   0.21600   1*   0.00000   1*   'Z' /
   E-1H   17   64   7    7    OPEN     1*    4.666971E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   17   63   7    7    OPEN     1*    4.272085E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   63   7    7    OPEN     1*    3.518297E+0   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   62   7    7    OPEN     1*    4.709630E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   61   7    7    OPEN     1*    2.648178E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   61   8    8    OPEN     1*    1.963614E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   60   8    8    OPEN     1*    4.688129E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   59   8    8    OPEN     1*    7.213714E+0   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   59   7    7    OPEN     1*    3.907433E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   58   7    7    OPEN     1*    4.650114E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   57   7    7    OPEN     1*    4.254116E+1   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   57   8    8    OPEN     1*    5.340497E+0   0.21600   1*   0.00000   1*   'Y' /
   E-1H   18   56   8    8    OPEN     1*    2.355450E+1   0.21600   1*   0.00000   1*   'Z' /
/


INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_E-1H.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'E-1H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   45   / 
/


DATES
 1 'OCT' 1999 / 
 1 'NOV' 1999 / 
/

DATES
 13 'NOV' 1999 / 
/

WELSPECS
 'E-2H' 'MANI-E' 13 67 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   E-2H   12   64   8    8    OPEN     1*    9.034485E+0   0.21600   1*   0.00000   1*   'Y' /
   E-2H   12   63   8    8    OPEN     1*    3.014831E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   12   62   8    8    OPEN     1*    2.991645E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   12   61   8    8    OPEN     1*    1.677298E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   11   61   8    8    OPEN     1*    1.287780E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   11   60   8    8    OPEN     1*    2.962048E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   11   59   8    8    OPEN     1*    2.976102E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   11   58   8    8    OPEN     1*    3.031884E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   11   57   8    8    OPEN     1*    3.094266E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   11   56   8    8    OPEN     1*    2.214219E+1   0.21600   1*   0.00000   1*   'Y' /
   E-2H   10   56   8    8    OPEN     1*    7.466641E+0   0.21600   1*   0.00000   1*   'Y' /
   E-2H   10   56   9    9    OPEN     1*    2.506884E+0   0.21600   1*   0.00000   1*   'Z' /
   E-2H   10   55   9    9    OPEN     1*    1.612639E+2   0.21600   1*   0.00000   1*   'Y' /
   E-2H   10   54   9    9    OPEN     1*    7.585763E+1   0.21600   1*   0.00000   1*   'Y' /
/


INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_E-2H.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'E-2H'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   45   / 
/


DATES
 1 'DEC' 1999 / 
 1 'JAN' 2000 / 
 1 'FEB' 2000 / 
 1 'MAR' 2000 / 
 1 'APR' 2000 / 
 1 'MAY' 2000 / 
/


DATES
 26 'MAY' 2000 / 
/

WELSPECS
 'E-4AH' 'MANI-E' 38 98 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   E-4AH   38   98   2    2    OPEN     1*    2.210672E+0   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   38   97   2    2    OPEN     1*    9.693909E+0   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   37   97   2    2    OPEN     1*    9.507197E-1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   37   96   2    2    OPEN     1*    1.018636E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   37   95   2    2    OPEN     1*    1.161233E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   36   95   2    2    OPEN     1*    1.194418E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   36   94   2    2    OPEN     1*    9.321146E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   36   93   2    2    OPEN     1*    9.002065E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   36   92   2    2    OPEN     1*    8.488954E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   36   91   2    2    OPEN     1*    8.232224E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   36   90   2    2    OPEN     1*    4.212835E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   37   90   2    2    OPEN     1*    3.833307E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   37   89   2    2    OPEN     1*    8.262590E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   37   88   2    2    OPEN     1*    2.321808E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   38   88   2    2    OPEN     1*    6.598572E+1   0.21600   1*   0.00000   1*   'Y' /
   E-4AH   38   87   2    2    OPEN     1*    2.928361E+1   0.21600   1*   0.00000   1*   'Y' /
/

INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_E-4AH.INC' /


WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'E-4AH'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   45   / 
/


DATES
 1 'JUN' 2000 / 
 1 'JUL' 2000 / 
 1 'AUG' 2000 / 
/

DATES
 20 'AUG' 2000 / 
/

WELSPECS
 'D-3AH' 'MANI-D1' 19 54 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   D-3AH   17   50   14   14   OPEN     1*    2.109478E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   17   49   14   14   OPEN     1*    3.489529E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   16   49   14   14   OPEN     1*    1.990774E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   16   48   14   14   OPEN     1*    4.018317E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   15   48   14   14   OPEN     1*    4.582188E+1   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   15   47   14   14   OPEN     1*    3.940627E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   15   46   14   14   OPEN     1*    6.934881E+1   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   14   46   14   14   OPEN     1*    3.003054E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   14   45   14   14   OPEN     1*    1.778799E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   13   45   14   14   OPEN     1*    1.873824E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   13   44   14   14   OPEN     1*    2.972216E+2   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   12   44   14   14   OPEN     1*    7.635771E+1   0.21600   1*   0.00000   1*   'Y' /
   D-3AH   12   43   14   14   OPEN     1*    1.303090E+2   0.21600   1*   0.00000   1*   'Y' /
/

INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_D-3AH.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'D-3AH'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   43   / 
/


DATES
 1 'SEP' 2000 / 
 1 'OCT' 2000 / 
 1 'NOV' 2000 / 
 1 'DEC' 2000 / 
/

WELSPECS
 'E-3AH' 'MANI-E' 7 64 1* 'OIL' 2* 'SHUT' 4* / 
/

COMPDAT
   E-3AH   7    65   2    2    OPEN     1*    2.702892E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   7    66   2    2    OPEN     1*    1.090131E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   8    66   2    2    OPEN     1*    1.026949E+2   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   8    67   2    2    OPEN     1*    6.682145E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   9    67   2    2    OPEN     1*    5.359284E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   9    68   2    2    OPEN     1*    1.281006E+2   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   9    69   2    2    OPEN     1*    1.461858E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   10   69   2    2    OPEN     1*    3.334921E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   10   69   1    1    OPEN     1*    1.927118E+2   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   10   70   1    1    OPEN     1*    1.647879E+2   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   11   70   2    2    OPEN     1*    1.822388E+1   0.21600   1*   0.00000   1*   'Y' /
   E-3AH   11   71   1    1    OPEN     1*    1.176789E+2   0.21600   1*   0.00000   1*   'Y' /
/


INCLUDE
 './INCLUDE/MSW/WELSEGS_COMPSEGS_E-3AH.INC' /



WCONPROD
-- WellN  Status  CtrlMode  Qo    Qw     Qg     Qliq    Qresv  bhp   thp  VfpTab 
 'E-3AH'  'OPEN'  'GRUP'  5000.0    1*  4.0E6    8000.0    1*    60.0  50.0   45   / 
/


DATES
 1 'JAN' 2001 /
 1 'FEB' 2001 / 
 1 'MAR' 2001 / 
 1 'APR' 2001 / 
 1 'MAY' 2001 / 
 1 'JUN' 2001 / 
 1 'JUL' 2001 / 
 1 'AUG' 2001 / 
 1 'SEP' 2001 / 
 1 'OCT' 2001 / 
/

WECON
 'B-*'   1* 0.1E6  3*  'WELL' /
 'D-*'   1* 0.1E6  3*  'WELL' /
 'E-*'   1* 0.1E6  3*  'WELL' /
/


DATES
 1 'NOV' 2001 / 
 1 'DEC' 2001 / 
 1 'JAN' 2002 /
/



DATES  
 1 'FEB' 2002 / 
 1 'MAR' 2002 / 
 1 'MAY' 2002 / 
 1 'JUN' 2002 / 
 1 'JUL' 2002 / 
 1 'AUG' 2002 / 
 1 'SEP' 2002 / 
/

DATES
 1 'OCT'  2002 / 
 1 'NOV'  2002 / 
 1 'DEC'  2002 / 
 1 'JAN'  2003 / 
 1 'FEB'  2003 / 
 1 'MAR'  2003 / 
 1 'APR'  2003 / 
 1 'MAY'  2003 / 
 1 'JUN'  2003 / 
 1 'JUL'  2003 / 
 1 'AUG'  2003 / 
 1 'SEP'  2003 / 
 1 'OCT'  2003 / 
 1 'NOV'  2003 / 
 1 'DEC'  2003 / 
 1 'JAN'  2004 / 
 1 'FEB'  2004 / 
 1 'MAR'  2004 / 
 1 'APR'  2004 / 
 1 'MAY'  2004 / 
 1 'JUN'  2004 / 
 1 'JUL'  2004 / 
 1 'AUG'  2004 / 
 1 'SEP'  2004 / 
 1 'OCT'  2004 / 
 1 'NOV'  2004 / 
 1 'DEC'  2004 / 
 1 'JAN'  2005 / 
 1 'FEB'  2005 / 
 1 'MAR'  2005 / 
 1 'APR'  2005 / 
 1 'MAY'  2005 / 
 1 'JUN'  2005 / 
 1 'JUL'  2005 / 
 1 'AUG'  2005 / 
 1 'SEP'  2005 / 
 1 'OCT'  2005 / 
 1 'NOV'  2005 / 
 1 'DEC'  2005 / 
 1 'JAN'  2006 / 
 1 'FEB'  2006 / 
 1 'MAR'  2006 / 
 1 'APR'  2006 / 
 1 'MAY'  2006 / 
 1 'JUN'  2006 / 
 1 'JUL'  2006 / 
 1 'AUG'  2006 / 
 1 'SEP'  2006 / 
 1 'OCT'  2006 / 
 1 'NOV'  2006 / 
 1 'DEC'  2006 / 
 
 1 'JAN'  2007 /
 1 'JUL'  2007 /
 1 'JAN'  2008 /
 1 'JUL'  2008 /
 1 'JAN'  2009 /
 1 'JUL'  2009 /
 1 'JAN'  2010 /
 1 'JAN'  2011 /
 1 'JAN'  2012 /
 1 'JAN'  2013 /
 1 'JAN'  2014 /
 1 'JAN'  2015 /
 1 'JAN'  2016 /
 1 'JAN'  2017 /
 1 'JAN'  2018 /
 1 'JAN'  2019 /
 1 'JAN'  2020 /
/

END
