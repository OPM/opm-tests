import datetime

def run(ecl_state, schedule, report_step, summary_state, actionx_callback):
    summary_state["FU_VAR1"] = 1

    if (not "FU_TIME" in summary_state):
        summary_state["FU_TIME"] = 0.0
    summary_state["FU_TIME"] += summary_state["TIMESTEP"]

    summary_state["FU_VAR3"] = 38547.2
    summary_state["FU_VAR4"] = 50009.92
    summary_state["FU_VAR5"] = 110874.0
    summary_state["FU_VAR6"] = 2166.0
    summary_state["FU_VAR7"] = (4332.0*summary_state["FU_TIME"]/365)

    summary_state["FU_VAR8"] = 153.0
    summary_state["FU_VAR9"] = 8245.17
    summary_state["FU_VAR10"] = summary_state["FU_VAR9"]/summary_state["FU_VAR8"]
    summary_state["FU_VAR11"] = 0.0
    summary_state["FU_VAR12"] = summary_state["FU_VAR11"] > 0
    summary_state["FU_VAR13"] = 3000.0
    summary_state["FU_VAR14"] = (summary_state["FU_TIME"]>(summary_state["FU_VAR13"]+summary_state["FU_VAR8"]))
    summary_state["FU_VAR15"] = 0.0
    summary_state["FU_VAR15"] = summary_state["FU_VAR15"]*(1 - summary_state["FU_VAR12"]*(1-summary_state["FU_VAR14"])) + (summary_state["FU_VAR15"] + summary_state["FU_VAR10"]*summary_state["TIMESTEP"])*summary_state["FU_VAR12"]*(1-summary_state["FU_VAR14"])

    summary_state["FU_VAR16"] = 32.0
    summary_state["FU_VAR17"] = 3.17

    summary_state["FU_VAR18"] = 30.0
    summary_state["FU_VAR19"] = summary_state.well_var("INJ1", "WWIR")
    summary_state["FU_VAR20"] = (summary_state["FU_VAR19"] > 2 )
    summary_state["FU_VAR21"] = 0.0
    summary_state["FU_VAR21"] = (1-summary_state["FU_VAR20"])*summary_state["FU_VAR21"] + summary_state["FU_VAR20"]*(summary_state["FU_VAR16"]*2*summary_state["FU_VAR18"]*summary_state["FU_VAR17"])


    summary_state["FU_VAR22"] = 0.0
    summary_state["FU_VAR23"] = (summary_state["FU_VAR22"] > 0) 
    summary_state["FU_VAR24"] = 0.0
    summary_state["FU_VAR24"] = (1-summary_state["FU_VAR23"])*summary_state["FU_VAR24"] + summary_state["FU_VAR23"]*(summary_state["FU_VAR24"]+summary_state["FU_VAR16"]*summary_state["TIMESTEP"]*summary_state["FU_VAR17"]) 


    summary_state["FU_VAR25"] = 16.0
    summary_state["FU_VAR26"] = 0.0
    summary_state["FU_VAR27"] = (summary_state["FU_VAR1"] > 1.0) 
    summary_state["FU_VAR28"] = 0.0
    summary_state["FU_VAR29"] = summary_state["FU_VAR27"]*(summary_state["FU_VAR26"]+summary_state["FU_VAR28"])+(1-summary_state["FU_VAR27"])*summary_state["FU_VAR26"] 
    summary_state["FU_VAR30"] = (summary_state["FU_VAR29"]*summary_state["FU_VAR25"]*summary_state["TIMESTEP"]/365)*summary_state["FU_VAR17"] 
    summary_state["FU_VAR31"] = 0.0
    summary_state["FU_VAR31"] = summary_state["FU_VAR31"] + summary_state["FU_VAR30"] 


    summary_state["FU_VAR32"] = summary_state["FGPR"] + summary_state["FGLIR"]
    
    if (not "FU_VAR33" in summary_state):
        summary_state["FU_VAR33"] = 0.0
    summary_state["FU_VAR33"] = summary_state["FU_VAR33"] + summary_state["FU_VAR32"]*summary_state["TIMESTEP"] 

    summary_state["FU_VAR34"] = 2.948
    summary_state["FU_VAR35"] = 0.003
    summary_state["FU_VAR36"] = 1.0
    summary_state["FU_VAR37"] = summary_state["FU_VAR32"]*summary_state["FU_VAR36"]*summary_state["FU_VAR35"] 
    summary_state["FU_VAR38"] = summary_state["FU_VAR33"]*summary_state["FU_VAR36"]*summary_state["FU_VAR35"] 
    summary_state["FU_VAR39"] = (1.0*summary_state["FU_VAR38"]*summary_state["FU_VAR34"]/1000) 

    if (not "FU_VAR40" in summary_state):
        summary_state["FU_VAR40"] =  0.0
    summary_state["FU_VAR41"] =  (summary_state["FU_VAR40"]*19.0/70000/365) 
    summary_state["FU_VAR42"] = summary_state["FU_VAR41"]*summary_state["TIMESTEP"] 
    if (not "FU_VAR43" in summary_state):
        summary_state["FU_VAR43"] = 0.0
    summary_state["FU_VAR43"] = summary_state["FU_VAR43"] + summary_state["FU_VAR42"] 

    summary_state["FU_VAR44"] = 1.0
    summary_state["FU_VAR45"] = 6000000
    summary_state["FU_VAR46"] = (1.0*summary_state["FU_VAR44"]*summary_state["FU_VAR32"])/(summary_state["FU_VAR45"]*365) 
    summary_state["FU_VAR47"] = summary_state["FU_VAR46"]*summary_state["TIMESTEP"] 
    if (not "FU_VAR48" in summary_state):
        summary_state["FU_VAR48"] = 0.0
    summary_state["FU_VAR48"] = summary_state["FU_VAR48"] + summary_state["FU_VAR47"] 
    summary_state["FU_VAR49"] = summary_state["FU_VAR43"] + summary_state["FU_VAR48"] 
    summary_state["FU_VAR50"] = summary_state["FU_VAR41"] + summary_state["FU_VAR46"] 

    summary_state["FU_VAR51"] = 0.875
    summary_state["FU_VAR52"] = 48.69
    summary_state["FU_VAR53"] = (1.0*summary_state["FU_VAR50"]*summary_state["FU_VAR36"]*24*365/summary_state["FU_VAR51"])*(3600.0/summary_state["FU_VAR52"]) 
    if (not "FU_VAR54" in summary_state):
        summary_state["FU_VAR54"] = 0.0

    summary_state["FU_VAR54"] = summary_state["FU_VAR54"] + summary_state["FU_VAR53"]*summary_state["TIMESTEP"]    
    summary_state["FU_VAR55"] = (summary_state["FU_VAR54"]/1000)*summary_state["FU_VAR34"]

    summary_state["FU_VAR56"] = (summary_state["FU_VAR54"] + summary_state["FU_VAR38"])
    summary_state["FU_CPO18"] = 0.0 # This variable is zero - checked with ResInsight
    summary_state["FU_VAR57"] = 0.0 # This variable is zero, even if it is summary_state["FU_CPO18"]+summary_state["FU_VAR4"]+summary_state["FU_VAR15"]+summary_state["FU_VAR5"]+summary_state["FU_VAR6"]+summary_state["FU_VAR7"]+summary_state["FU_VAR39"]+summary_state["FU_VAR55"]+summary_state["FU_VAR24"]+summary_state["FU_VAR21"]+summary_state["FU_VAR31"]

    summary_state["FU_VAR58"] = 0.3613
    summary_state["FU_VAR59"] = 0.8218
    summary_state["FU_VAR60"] = 0.8688
    summary_state["FU_VAR61"] = 1.9
    summary_state["FU_VAR62"] = (summary_state["FGPT"]-summary_state["FU_VAR54"]-summary_state["FU_VAR38"]) 
    summary_state["FU_VAR63"] = (summary_state["FU_VAR62"]*summary_state["FU_VAR58"]/1000) 
    summary_state["FU_VAR64"] = (summary_state["FU_VAR62"]*summary_state["FU_VAR59"]) 
    summary_state["FU_VAR65"] = (summary_state["FU_VAR62"]*summary_state["FU_VAR60"]) 
    summary_state["FU_VAR66"] = (summary_state["FOPT"] + summary_state["FU_VAR65"]/1000)+(summary_state["FU_VAR63"]*summary_state["FU_VAR61"]) 
    summary_state["FU_VAR67"] = summary_state["FU_VAR66"]*6.29 
    summary_state["FU_VAR68"] = summary_state["FU_VAR57"]*1000/(summary_state["FU_VAR67"] + 0.001)

    summary_state["FU_VAR69"] = 0.0 
    summary_state["FU_VAR70"] = 0.0 

    summary_state["FU_VAR71"] = (summary_state.group_var("TEST", "GOPR")  - summary_state["FU_VAR69"]) 
    summary_state["FU_VAR72"] = (summary_state.group_var("TEST", "GWPR")  - summary_state["FU_VAR70"]) 
    summary_state["FU_VAR73"] = (summary_state["FOPR"]/(summary_state.group_var("TEST", "GOPR")  + 0.001))

    if (not 'action_executed' in globals()):
        globals()["action_executed"] = False
    if (not globals()["action_executed"] and summary_state["FOPR"] > 2):
        current_time = schedule.start + datetime.timedelta(seconds=summary_state.elapsed())
        print("PYACTION version of ACT1 triggered at {}\n".format(current_time))
        summary_state["FU_VAR40"] = summary_state["FU_VAR71"]*summary_state["FU_VAR73"]+(summary_state["FU_VAR72"]*summary_state["FU_VAR73"]/7)        
        globals()["action_executed"] = True
