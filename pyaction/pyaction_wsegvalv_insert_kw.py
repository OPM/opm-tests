# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2015-2024 Equinor ASA

import datetime
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in locals()):
    executed = False
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 1 and current_time.month == 2 and current_time.year == 2021 and not executed):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    --
    -- WELL SEGMENT SPECIFICATION DATA                                                     
    --
    -- WELL  NODAL       LEN     WELL    DEPH    PRESS   FLOW       
    -- NAME  DEPTH       TUBING  VOLM    OPTN    CALC    MODEL       
    WELSEGS                                              
    PROD1    1203.20924  0.00000 1*      INC     'HF-'                             /
    --                                   
    --       SEG   SEG   BRAN    SEG     TUBING  NODAL   TUBE   TUBE     XSEC   VOL
    --       ISTR  IEND  NO      NO      LENGTH  DEPTH   ID     ROUGH    AREA   SEG  
              2      2    1       1    49.365370 3.56589 0.152  0.00001            /
              3      3    1       2    30.190230 2.18078 0.152  0.00001            /
              4      4    1       3    51.602450 3.50733 0.152  0.00001            /
              5      5    1       4    28.861320 1.74377 0.152  0.00001            /
              6      6    1       5    26.868580 1.47015 0.152  0.00001            /
              7      7    1       6    76.959330 3.36675 0.152  0.00001            /
              8      8    1       7    100.40827 1.64935 0.152  0.00001            /
              9      9    1       8    100.04913 1.24179 0.152  0.00001            /
             10     10    1       9    100.11563 4.65494 0.152  0.00001            /
             11     11    1      10    20.877280 0.98829 0.152  0.00001            /
             12     12    1      11    79.283690 3.20814 0.152  0.00001            /
             13     13    1      12    61.522520 2.31993 0.152  0.00001            /
    --   
    -- Perforation Valve Segments, Diam: MSW - Tubing Radius and Rough: MSW - Open Hole Roughness Factor
    -- 
    --       SEG   SEG   BRAN    SEG     TUBING  NODAL   TUBE   TUBE     XSEC   VOL
    --       ISTR  IEND  NO      NO      LENGTH  DEPTH   ID     ROUGH    AREA   SEG  
             14    14     2       2     0.10000    0     0.152  0.00001            /
             15    15     3       3     0.10000    0     0.152  0.00001            /
             16    16     4       4     0.10000    0     0.152  0.00001            /
             17    17     5       5     0.10000    0     0.152  0.00001            /
             18    18     6       6     0.10000    0     0.152  0.00001            /
             19    19     7       7     0.10000    0     0.152  0.00001            /
             20    20     8       8     0.10000    0     0.152  0.00001            /
             21    21     9       9     0.10000    0     0.152  0.00001            /
             22    22    10      10     0.10000    0     0.152  0.00001            /
             23    23    11      11     0.10000    0     0.152  0.00001            /
             24    24    12      12     0.10000    0     0.152  0.00001            /
             25    25    13      13     0.10000    0     0.152  0.00001            /
    /
    --
    --       MULTISEGMENT WELL COMPLETION SEGMENT SPECIFICATION DATA                                                     
    --                                                                             
    -- WELL                                                         
    -- NAME      
    COMPSEGS
    PROD1                                                                          /
    --                                                                             
    --      --LOCATION--  BRAN  TUBING    NODAL     DIR  LOC    MID    COMP    ISEG              
    --       II  JJ  K1   NO    LENGTH    DEPTH     PEN  I,J,K  PERFS  LENGTH  NO.              
              2   2   1    2    0.000000  0.100000                                 /
              3   2   1    3    0.000000  0.100000                                 /
              3   2   2    4    1.122600  1.222600                                 /
              3   3   2    5    0.000000  0.100000                                 /
              4   3   2    6    1.337030  1.437030                                 /
              4   3   3    7    55.14666  55.24666                                 /
              5   3   3    8    58.86552  58.96552                                 /
              6   3   3    9    39.13545  39.23545                                 /
              7   3   3   10    19.76452  19.86452                                 /
              8   3   3   11    0.327090  0.427090                                 /
              8   3   4   12    60.12801  60.22801                                 /
              9   3   4   13    0.000000  0.100000                                 /
    /    
    --
    --       MULTI-SEGMENT WELL ICD SEGMENT SPECIFICATION DATA                                                     
    --                                                                             
    -- WELL  SEG  DEVICE  AREA   PIPE   PIPE  PIPE  PIPE  OPEN  MAX  
    -- NAME  NO   CV      REST   LENG   ID    EPSI  AREA  SHUT  AREA 
    WSEGVALV                                                                                                                                    
    PROD1    14   0.7000  5.589e-5                                   /  DEFAULT VALUES 
    PROD1    15   0.7000  1.881e-5                                   /  TAKEN FROM
    PROD1    16   0.7000  3.215e-5                                   /  WELSEGS
    PROD1    17   0.7000  1.798e-5                                   /  KEYWORD
    PROD1    18   0.7000  1.674e-5                                   /  
    PROD1    19   0.7000  4.795e-5                                   /  
    PROD1    20   0.7000  6.256e-5                                   /
    PROD1    21   0.7000  6.233e-5                                   /
    PROD1    22   0.7000  6.238e-5                                   /
    PROD1    23   0.7000  1.301e-5                                   /
    PROD1    24   0.7000   4.94e-5                                   /
    PROD1    25   0.7000  6.346e-5                                   /
    /
    """
    schedule.insert_keywords(kw)
    executed = True
