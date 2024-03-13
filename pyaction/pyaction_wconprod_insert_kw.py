# The python code below does the same as ACT-01 to ACT-05
import datetime

def run(ecl_state, schedule, report_step, summary_state):
    print("checking PYACTION\n")
    start = schedule.start
    current_time = start + datetime.timedelta(seconds=summary_state.elapsed())

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

    if (WGOR_OP01 >= FU_GOR and FU_GASFL == 0 and current_time.month >= 1 and current_time.year >= 2019):
        print("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        OP01     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /"""
        schedule.insert_keywords(kw, report_step)
    if (WGOR_OP02 >= 150  and FU_GASFL == 0 and current_time.month >= 1 and current_time.year >= 2019):
        print("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        OP02     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /"""
        schedule.insert_keywords(kw, report_step)
    if (WGOR_OP03 >= 150  and FU_GASFL == 0 and current_time.month >= 1 and current_time.year >= 2019):
        print("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        OP03     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
        /"""
        schedule.insert_keywords(kw, report_step)
# The group property field is somehow not available, when this ACTION-04 is not an ACTION-X..
#    if (FU_GASFL == 0 and GOPR_FIELD <= 500):
#        print("PYACTION version of ACT-04 triggered at {}\n".format(current_time))
#        summary_state["FU_GASFL"] = 1 # Gas Field Flag Set to On
#        kw = """
#        GCONPROD
#        FIELD    GRAT  1*     1*     3.0E6  1*     1*     1*    1*     1*     1*       /
#        /
#        WCONPROD
#        OP01     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
#        OP02     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
#        OP03     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
#        /"""
#        schedule.insert_keywords(kw, report_step)
    if (FU_GASFL == 1 and FGPR <= 2.0E6):
        print("PYACTION version of ACT-05 triggered at {}\n".format(current_time))
        kw = """
        WCONPROD
        'OP*'    SHUT   1*     1*     1*     1*    1*     1*     1*                    /
        /
        WCONINJE
        'GI*'    GAS    SHUT   GRUP  1*     1*     1*     1*    1*                     /
        'WI*'    WAT    SHUT   GRUP  1*     1*     1*     1*    1*                     /
        /"""
        schedule.insert_keywords(kw, report_step)

#-- ---------------------------------------------------------------------------------------------------------------------------------
#-- ACTIONX WCONPROD - BEAM BACK OIL RATE IF GOR >= 150 M3/M3 FOR WELL OP01
#-- ---------------------------------------------------------------------------------------------------------------------------------
#ACTIONX
#        ACT-01    500  10                                  /
#        WGOR OP01  >= FU_GOR  AND                          /
#        FU_GASFL    = 0       AND                          /
#        MNTH >= JAN           AND                          /
#        YEAR >= 2019                                       /
#/
#--
#--       WELL PRODUCTION WELL CONTROLS
#--
#-- WELL  OPEN/  CNTL   OIL    WAT    GAS   LIQ    RES    BHP   THP   VFP    VFP
#-- NAME  SHUT   MODE   RATE   RATE   RATE  RATE   RATE   PRES  PRES  TABLE  ALFQ
#WCONPROD
#OP01     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
#/
#
#ENDACTIO
#-- ---------------------------------------------------------------------------------------------------------------------------------
#-- ACTIONX WCONPROD - BEAM BACK OIL RATE IF GOR >= 150 M3/M3 FOR WELL OP02
#-- ---------------------------------------------------------------------------------------------------------------------------------
#ACTIONX
#        ACT-02    500  10                                  /
#        WGOR OP02  >= 150     AND                          /
#        FU_GASFL    = 0       AND                          /
#        MNTH >= JAN           AND                          /
#        YEAR >= 2019                                       /
#/
#--
#--       WELL PRODUCTION WELL CONTROLS
#--
#-- WELL  OPEN/  CNTL   OIL    WAT    GAS   LIQ    RES    BHP   THP   VFP    VFP
#-- NAME  SHUT   MODE   RATE   RATE   RATE  RATE   RATE   PRES  PRES  TABLE  ALFQ
#WCONPROD
#OP02     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
#/
#
#ENDACTIO
#-- ---------------------------------------------------------------------------------------------------------------------------------
#-- ACTIONX WCONPROD - BEAM BACK OIL RATE IF GOR >= 150 M3/M3 FOR WELL OP03
#-- ---------------------------------------------------------------------------------------------------------------------------------
#ACTIONX
#        ACT-03    500  10                                  /
#        WGOR OP03  >= 150     AND                          /
#        FU_GASFL    = 0       AND                          /
#        MNTH >= JAN           AND                          /
#        YEAR >= 2019                                       /
#/
#--
#--       WELL PRODUCTION WELL CONTROLS
#--
#-- WELL  OPEN/  CNTL   OIL    WAT    GAS   LIQ    RES    BHP   THP   VFP    VFP
#-- NAME  SHUT   MODE   RATE   RATE   RATE  RATE   RATE   PRES  PRES  TABLE  ALFQ
#WCONPROD
#OP03     OPEN   ORAT WU_WOPR  1*     1*    1*    1*      150   1*    5      1* /
#/
#
#ENDACTIO
#-- ---------------------------------------------------------------------------------------------------------------------------------
#-- ACTIONX GCONPROD - ONCE FOPR <= 500 THEN CONVERT TO GAS FIELD
#-- ---------------------------------------------------------------------------------------------------------------------------------
#ACTIONX
#        ACT-04                                             /
#        FU_GASFL      = 0     AND                          /
#        GOPR 'FIELD' <= 500                                /
#/
#--
#-- DEFINE START OF USER DEFINED QUANTITY SECTION
#--
#UDQ
#--
#-- OPERATOR VARIABLE  EXPRESSION
#--
#DEFINE      FU_GASFL  1                                    / Gas Field Flag Set to On
#
#/  DEFINE END OF USER DEFINED QUANTITY SECTION
#--
#--       GROUP PRODUCTION CONTROLS
#--
#-- GRUP  CNTL  OIL    WAT    GAS    LIQ    CNTL  GRUP  GUIDE  GUIDE  CNTL
#-- NAME  MODE  RATE   RATE   RATE   RATE   OPT   CNTL  RATE   DEF    WAT
#GCONPROD
#FIELD    GRAT  1*     1*     3.0E6  1*     1*     1*    1*     1*     1*       /
#/
#--
#--       WELL PRODUCTION WELL CONTROLS
#--
#-- WELL  OPEN/  CNTL   OIL    WAT    GAS   LIQ    RES    BHP   THP   VFP    VFP
#-- NAME  SHUT   MODE   RATE   RATE   RATE  RATE   RATE   PRES  PRES  TABLE  ALFQ
#WCONPROD
#OP01     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
#OP02     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
#OP03     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   20   5         /
#/
#
#ENDACTIO
#-- ---------------------------------------------------------------------------------------------------------------------------------
#-- ACTIONX GCONPROD - GAS FIELD MINIMUM GAS RATE OF 2.0E6 M3/DAY THEN SHUT-IN ALL WELLS AND EXIT
#-- ---------------------------------------------------------------------------------------------------------------------------------
#ACTIONX
#        ACT-05                                             /
#        FGPR    <= 2.0E6      AND                          /  Just to Stop the Run and Check FU_GASFL Works
#        FU_GASFL = 1                                       /
#/
#--
#--       WELL PRODUCTION WELL CONTROLS
#--
#-- WELL  OPEN/  CNTL   OIL    WAT    GAS   LIQ    RES    BHP   THP   VFP    VFP
#-- NAME  SHUT   MODE   RATE   RATE   RATE  RATE   RATE   PRES  PRES  TABLE  ALFQ
#WCONPROD
#'OP*'    SHUT   1*     1*     1*     1*    1*     1*     1*                    /
#/
#--
#--       WELL INJECTION CONTROLS
#--
#-- WELL  FLUID  OPEN/  CNTL  SURF   RESV   BHP   THP   VFP
#-- NAME  TYPE   SHUT   MODE  RATE   RATE   PRSES PRES  TABLE
#WCONINJE
#'GI*'    GAS    SHUT   GRUP  1*     1*     1*     1*    1*                     /
#'WI*'    WAT    SHUT   GRUP  1*     1*     1*     1*    1*                     /
#/
#-- --
#-- --       TERMINATE AND EXIT SIMULATION (WORKS BUT NO RSM FILE, SO COMMENT OUT FOR NOW)
#-- --
#-- EXIT
#--          0                              /
#--
#ENDACTIO