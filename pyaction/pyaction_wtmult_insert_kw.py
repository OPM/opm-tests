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
    executed = [False] * 3
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 15 and current_time.month == 3 and current_time.year >= 2021 and not executed[0]):
    # WTMULT INCREASES THE GAS LIFT RATE FOR ALL OIL WELLS
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    --
    -- WELL TARGET/LIMIT MULTIPLIER
    --
    -- WELL  WELL   TARGET      REPORT
    -- NAME  TARG   MULTIPLIER  TIMES
    WTMULT
    B-1H     LIFT    3.0                   /
    B-2H     LIFT    3.0                   /
    B-3H     LIFT    3.0                   /
    C-1H     LIFT   10.0                   /
    C-2H     LIFT   10.0                   /
    /
    """
    schedule.insert_keywords(kw)
    executed[0] = True

if (current_time.day >= 1 and current_time.month == 6 and current_time.year >= 2021 and not executed[1]):
    # WTMULT INCREASES THE OIL RATE FOR ALL WELLS IN TWO STEPS
    opm_embedded.OpmLog.info("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    --
    -- WELL TARGET/LIMIT MULTIPLIER
    --
    -- WELL  WELL   TARGET      REPORT
    -- NAME  TARG   MULTIPLIER  TIMES
    WTMULT
    B-1H     ORAT    2.0                   /
    B-2H     ORAT    2.0                   /
    B-3H     ORAT    2.0                   /
    /
    --
    -- WELL TARGET/LIMIT MULTIPLIER
    --
    -- WELL  WELL   TARGET      REPORT
    -- NAME  TARG   MULTIPLIER  TIMES
    WTMULT
    C-1H     ORAT    3.0                   /
    C-2H     ORAT    3.0                   /
    /     """
    schedule.insert_keywords(kw)
    executed[1] = True

if (current_time.day >= 15 and current_time.month == 6 and current_time.year >= 2021 and not executed[2]):
    # WTMULT INCREASES THE WATER INJECTION LIMIT FOR ALL INJECTORS
    opm_embedded.OpmLog.info("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
    kw = """
    --
    -- WELL TARGET/LIMIT MULTIPLIER
    --
    -- WELL  WELL   TARGET      REPORT
    -- NAME  TARG   MULTIPLIER  TIMES
    WTMULT
    F-1H     WRAT   4.0                    /
    F-2H     WRAT   4.0                    /
    G-3H     WRAT   4.0                    /
    G-4H     WRAT   4.0                    /
    /"""
    schedule.insert_keywords(kw)
    executed[2] = True
