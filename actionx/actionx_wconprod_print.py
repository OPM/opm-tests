# The python code below does the same as ACT-01 to ACT-05
import datetime

def run(ecl_state, schedule, report_step, summary_state):
    print("print PYACTION\n")

    FU_GOR = summary_state["FU_GOR"]
    print("FU_GOR {}\n".format(FU_GOR))

    FU_GASFL = summary_state["FU_GASFL"]
    print("FU_GASFL {}\n".format(FU_GASFL))

    WGOR_OP01 = summary_state.well_var("OP01", "WGOR")
    print("WGOR_OP01 {}\n".format(WGOR_OP01))

    WGOR_OP02 = summary_state.well_var("OP02", "WGOR")
    print("WGOR_OP02 {}\n".format(WGOR_OP02))

    WGOR_OP03 = summary_state.well_var("OP03", "WGOR")
    print("WGOR_OP03 {}\n".format(WGOR_OP03))

    GOPR_FIELD = summary_state.group_var("FIELD", "GOPR")
    print("GOPR_FIELD {}\n".format(GOPR_FIELD))

    FGPR = summary_state["FGPR"]
    print("FGPR {}\n".format(FGPR))