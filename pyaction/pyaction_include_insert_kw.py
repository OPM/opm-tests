# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2025 Equinor ASA

import datetime
import opm_embedded
import os

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in locals()):
    executed = False
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 1 and current_time.month == 2 and current_time.year == 2021 and not executed):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    script_location = os.path.dirname(os.path.abspath(__file__))
    kw = """
    --
    --       LOAD INCLUDE FILE - WELSEGS, COMSEGS AND WSEGVALV
    --
    INCLUDE
             '{}/../wsegvalv/include/prod1_msw_wsegvalv_data.inc'           /
    """.format(script_location)
    # A relative path like '../wsegvalv/include/prod1_msw_wsegvalv_data.inc' and also variables
    # from the DATA file do not work here, using the script_location is the approach that works.
    schedule.insert_keywords(kw)
    executed = True
