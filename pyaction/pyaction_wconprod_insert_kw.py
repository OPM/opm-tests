# The python code in this file does the same as ACT-01 to ACT-05 of opm-tests/actionx/ACTIONX_WCONPROD.DATA
import datetime
import opm_embedded

ecl_state = opm_embedded.current_ecl_state
summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule
report_step = opm_embedded.current_report_step

if (not 'setup_done' in locals()):
    last_updated_at = [datetime.datetime(1970, 1, 1)] * 3 # Set last_updated_at to the beginning of time
    execution_counter = [0] * 3
    converted_to_gas_field = False
    all_wells_shut = False
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

days_since_last_update = [(current_time - i).total_seconds()/3600/24 for i in last_updated_at]
wells_WGOR = [summary_state.well_var("OP01", "WGOR"), summary_state.well_var("OP02", "WGOR"), summary_state.well_var("OP03", "WGOR")]

for i in range(3):
    if (wells_WGOR[i] >= 150.0 and current_time.month >= 1 and current_time.year >= 2019 and days_since_last_update[i] >= 10 and execution_counter[i] < 500):
        opm_embedded.OpmLog.info("PYACTION version of ACT-0{} triggered at {}\n".format(i+1, current_time))
        kw = """
        WCONPROD
        OP0{}     OPEN   ORAT  WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /""".format(i+1) # python starts at zero, but the wells start at 1
        schedule.insert_keywords(kw)
        last_updated_at[i] = current_time
        execution_counter[i] += 1

if (summary_state.group_var("FIELD", "GOPR") <= 500 and not converted_to_gas_field):
    opm_embedded.OpmLog.info("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
    kw = """
    GCONPROD
    FIELD    GRAT  1*     1*     3.0E6  1*     1*     1*    1*     1*     1*       /
    /
    WCONPROD
    'OP*'     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
    /"""
    schedule.insert_keywords(kw)
    converted_to_gas_field = True
elif (converted_to_gas_field and summary_state["FGPR"] <= 2.0E6 and not all_wells_shut):
    opm_embedded.OpmLog.info("PYACTION version of ACT-05 triggered at {}\n".format(current_time))
    kw = """
    WCONPROD
    'OP*'    SHUT   1*     1*     1*     1*    1*     1*     1*                    /
    /
    WCONINJE
    'GI*'    GAS    SHUT   GRUP  1*     1*     1*     1*    1*                     /
    'WI*'    WAT    SHUT   GRUP  1*     1*     1*     1*    1*                     /
    /"""
    schedule.insert_keywords(kw)
    all_wells_shut = True