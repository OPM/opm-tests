# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2015-2025 Equinor ASA

import datetime
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in locals()):
    executed = [False] * 2
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day == 1 and current_time.month == 1 and current_time.year == 2019 and not executed[0]):
    opm_embedded.OpmLog.info("PYACTION version of GRUPNET-01 triggered at {}\n".format(current_time))
    opm_embedded.OpmLog.info("PYACTION version of GRUPNET-01 triggered at {}\n".format(current_time))
    kw = """
    -- Re-route: PROD--[2]-->GRPB--[2]-->FIELD[80]
    GRUPTREE
      'PROD' 'GRPB' /
    /

    GRUPNET
      'GRPB' 1* 2 /
    /"""
    schedule.insert_keywords(kw)
    executed[0] = True

if (current_time.day == 15 and current_time.month == 2 and current_time.year == 2019 and not executed[1]):
    opm_embedded.OpmLog.info("PYACTION version of GRUPNET-02 triggered at {}\n".format(current_time))
    opm_embedded.OpmLog.info("PYACTION version of GRUPNET-02 triggered at {}\n".format(current_time))
    kw = """
    -- No effect, no wells should be in GRPB
    GRUPNET
      'GRPB' 1* 9999 /
    /


    WCONPROD
    --  WELL   OPEN/  CNTL  OIL   WATER  GAS   LIQU  VOID  BHP  THP  TAB
    --  NAME   SHUT   MODE  RATE  RATE   RATE  RATE  RATE            NO

      'P*'  'OPEN' 'GRUP'  1000.0   2*         2*          100.0  20.0  5 /
    /"""
    schedule.insert_keywords(kw)
    executed[1] = True
