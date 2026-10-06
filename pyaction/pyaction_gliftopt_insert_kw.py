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

if (current_time.day >= 2 and current_time.month == 1 and current_time.year == 2020 and not executed):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    GLIFTOPT
     'PLAT-A'  200000 /  --
    /
    GCONPROD
     'PLAT-A' ORAT 10000 /
    /"""
    schedule.insert_keywords(kw)
    executed = True
