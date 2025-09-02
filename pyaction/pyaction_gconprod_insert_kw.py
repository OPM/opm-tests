# The python code in this file does the same as ACT-01 to ACT-04 of opm-tests/actionx/ACTIONX_GCONPROD.DATA
import datetime
import opm_embedded

# ecl_state = opm_embedded.current_ecl_state
# report_step = opm_embedded.current_report_step
schedule = opm_embedded.current_schedule
summary_state = opm_embedded.current_summary_state

if (not 'act01_executed' in globals()):
    globals()["act01_executed"] = False
    globals()["act02_execution_counter"] = 0
    globals()["act02_last_executed_at"] = datetime.datetime(1970, 1, 1) # Set act02_last_executed_at to the beginning of time
    globals()["act03_executed"] = False
    globals()["act04_executed"] = False

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())
act02_days_since_last_execution = (current_time - globals()["act02_last_executed_at"]).total_seconds()/3600/24

GGOR_PROD = summary_state.group_var("PROD", "GGOR")
GGOR_FIELD = summary_state.group_var("FIELD", "GGOR")
GOPR_FIELD = summary_state.group_var("FIELD", "GOPR")
FU_FGPR = summary_state["FU_FGPR"]

if (GGOR_PROD >= 150 and current_time.month >= 1 and current_time.year >= 2019 and not globals()["act01_executed"]):
    print("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    GCONPROD
    FIELD    GRAT  1*     1*    250E3   1*     RATE   1*    1*     1*     1*      /
    /"""
    schedule.insert_keywords(kw)
    globals()["act01_executed"] = True
if (GGOR_FIELD >= 200 and act02_days_since_last_execution >= 10 and globals()["act02_execution_counter"] < 500):
    print("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    GCONPROD
    FIELD    GRAT  1*     1*  FU_FGPR   1*     RATE   1*    1*     1*     1*      /
    /"""
    schedule.insert_keywords(kw)
    globals()["act02_last_executed_at"] = current_time
    globals()["act02_execution_counter"] += 1
if (GOPR_FIELD <= 500 and not globals()["act03_executed"]):
    print("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
    kw = """
    GCONPROD
    FIELD    GRAT  1*     1*     275E3  1*     RATE   1*    1*     1*     1*      /
    /
    WCONPROD
    OP01     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   12   5         /
    OP02     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   12   5         /
    OP03     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   12   5         /
    /"""
    schedule.insert_keywords(kw)
    globals()["act03_executed"] = True
if (FU_FGPR <= 50E3 and not globals()["act04_executed"]):
    print("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
    summary_state["FU_GASFL"] = 1 # Gas Field Flag Set to On
    kw = """
    WCONPROD
    'OP*'    SHUT   1*     1*     1*     1*    1*     1*     1*                    /
    /
    WCONINJE
    'GI*'    GAS    SHUT   GRUP  1*     1*     1*     1*    1*                     /
    'WI*'    WAT    SHUT   GRUP  1*     1*     1*     1*    1*                     /
    /"""
    schedule.insert_keywords(kw)
    globals()["act04_executed"] = True

