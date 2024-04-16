# The python code in this file does the same as ACT-01 to ACT-05 of opm-tests/actionx/ACTIONX_WCONPROD.DATA
import datetime
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in locals()):
    executed = [False] * 2
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (current_time.day >= 15 and current_time.month == 3 and current_time.year == 2021 and not executed[0]):
    print("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    --
    --       NEXT   ALL
    --       STEP   TIME
    --       ----   ----
    NEXT
             0.5    NO                                         / 
    --
    --       WELL PRODUCTION AND INJECTION TARGETS                                                      
    --                                                                              
    --  WELL WELL   TARGET                                                       
    --  NAME TARG   VALUE                                                        
    WELTARG                                             
    B-1H     LIFT   63000.0                                    /
    B-2H     LIFT   63000.0                                    /
    B-3H     LIFT   63000.0                                    /
    C-1H     LIFT   63000.0                                    /
    C-2H     LIFT   63000.0                                    /
    /                 
    """
    schedule.insert_keywords(kw)
    executed[0] = True
if (current_time.day >= 1 and current_time.month == 9 and current_time.year == 2021 and not executed[1]):
    print("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    --
    --       NEXT   ALL
    --       STEP   TIME
    --       ----   ----
    NEXT
             1.0    YES                                        / 
    """
    schedule.insert_keywords(kw)
    executed[1] = True