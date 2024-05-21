# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2015-2024 Equinor ASA

import datetime
import opm_embedded

ecl_state = opm_embedded.current_ecl_state
summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule
report_step = opm_embedded.current_report_step

log = opm_embedded.OpmLog

GGOR_FIELD = summary_state.group_var("FIELD", "GGOR")

log.info("hello")

if (not 'setup_done' in locals()):
    executed = [False] * 3
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())

if (GGOR_FIELD >= 150.0 and current_time.month >= 2 and current_time.year >= 2018 and not executed[0]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    -- WGRUPCON - GI01 AND OIL WELLS ON GROUP CONTROL WITH GUIDE RATES UNDER THE MAIN GROUP
    --
    --       GROUP PRODUCTION CONTROLS
    --
    -- GRUP  CNTL  OIL    WAT    GAS    LIQ    CNTL  GRUP  GUIDE  GUIDE  CNTL
    -- NAME  MODE  RATE   RATE   RATE   RATE   OPT   CNTL  RATE   DEF    WAT
    GCONPROD
    FIELD    GRAT  1*     1*    400E3   1*     1*    1*    1*     1*     1*       /
    MAIN     FLD                                                                  /
    /
    --
    --       GROUP INJECTION TARGETS AND CONSTRAINTS
    --
    -- GRUP  FLUID CNTL   SURF   RESV   REINJ  VOID  GRUP  GUIDE  GUIDE GRUP  GRUP
    -- NAME  TYPE  MODE   RATE   RATE   FRAC   FRAC  CNTL  RATE   DEF   REINJ RESV
    GCONINJE
    FIELD    GAS   REIN  400E3   1*     0.95   1*    1*    1*     1*    1*    1*   /
    /
    --
    --       DEFINE WELL AND WELL CONNECTIONS FLOWING STATUS
    --
    --  WELL WELL   --LOCATION--  COMPLETION
    --  NAME STAT     I   J    K  FIRST LAST
    WELOPEN
    GI01     OPEN                                                                  /
    GI01     OPEN     0   0    0                                                   /
    /
    --
    --       DEFINE WELL GUIDES FOR GROUP CONTROL
    --
    -- WELL  GRUP  GUIDE  GUIDE  SCALE
    -- NAME  CNTL  RATE   PHASE  FACT
    WGRUPCON
    'GI*'    YES   0.5    RAT    1.0                           /
    OP01     YES   0.5    OIL    1.0                           /
    OP02     YES   0      OIL    1.0                           /
    OP03     YES   0      OIL    1.0                           /
    /
    """
    schedule.insert_keywords(kw)
    executed[0] = True

WGIR_GI01 = summary_state.well_var("GI01", "WGIR")
WWIR_WI01 = summary_state.well_var("WI01", "WWIR")
if (WGIR_GI01 > 0.0  and WWIR_WI01 == 0.0 and current_time.month >= 1.9 and current_time.year >= 2018.9 and not executed[1]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    -- GRUPTREE - ALL PRODUCERS ON GROUP CONTROL AND EACH PRODUCER IS ASSIGNED TO A DIFFERENT GROUP
    --
    --       DEFINE GROUP TREE HIERARCHY
    --
    --       LOWER     HIGHER
    --       GROUP     GROUP
    GRUPTREE
             PROD      FIELD                                  /
             PROD01    PROD                                   /
             PROD02    PROD                                   /
             PROD03    PROD                                   /
    /
    --
    --       WELL SPECIFICATION DATA
    --
    -- WELL  GROUP    LOCATION  BHP    PHASE  DRAIN  INFLOW  OPEN  CROSS PVT   DEN  FIP
    -- NAME  NAME       I    J  DEPTH  FLUID  AREA   EQUANS  SHUT  FLOW  TABLE CAL  NUM
    WELSPECS
    OP01     PROD01     6    3   1*     OIL    0.00   STD    SHUT   YES  0     SEG     /
    OP02     PROD02    10    4    1*       OIL    0.00    STD    SHUT   YES     0     SEG     /
    OP03     PROD03     6   19   1*     OIL    0.00   STD    SHUT   YES  0     SEG     /
    /
    --
    --       DEFINE WELL GUIDES FOR GROUP CONTROL
    --
    -- WELL  GRUP  GUIDE  GUIDE  SCALE
    -- NAME  CNTL  RATE   PHASE  FACT
    WGRUPCON
    OP01     YES   1*     OIL    1.0                           /
    OP02     YES   1*     OIL    1.0                           /
    OP03     YES   1*     OIL    1.0                           /
    /
    """
    schedule.insert_keywords(kw)
    executed[1] = True

FPR = summary_state["FPR"]
if (FPR <= 220.0 and current_time.year >= 2018 and not executed[2]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-03 triggered at {}\n".format(current_time))
    kw = """
    -- GRUPTREE - ALL INJECTORS ON GROUP CONTROL UNDER SEPARATE GROUPS AND VOIDAGE REPLACEMENT WITH WATER (MAX 4.0E3 M3/DAY)
    --
    --       GROUP INJECTION TARGETS AND CONSTRAINTS
    --
    -- GRUP  FLUID CNTL   SURF   RESV   REINJ  VOID  GRUP  GUIDE  GUIDE GRUP  GRUP
    -- NAME  TYPE  MODE   RATE   RATE   FRAC   FRAC  CNTL  RATE   DEF   REINJ RESV
    GCONINJE
    FIELD    WAT   VREP  4.0E3   1*     1*     1.0   1*    1*     1*    1*    1*   /
    /
    --
    --       DEFINE GROUP TREE HIERARCHY
    --
    --       LOWER     HIGHER
    --       GROUP     GROUP
    GRUPTREE
             INJE      FIELD                                  /
             GASINJ    INJE                                   /
             WATINJ    INJE                                   /
    /
    --
    --       WELL SPECIFICATION DATA
    --
    -- WELL  GROUP    LOCATION  BHP    PHASE  DRAIN  INFLOW  OPEN  CROSS PVT   DEN  FIP
    -- NAME  NAME       I    J  DEPTH  FLUID  AREA   EQUANS  SHUT  FLOW  TABLE CAL  NUM
    WELSPECS
    GI01     GASINJ     2   13   1*     GAS    0.00   STD    SHUT   YES  0     SEG     /
    WI01     WATINJ    12   20   1*     WAT    0.00   STD    SHUT   YES  0     SEG     /
    /
    --
    --       DEFINE WELL GUIDES FOR GROUP CONTROL
    --
    -- WELL  GRUP  GUIDE  GUIDE  SCALE
    -- NAME  CNTL  RATE   PHASE  FACT
    WGRUPCON
    'GI*'    YES   0      RAT    1.0                           /
    'WI*'    YES   0      RAT    1.0                           /
    /
    --
    --       DEFINE WELL AND WELL CONNECTIONS FLOWING STATUS
    --
    --  WELL WELL   --LOCATION--  COMPLETION
    --  NAME STAT     I   J    K  FIRST LAST
    WELOPEN
    WI01     OPEN                                                                  /
    WI01     OPEN     0   0    0                                                   /
    /
    --
    --       WELL INJECTION CONTROLS
    --
    -- WELL  FLUID  OPEN/  CNTL  SURF   RESV   BHP   THP   VFP
    -- NAME  TYPE   SHUT   MODE  RATE   RATE   PRSES PRES  TABLE
    WCONINJE
    WI01     WAT    OPEN   RATE 5.0E3   1*     1*     1*    1*                     /
    /
    """
    schedule.insert_keywords(kw)
    executed[2] = True
