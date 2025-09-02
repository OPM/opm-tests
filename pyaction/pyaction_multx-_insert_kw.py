# The python code in this file does the same as ACT-01 of opm-tests/actionx/ACTIONX_MULTX-.DATA
import datetime
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (not 'act01_executed' in globals()):
    globals()["act01_executed"] = False

if (current_time.day >= 1 and current_time.month == 1 and current_time.year == 2021 and not globals()["act01_executed"]):
    print("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """        
    --       ---------- BOX ---------                
    --       I1  I2   J1  J2   K1  K2                
    BOX                                             
              1   9    1   9    1   2                          / DEFINE BOX AREA  
    --
    --       SET MULTX- TRANSMISSIBILITY MULTIPLIERS                           
    -- 
    MULTX-
             162*2.0                                           /     
    --
    --       DEFINE END OF INPUT BOX EDITING OF INPUT ARRAYS
    --       
    ENDBOX
    """
    globals()["act01_executed"] = True
    schedule.insert_keywords(kw)