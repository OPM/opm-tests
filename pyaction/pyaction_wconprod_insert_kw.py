# The python code in this file does the same as ACT-01 to ACT-05 of opm-tests/actionx/ACTIONX_WCONPROD.DATA
import datetime

def run(ecl_state, schedule, report_step, summary_state, actionx_callback):
    if (not 'act01_last_executed_at' in globals()):
        globals()["act01_last_executed_at"] = datetime.datetime(1970, 1, 1) # Set act01_last_executed_at to the beginning of time
        globals()["act02_last_executed_at"] = datetime.datetime(1970, 1, 1) # Set act02_last_executed_at to the beginning of time
        globals()["act03_last_executed_at"] = datetime.datetime(1970, 1, 1) # Set act03_last_executed_at to the beginning of time
        globals()["act01_execution_counter"] = 0
        globals()["act02_execution_counter"] = 0
        globals()["act03_execution_counter"] = 0
        globals()["act04_executed"] = False
        globals()["act05_executed"] = False

    if (not "FU_GASFL" in summary_state):
        summary_state["FU_GASFL"] = 0 # Gas Field Flag Set to Off

    current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

    act01_days_since_last_execution = (current_time - globals()["act01_last_executed_at"]).total_seconds()/3600/24  
    act02_days_since_last_execution = (current_time - globals()["act02_last_executed_at"]).total_seconds()/3600/24  
    act03_days_since_last_execution = (current_time - globals()["act03_last_executed_at"]).total_seconds()/3600/24  

    FU_GOR = summary_state["FU_GOR"]
    FU_GASFL = summary_state["FU_GASFL"]
    WGOR_OP01 = summary_state.well_var("OP01", "WGOR")
    WGOR_OP02 = summary_state.well_var("OP02", "WGOR")
    WGOR_OP03 = summary_state.well_var("OP03", "WGOR")
    GOPR_FIELD = summary_state.group_var("FIELD", "GOPR")
    FGPR = summary_state["FGPR"]

    if (WGOR_OP01 >= FU_GOR and FU_GASFL == 0 and current_time.month >= 1 and current_time.year >= 2019 and act01_days_since_last_execution >= 10 and globals()["act01_execution_counter"] < 500):
        print("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        OP01     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /"""
        schedule.insert_keywords(kw)
        globals()["act01_last_executed_at"] = current_time
        globals()["act01_execution_counter"] += 1
    if (WGOR_OP02 >= 150  and FU_GASFL == 0 and current_time.month >= 1 and current_time.year >= 2019 and act02_days_since_last_execution >= 10 and globals()["act02_execution_counter"] < 500):
        print("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        OP02     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /"""
        schedule.insert_keywords(kw)
        globals()["act02_last_executed_at"] = current_time
        globals()["act02_execution_counter"] += 1
    if (WGOR_OP03 >= 150  and FU_GASFL == 0 and current_time.month >= 1 and current_time.year >= 2019 and act03_days_since_last_execution >= 10  and globals()["act03_execution_counter"] < 500):
        print("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        OP03     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /"""
        schedule.insert_keywords(kw)
        globals()["act03_last_executed_at"] = current_time
        globals()["act03_execution_counter"] += 1
    if (FU_GASFL == 0 and GOPR_FIELD <= 500 and not globals()["act04_executed"]):
        print("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
        summary_state["FU_GASFL"] = 1 # Gas Field Flag Set to On
        kw = """
        GCONPROD
        FIELD    GRAT  1*     1*     3.0E6  1*     1*     1*    1*     1*     1*       /
        /
        WCONPROD
        OP01     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
        OP02     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
        OP03     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
        /"""
        schedule.insert_keywords(kw)
        globals()["act04_executed"] = True
    if (FU_GASFL == 1 and FGPR <= 2.0E6 and not globals()["act05_executed"]):
        print("PYACTION version of ACT-05 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        'OP*'    SHUT   1*     1*     1*     1*    1*     1*     1*                    /
        /
        WCONINJE
        'GI*'    GAS    SHUT   GRUP  1*     1*     1*     1*    1*                     /
        'WI*'    WAT    SHUT   GRUP  1*     1*     1*     1*    1*                     /
        /"""
        schedule.insert_keywords(kw)
        globals()["act05_executed"] = True