# This Python reservoir simulation file is made available under the Open Database
# License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
# individual contents of the database are licensed under the Database Contents
# License: http://opendatacommons.org/licenses/dbcl/1.0/
#
# Copyright (C) 2015-2024 Equinor ASA

import datetime
import opm_embedded

summary_state = opm_embedded.current_summary_state
schedule = opm_embedded.current_schedule

if (not 'setup_done' in locals()):
    executed = [False] * 2
    setup_done = True

current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())
GGOR_FIELD = summary_state.group_var("FIELD", "GGOR")
GGOR_PROD = summary_state.group_var("PROD", "GGOR")
GOPR_PROD = summary_state.group_var("PROD", "GOPR")

if (GGOR_PROD >= 150 and current_time.month >= 1 and current_time.year >= 2019 and not executed[0]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-01 triggered at {}\n".format(current_time))
    kw = """
    --
    --       GROUP PRODUCTION CONTROLS
    --
    -- GRUP  CNTL  OIL    WAT    GAS    LIQ    CNTL  GRUP  GUIDE  GUIDE  CNTL
    -- NAME  MODE  RATE   RATE   RATE   RATE   OPT   CNTL  RATE   DEF    WAT
    GCONPROD
    FIELD    GRAT  1*     1*    300E3   1*     1*     1*    1*     1*     1*       /
    /
    --
    --       GROUP GAS CONSUMPTION (FUEL) AND IMPORT
    --
    -- GRUP   GAS      GAS
    -- NAME   FUEL    IMPORT
    --       ------   -------
    GCONSUMP
    PROD     25E3                                                                  /
    /"""
    schedule.insert_keywords(kw)
    executed[0] = True

if (GGOR_FIELD >= 200 and GOPR_PROD <= 1500 and not executed[1]):
    opm_embedded.OpmLog.info("PYACTION version of ACT-02 triggered at {}\n".format(current_time))
    kw = """
    --
    --       GROUP PRODUCTION CONTROLS
    --
    -- GRUP  CNTL  OIL    WAT    GAS    LIQ    CNTL  GRUP  GUIDE  GUIDE  CNTL
    -- NAME  MODE  RATE   RATE   RATE   RATE   OPT   CNTL  RATE   DEF    WAT
    GCONPROD
    FIELD    GRAT  1*     1*     400E3  1*     1*     1*    1*     1*     1*       /
    /
    --
    --       GROUP GAS CONSUMPTION (FUEL) AND IMPORT
    --
    -- GRUP   GAS      GAS
    -- NAME   FUEL    IMPORT
    --       ------   -------
    GCONSUMP
    PROD     50E3                                                                  /
    /
    --
    --       WELL PRODUCTION WELL CONTROLS
    --
    -- WELL  OPEN/  CNTL   OIL    WAT    GAS   LIQ    RES    BHP   THP   VFP    VFP
    -- NAME  SHUT   MODE   RATE   RATE   RATE  RATE   RATE   PRES  PRES  TABLE  ALFQ
    WCONPROD
    OP01     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   12   5         /
    OP02     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   12   5         /
    OP03     OPEN   GRUP   1*     1*     1*    1*     1*     50.0   12   5         /
    /"""
    schedule.insert_keywords(kw)
    executed[1] = True
