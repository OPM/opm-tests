# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/

# PYACTION version of ACT-UDQ in actionx/ACTIONX_UDQ_INSERT_KW.DATA
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in globals()):
    done = False
    setup_done = True

wells = ["OP0{}".format(i) for i in range(1, 10)]
if (not done and any(summary_state.well_var(w, "WGOR") >= summary_state["FU_GOR2"] for w in wells)):
    opm_embedded.OpmLog.info("PYACTION PYACTION_UDQ triggered")
    schedule.insert_keywords("""
    UDQ
    DEFINE  WU_NEW   WOPR * 2 /
    ASSIGN  WU_FLAG  'OP01' 5 /
    DEFINE  WU_NEW2  WOPR * 2 /
    ASSIGN  FU_NEW2  9 /
    /
    """)
    done = True
