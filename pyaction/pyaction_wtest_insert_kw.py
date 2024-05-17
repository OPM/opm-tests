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
    executed = [False] * 2
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 1 and current_time.month == 6 and current_time.year == 2021 and not executed[0]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    --
    --       WELL ECONOMIC CRITERIA FOR PRODUCTION WELLS
    -- WELL  MIN    MIN    MAX    MAX    MAX    CNTL    END   WELL
    -- NAME  ORAT   GRAT   WCUT   GOR    WGR    MODE    RUN   NAME
    WECON
    'OP*'    100    1*     0.95   3.0    1*     CON    'NO'                        /
    /"""
    schedule.insert_keywords(kw)
    executed[0] = True

GOPR_FIELD = summary_state.group_var("FIELD", "GOPR")
if (current_time.day == 1 and current_time.month >= 1 and current_time.year >= 2022 and GOPR_FIELD <= 15000 and not executed[1]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    --
    --       WELL ECONOMIC CRITERIA FOR PRODUCTION WELLS
    -- WELL  MIN    MIN    MAX    MAX    MAX    CNTL    END   WELL
    -- NAME  ORAT   GRAT   WCUT   GOR    WGR    MODE    RUN   NAME
    WECON
    'OP*'    100    1*     0.95   4.0    1*     CON    'NO'                        /
    /
    --
    --       WELL TESTING CRITERIA FOR RE-OPENING CLOSED WELLS
    --
    -- WELL  TST    TST    NO.    STRT
    -- NAME  INTV   TYPE   TSTS   TIME
    -- ----  ----   ----   ----   ----
    WTEST
    'OP0*'   30.0   PE     1      0.0                                              /
    'OP1*'   30.0   PE     2     15.0                                              /
    'OP2*'   30.0   PE     3     30.0                                              /
    /"""
    schedule.insert_keywords(kw)
    executed[1] = True
