import sys
import datetime

def run(ecl_state, schedule, report_step, summary_state):
    sys.stdout.write("PYACTION_WELPI run is called.\n\n")

    start = schedule.start
    current_time = start + datetime.timedelta(seconds=summary_state.elapsed())
    sys.stdout.write("Next timestep will be at {}\n".format(current_time))

    if (current_time.day == 2 and current_time.month == 11 and current_time.year == 2018):
        sys.stdout.write("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
        kw = """
        WELPI
        'PROD1'  150.                                              /
        'INJ1'   1.1E5                                             /
        /"""
        schedule.insert_keywords(kw, report_step)
    elif (current_time.day == 1 and current_time.month == 12 and current_time.year == 2018):
        sys.stdout.write("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
        kw = """
        WELPI
        'PROD1'  111.                                              /
        'INJ1'   0.8E5                                             /
        /"""
        schedule.insert_keywords(kw, report_step)
    elif (current_time.day == 1 and current_time.month == 7 and current_time.year == 2019):
        sys.stdout.write("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
        kw = """
        WELPI
        'PROD2'  50                                                /
        'PROD3'  1.E4                                              /
        'INJ2'   4.E5                                              /
        /"""
        schedule.insert_keywords(kw, report_step)
    elif (current_time.day == 1 and current_time.month == 1 and current_time.year == 2020):
        sys.stdout.write("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
        kw = """
        WELPI
        'PROD2'  25.                                               /
        'PROD3'  0.5E4                                             /
        'INJ2'   0.1E5                                             /
        /"""
        schedule.insert_keywords(kw, report_step)