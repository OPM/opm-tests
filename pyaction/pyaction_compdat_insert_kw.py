# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2015-2024 Equinor ASA

import datetime
import opm_embedded

ecl_state = opm_embedded.current_ecl_state
summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule
report_step = opm_embedded.current_report_step

if (not 'setup_done' in locals()):
    executed = [False] * 4
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 1 and current_time.month == 11 and current_time.year == 2018 and not executed[0]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    -- WELL  --- LOCATION ---  OPEN   SAT   CONN   WELL   KH    SKIN   D     DIR
    -- NAME   II  JJ  K1  K2   SHUT   TAB   FACT   DIA    FACT  FACT   FACT  PEN
    COMPDAT
    PROD1     6    3   9   9   OPEN    0  184.170  0.216  1*   0.00  1*    'Z'   /
    PROD1     6    3  10  10   OPEN    0   24.709  0.216  1*   0.00  1*    'Z'   /

    INJ1      2   13   8   8   SHUT    0   20.547  0.216  1*      0.00   0.0   'Z'   /
    INJ1      2   13   9   9   SHUT    0   45.709  0.216  1*      0.00   0.0   'Z'   /
    INJ1      2   13  10  10   SHUT    0   25.267  0.216  1*      0.00   0.0   'Z'   /
    INJ1      2   13  11  11   SHUT    0   33.982  0.216  1*      0.00   0.0   'Z'   /
    /
    --
    --       ASSIGN WELL CONNECTIONS TO COMPLETIONS
    --
    -- WELL  --- LOCATION ---  COMPL
    -- NAME   II  JJ  K1  K2   NO.
    COMPLUMP
    PROD2     1*  1*   3   4    1                              / COMPLETION NO. 01
    PROD2     1*  1*   7  10    2                              / COMPLETION NO. 02
    /
    -- WELL  --- LOCATION ---  COMPL
    -- NAME   II  JJ  K1  K2   NO.
    COMPLUMP
    INJ1      1*  1*   1   3    1                              / COMPLETION NO. 01
    INJ1      1*  1*   8  11    2                              / COMPLETION NO. 02
    /
    """
    schedule.insert_keywords(kw)
    executed[0] = True
if (current_time.day == 1 and current_time.month == 12 and current_time.year == 2018 and not executed[1]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    --  WELL WELL   --LOCATION--  COMPLETION
    --  NAME STAT     I   J    K  FIRST LAST
    WELOPEN
    PROD2    OPEN     0   0    0      2    2                                       /
    /
    --
    --       WELL CONNECTION DATA
    --
    -- WELL  --- LOCATION ---  OPEN   SAT   CONN   WELL   KH    SKIN   D     DIR
    -- NAME   II  JJ  K1  K2   SHUT   TAB   FACT   DIA    FACT  FACT   FACT  PEN
    COMPDAT
    INJ2     12   20  10  10   SHUT    0   18.620  0.216  1*   0.00    1*    'Z'   /
    INJ2     12   20  11  11   SHUT    0   77.048  0.216  1*   0.00    1*    'Z'   /
    /
    """
    schedule.insert_keywords(kw)
    executed[1] = True

if (current_time.day == 1 and current_time.month == 1 and current_time.year == 2019 and not executed[2]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
    kw = """
    -- WELL  --- LOCATION ---  OPEN   SAT   CONN   WELL   KH    SKIN   D     DIR
    -- NAME   II  JJ  K1  K2   SHUT   TAB   FACT   DIA    FACT  FACT   FACT  PEN
    COMPDAT
    PROD3     6   19   7   7   SHUT    0   21.629  0.216  1*      0.00   1*    'Z'   /
    PROD3     6   19   8   8   SHUT    0   12.441  0.216  1*      0.00   1*    'Z'   /
    PROD3     6   19   9   9   SHUT    0  178.588  0.216  1*      0.00   1*    'Z'   /
    PROD3     6   19  10  10   SHUT    0   11.149  0.216  1*      0.00   1*    'Z'   /
    /
    """
    schedule.insert_keywords(kw)
    executed[2] = True

if (current_time.day == 1 and current_time.month == 9 and current_time.year == 2019 and not executed[3]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
    kw = """
    --  WELL WELL   --LOCATION--  COMPLETION
    --  NAME STAT     I   J    K  FIRST LAST
    WELOPEN
    INJ1     SHUT     0   0    0   1    1                                          /
    INJ1     OPEN     1*  1*   1*  2    2                                          /
    /
    """
    schedule.insert_keywords(kw)
    executed[3] = True
