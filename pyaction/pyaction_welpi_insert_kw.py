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
report_step = opm_embedded.current_report_step

if (not 'setup_done' in locals()):
    executed = [False] * 4
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 1 and current_time.month == 11 and current_time.year == 2018 and not executed[0]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    WELPI
    'PROD1'  150.                                              /
    'INJ1'   1.1E5                                             /
    /"""
    schedule.insert_keywords(kw, report_step)
    executed[0] = True
elif (current_time.day == 1 and current_time.month == 12 and current_time.year == 2018 and not executed[1]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    WELPI
    'PROD1'  111.                                              /
    'INJ1'   0.8E5                                             /
    /"""
    schedule.insert_keywords(kw, report_step)
    executed[1] = True
elif (current_time.day == 1 and current_time.month == 7 and current_time.year == 2019 and not executed[2]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
    kw = """
    WELPI
    'PROD2'  50                                                /
    'PROD3'  1.E4                                              /
    'INJ2'   4.E5                                              /
    /"""
    schedule.insert_keywords(kw, report_step)
    executed[2] = True
elif (current_time.day == 1 and current_time.month == 1 and current_time.year == 2020 and not executed[3]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
    kw = """
    WELPI
    'PROD2'  25.                                               /
    'PROD3'  0.5E4                                             /
    'INJ2'   0.1E5                                             /
    /"""
    schedule.insert_keywords(kw, report_step)
    executed[3] = True
