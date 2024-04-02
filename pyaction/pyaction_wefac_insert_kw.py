# The python code in this file does the same as ACT-01 to ACT-05 of opm-tests/actionx/ACTIONX_WEFAC.DATA
import datetime

def run(ecl_state, schedule, report_step, summary_state, actionx_callback):
    if (not 'act01_executed' in globals()):
        globals()["act01_executed"] = False
        globals()["act02_executed"] = False
        globals()["act03_executed"] = False

    current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

    if (current_time.day  >= 1 and current_time.month == 7 and current_time.year == 2018 and not globals()["act01_executed"]):
        print("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
        kw = """
        WEFAC
        'OP*  '  0.900                                                                 /
        /"""
        schedule.insert_keywords(kw)
        globals()["act01_executed"] = True
    if (current_time.day  >= 1 and current_time.month == 1 and current_time.year == 2019 and not globals()["act02_executed"]):
        print("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
        kw = """
        WEFAC
        'OP*  '  0.950                                                                 /
        /"""
        schedule.insert_keywords(kw)
        globals()["act02_executed"] = True
    if (current_time.day  >= 1 and current_time.month == 1 and current_time.year == 2020 and not globals()["act03_executed"]):
        print("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
        kw = """
        WEFAC
        'GI*  '  1.000                                                                 /
        'WI*  '  1.000                                                                 /
        /"""
        schedule.insert_keywords(kw)
        globals()["act03_executed"] = True