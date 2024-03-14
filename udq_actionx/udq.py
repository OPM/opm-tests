# UDQ
#   DEFINE WUOPRL (WOPR OPL01 - 150) * 0.90 /
#   DEFINE WULPRL (WLPR OPL01 - 200) * 0.90 /
#   DEFINE WUOPRU (WOPR OPU01 - 250) * 0.80 /
#   DEFINE WULPRU (WLPR OPU01 - 300) * 0.80 /
# /

def run(ecl_state, schedule, report_step, summary_state):
    for udq,var,src_well,target_well, shift,factor in [("WUOPRL", "WOPR", "OPL01", "OPL02", 150, 0.90),
                                                       ("WULPRL", "WLPR", "OPL01", "OPL02", 200, 0.90),
                                                       ("WUOPRU", "WOPR", "OPU01", "OPU02", 250, 0.80),
                                                       ("WULPRU", "WLPR", "OPU01", "OPU02", 300, 0.80)]:

        value = (summary_state.well_var(src_well, var) - shift) * factor
        summary_state.update_well_var(target_well, udq, value)
