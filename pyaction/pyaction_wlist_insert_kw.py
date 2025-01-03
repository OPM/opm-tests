# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2025 Equinor ASA

import datetime
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in locals()):
    executed = False
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())
if (current_time.day == 5 and current_time.month == 7 and current_time.year == 2020 and not executed):
    opm_embedded.OpmLog.info("PYACTION version of WLIST_ACTIONX triggered at {}\n".format(current_time))
    kw = """
    WCONPROD
      P1  OPEN  ORAT  1000.0  4*  150.0  /
    /

    WCONINJE    --written by schedule script
    --  Well_name Type  Status  Ctrl  SRate1  Rrate BHP THP VFP
        'WI1'   WATER STOP  GRUP  2000   1* 325.0 1*  1*  /
    /

    WLIST    --written by schedule script
        '*INJ'  NEW 'WI1'                 /
    /
    """
    schedule.insert_keywords(kw)
    executed = True
