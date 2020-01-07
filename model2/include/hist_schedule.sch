-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2018 Equinor

-- This file is one of the include files for model2

-- start date:  01  'NOV' 2018 /
 

GRUPTREE
   'INJE'     'FIELD'  /
   'PROD'     'FIELD'  /
/


WELSPECS
 'PROD1'  'PROD'   6    3   1*      'OIL'  0.00      'STD'     'SHUT'      'YES'    0      'SEG' /
 'INJ1'   'INJE'   2    13   1*    'WATER'  0.00      'STD'     'SHUT'      'YES'    0      'SEG' /
/

COMPDAT
 'PROD1'   6   3   7   7      'OPEN'   0      6.145  0.216  1*   0.00	 0.0 'Z' 1* /
 'PROD1'   6   3   8   8      'OPEN'   0      9.703  0.216  1*   0.00	 0.0 'Z' 1* /
 'PROD1'   6   3   9   9      'OPEN'   0    184.170  0.216  1*   0.00	 0.0 'Z' 1* /
 'PROD1'   6   3   10  10     'OPEN'   0     24.709  0.216  1*   0.00	 0.0 'Z' 1* /

 'INJ1'    2   13   1  1      'OPEN'   0    138.457  0.216  1*   0.00	 0.0 'Z' 1* /
 'INJ1'    2   13   2  2      'OPEN'   0      0.760  0.216  1*   0.00	 0.0 'Z' 1* /
 'INJ1'    2   13   3  3      'OPEN'   0     53.129  0.216  1*   0.00	 0.0 'Z' 1* /
/

WCONHIST
  'PROD1'  'OPEN'      'RESV'      0.000      0.000      0.000  5* /
  'INJ1'   'OPEN'      'RESV'      0.000      0.000      0.000  5* /
/


WRFTPLT
   'PROD1'       'YES'        'NO'        'NO' /
   'INJ1'        'YES'        'NO'        'NO' /
/


DATES  -- 1
 2 'NOV' 2018 /
/
 
WCONHIST
  PROD1  OPEN  RESV   2920.9    0.3   316286	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   116286	1*	0	/
/

DATES  -- 2
 1 'DEC' 2018 /
/

WELSPECS
 'PROD2'  'PROD'  10   4	1*	'OIL'  0.00	 'STD'     'SHUT'      'YES'	0      'SEG' /
/

COMPDAT
 'PROD2'   10   4   7   7      'OPEN'	0    20.473  0.216  1*   0.00	 0.0 'Z' 1* /
 'PROD2'   10   4   8   8      'OPEN'	0    17.619  0.216  1*   0.00	 0.0 'Z' 1* /
 'PROD2'   10   4   9   9      'OPEN'	0    80.721  0.216  1*   0.00	 0.0 'Z' 1* /
 'PROD2'   10   4   10  10     'OPEN'	0    11.755  0.216  1*   0.00	 0.0 'Z' 1* /
/

WCONHIST
  'PROD2'  'OPEN'      'RESV'      0.000      0.000      0.000  5* /
/


WRFTPLT
   'PROD2'       'YES'        'NO'        'NO' /
/

DATES  -- 3
 2 'DEC' 2018 /
/

WCONHIST
  'PROD2'  'SHUT'      'RESV'      0.000      0.000      0.000  5* /
/


DATES  -- 4
 15 'DEC' 2018 /
/


WCONHIST
  PROD1  OPEN  RESV   2818.4    0.3   304523	5	1*	1*	1* /
  PROD2  OPEN  RESV   2141.6    1.1   230232	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   334756	1*	0	/
/

DATES  -- 5
 1 'JAN' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2592.2    0.3   281458	5	1*	1*	1* /
  PROD2  OPEN  RESV   2456.6    1.4   268627	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   350085	1*	0	/
/

DATES  -- 6
 1 'FEB' 2019 /
/

WELSPECS
 'PROD3'  'PROD'  6 19   1*      'OIL'  0.00      'STD'     'SHUT'      'YES'    0      'SEG' /
/


COMPDAT
 'PROD3'   6 19   7   7      'OPEN'   0     21.629  0.216  1*	0.00	0.0 'Z' 1* /
 'PROD3'   6 19   8   8      'OPEN'   0     12.441  0.216  1*	0.00	0.0 'Z' 1* /
 'PROD3'   6 19   9   9      'OPEN'   0    178.588  0.216  1*	0.00	0.0 'Z' 1* /
 'PROD3'   6 19   10  10     'OPEN'   0     11.149  0.216  1*	0.00	0.0 'Z' 1* /
/


WCONHIST
  'PROD3'  'OPEN'      'RESV'      0.000      0.000      0.000  5* /
/


WRFTPLT
   'PROD3'       'YES'        'NO'        'NO' /
/

DATES  -- 7
 2 'FEB' 2019 /
/

WCONHIST
  'PROD3'  'SHUT'      'RESV'      0.000      0.000      0.000  5* /
/

DATES  -- 8
 10 'FEB' 2019 /
/


WCONHIST
  PROD1  OPEN  RESV   2954.7    0.4   324214	5	1*	1*	1* /
  PROD2  OPEN  RESV   2154.5    1.3   241065	5	1*	1*	1* /
  PROD3  OPEN  RESV   1648.9    0.1   183164	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   548443	1*	0	/
/

DATES  -- 9
 1 'MAR' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2726.6    0.4   303588	5	1*	1*	1* /
  PROD2  OPEN  RESV   2383.2    1.4   266661	5	1*	1*	1* /
  PROD3  OPEN  RESV   1544.7    0.1   171587	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   541836	1*	0	/
/

DATES  -- 10
 1 'APR' 2019 /
/

WELSPECS
 'INJ2'  'INJE'     12 20   1*    'WATER'  0.00      'STD'     'SHUT'      'YES'    0      'SEG' /
/

COMPDAT
 'INJ2'   12 20   9   9     'OPEN'   0    139.042  0.216  1*   0.00    0.0 'Z' 1* /
 'INJ2'   12 20  10  10     'OPEN'   0     18.620  0.216  1*   0.00    0.0 'Z' 1* /
 'INJ2'   12 20  11  11     'OPEN'   0     77.048  0.216  1*   0.00    0.0 'Z' 1* /
/

WCONHIST
  'INJ2'  'OPEN'      'RESV'      0.000      0.000      0.000  5* /
/


WRFTPLT
  'INJ2'     'YES'        'NO'        'NO' /
/

DATES  -- 11
 2 'APR' 2019 /
/
 
WCONHIST
  'INJ2'  'SHUT'      'RESV'      0.000      0.000      0.000  5* /
/

DATES  -- 12
 12 'APR' 2019 /
/


WCONHIST
  PROD1  OPEN  RESV   2934.7    0.4   335327	5	1*	1*	1* /
  PROD2  OPEN  RESV   2368.1    1.5   275255	5	1*	1*	1* /
  PROD3  OPEN  RESV   1885.1    0.1   219169	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   629751	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 13
 1 'MAY' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2890.5    0.4   326099	5	1*	1*	1* /
  PROD2  OPEN  RESV   2412.4    1.5   286896	5	1*	1*	1* /
  PROD3  OPEN  RESV   1837.0    0.1   219586	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   632581	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 14
 1 'JUN' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2716.3    0.4   311588	5	1*	1*	1* /
  PROD2  OPEN  RESV   2278.3    1.5   274808	5	1*	1*	1* /
  PROD3  OPEN  RESV   1891.9    0.1   228761	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   615157	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 15
 1 'JLY' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2611.6    0.4   304379	5	1*	1*	1* /
  PROD2  OPEN  RESV   2005.5    1.3   241897	5	1*	1*	1* /
  PROD3  OPEN  RESV   1852.5    0.1   231799	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   578075	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 16
 1 'AUG' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2627.6    0.4   317393	5	1*	1*	1* /
  PROD2  OPEN  RESV   2190.1    1.4   270902	5	1*	1*	1* /
  PROD3  OPEN  RESV   1805.6    0.1   228744	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   617039	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 17
 1 'SEP' 2019 /
/

WELOPEN
 'INJ1' 'SHUT' 0 0 0 2* /
/

COMPDAT
 'INJ1'   2   13    8   8     'OPEN'   0    20.547  0.216  1*	0.00	0.0 'Z' 1* /
 'INJ1'   2   13    9   9     'OPEN'   0    45.709  0.216  1*	0.00	0.0 'Z' 1* /
 'INJ1'   2   13   10  10     'OPEN'   0    25.267  0.216  1*	0.00	0.0 'Z' 1* /
 'INJ1'   2   13   11  11     'OPEN'   0    33.982  0.216  1*	0.00	0.0 'Z' 1* /
/

WCONHIST
  PROD1  OPEN  RESV   2797.7    0.4   340138	5	1*	1*	1* /
  PROD2  OPEN  RESV   2375.3    1.5   293396	5	1*	1*	1* /
  PROD3  OPEN  RESV   1634.3    0.1   210611	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   644145	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 18
 1 'OCT' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2635.2    0.4   323187	5	1*	1*	1* /
  PROD2  OPEN  RESV   2107.4    1.4   265991	5	1*	1*	1* /
  PROD3  OPEN  RESV   1660.6    0.1   221528	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   610706	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 19
 1 'NOV' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2928.6    0.4   368314	5	1*	1*	1* /
  PROD2  OPEN  RESV   2091.8    1.4   260616	5	1*	1*	1* /
  PROD3  OPEN  RESV   1921.0    0.1   263232	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   692162	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 20
 1 'DEC' 2019 /
/

WCONHIST
  PROD1  OPEN  RESV   2734.1    0.4   355985	5	1*	1*	1* /
  PROD2  OPEN  RESV   2145.2    1.4   270217	5	1*	1*	1* /
  PROD3  OPEN  RESV   1659.5    0.1   241454	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN   667655	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 21
 1 'JAN' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2564.1    0.4   345857	5	1*	1*	1* /
  PROD2  OPEN  RESV   2238.8    1.5   290096	5	1*	1*	1* /
  PROD3  OPEN  RESV   1702.3    0.1   265675	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN   701627	1*	0	/
/

DATES  -- 22
 1 'FEB' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2721.1    0.4   387240	5	1*	1*	1* /
  PROD2  OPEN  RESV   2287.4    1.5   297922	5	1*	1*	1* /
  PROD3  OPEN  RESV   1563.2    0.1   248259	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN   733421	1*	0	/
/

DATES  -- 23
 1 'MAR' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2809.4    0.4   430794	5	1*	1*	1* /
  PROD2  OPEN  RESV   2371.1    1.6   320048	5	1*	1*	1* /
  PROD3  OPEN  RESV   1581.1    0.1   251108	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN   801950	1*	0	/
/

DATES  -- 24
 1 'APR' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2967.9    0.5   482927	5	1*	1*	1* /
  PROD2  OPEN  RESV   2495.7    1.7   347489	5	1*	1*	1* /
  PROD3  OPEN  RESV   1817.7    0.1   302369	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN   932786	1*	0	/
/

DATES  -- 25
 1 'MAY' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2610.0    0.4   459698	5	1*	1*	1* /
  PROD2  OPEN  RESV   2165.6    1.5   314610	5	1*	1*	1* /
  PROD3  OPEN  RESV   1840.8    0.2   326039	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN   900347	1*	0	/
/

DATES  -- 26
 1 'JUN' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2622.8    0.5   498021	5	1*	1*	1* /
  PROD2  OPEN  RESV   2438.3    1.7   364209	5	1*	1*	1* /
  PROD3  OPEN  RESV   1861.1    0.2   360941	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  1023171	1*	0	/
/

DATES  -- 27
 1 'JLY' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2967.8    0.5   598515	5	1*	1*	1* /
  PROD2  OPEN  RESV   2491.3    1.7   382260	5	1*	1*	1* /
  PROD3  OPEN  RESV   1811.9    0.3   375071	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN  1155847	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 28
 1 'AUG' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2864.7    0.5   625656	5	1*	1*	1* /
  PROD2  OPEN  RESV   2274.9    1.6   351369	5	1*	1*	1* /
  PROD3  OPEN  RESV   1795.9    0.4   397800	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN  1174825	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 29
 1 'SEP' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2984.5    0.6   770118	5	1*	1*	1* /
  PROD2  OPEN  RESV   2259.1    1.6   359512	5	1*	1*	1* /
  PROD3  OPEN  RESV   1745.2    0.6   409558	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN  1339188	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 30
 1 'OCT' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2590.2    0.7   856412	5	1*	1*	1* /
  PROD2  OPEN  RESV   2292.8    1.6   370567	5	1*	1*	1* /
  PROD3  OPEN  RESV   1890.4    1.2   447869	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN  1474848	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 31
 1 'NOV' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2874.3   19.1  1201249	5	1*	1*	1* /
  PROD2  OPEN  RESV   2023.8    1.4   341011	5	1*	1*	1* /
  PROD3  OPEN  RESV   1648.5    2.4   403792	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN  1746051	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 32
 1 'DEC' 2020 /
/

WCONHIST
  PROD1  OPEN  RESV   2901.2   84.0  1633340	5	1*	1*	1* /
  PROD2  OPEN  RESV   2270.9    1.6   402928	5	1*	1*	1* /
  PROD3  OPEN  RESV   1696.0    8.1   432013	5	1*	1*	1* /
/

WCONINJH
   INJ1   GAS   OPEN  2268281	1*	0	/
   INJ2   WATER   OPEN     5500	1*	0	/
/

DATES  -- 33
 1 'JAN' 2021 /
/

WCONHIST
  PROD1  OPEN  RESV   2990.4   96.0  1559090	5	1*	1*	1* /
  PROD2  OPEN  RESV   2288.4    1.7   425340	5	1*	1*	1* /
  PROD3  OPEN  RESV   1973.7   26.7   498773	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  2283203	1*	0	/
/

DATES  -- 34
 1 'FEB' 2021 /
/

WCONHIST
  PROD1  OPEN  RESV   2992.8  100.2  1407111	5	1*	1*	1* /
  PROD2  OPEN  RESV   2392.3    1.9   496455	5	1*	1*	1* /
  PROD3  OPEN  RESV   1858.6   88.8   494370	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  2197936	1*	0	/
/

DATES  -- 35
 1 'MAR' 2021 /
/

WCONHIST
  PROD1  OPEN  RESV   2820.4  110.5  1256212	5	1*	1*	1* /
  PROD2  OPEN  RESV   2085.3    1.7   466288	5	1*	1*	1* /
  PROD3  OPEN  RESV   1516.1  120.8   491574	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  2014074	1*	0	/
/

DATES  -- 36
 1 'APR' 2021 /
/

WCONHIST
  PROD1  OPEN  RESV   2629.4  120.8  1181974	5	1*	1*	1* /
  PROD2  OPEN  RESV   2289.3    3.3   557153	5	1*	1*	1* /
  PROD3  OPEN  RESV   1760.0  157.1   672616	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  2211744	1*	0	/
/

DATES  -- 37
 1 'MAY' 2021 /
/

WCONHIST
  PROD1  OPEN  RESV   2905.9  141.0  1310786	5	1*	1*	1* /
  PROD2  OPEN  RESV   2214.9   27.6   585799	5	1*	1*	1* /
  PROD3  OPEN  RESV   1817.5  166.3   787580	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  2484165	1*	0	/
/

DATES  -- 38
 1 'JUN' 2021 /
/

WCONHIST
  PROD1  OPEN  RESV   2840.8  155.1  1291719	5	1*	1*	1* /
  PROD2  OPEN  RESV   2455.6   58.3   701612	5	1*	1*	1* /
  PROD3  OPEN  RESV   1996.3  185.2   923656	5	1*	1*	1* /
/

WCONINJH
   INJ1   WATER   OPEN     5500	1*	0	/
   INJ2   GAS   OPEN  2716987	1*	0	/
/

DATES  -- 39
 1 'JLY' 2021 /
/
