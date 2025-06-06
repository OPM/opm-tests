-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2015 Statoil

--
--         Generated by : Prosper 9.3 - License#:4474 - Sep 17 2006 14:05:16
--         Generated on : 12 Feb 07  12:21
--           Input File : Y:\Project\norne6\prod\gap\WI\F1H.OUT
--          Output File : Y:\Project\norne6\res\INCLUDE\VFP\F1H.Ecl
--
--
--                Fluid : Water
--           PVT Method : Black Oil
--    Equation Of State : 
--            Separator : Single-Stage
--            Emulsions : No
--             Hydrates : Disable Warning
--      Water Viscosity : Use Default Correlation
--         Water Vapour : No Calculations
--      Viscosity Model : Newtonian Fluid
--
--            Flow Type : Tubing
--            Well Type : Water Injector
--
--      Artificial Lift : None
--            Lift Type : 
--
--           Predicting : Pressure and Temperature (offshore)
--    Temperature Model : Rough Approximation
--                Range : Full System
--
--           Completion : Cased Hole
--          Gravel Pack : No
--
--          Inflow Type : Single Branch
--           Gas Coning : No
--
--              Company : Statoil
--                Field : Norne
--             Location : Nordland II
--                 Well : F-1H
--             Platform : Transocean Prospect
--              Analyst : shlea
--                 Date : 25 Jun 99  11:56
--
--
--
--  Surface Equipment Correlation :  Fancher Brown
--      Vertical Lift Correlation :  Petroleum Experts 2
--
--                    Rate Method :  User Selected
--                      Rate Type :  Liquid Rates
--
--                     First Node :    1            Xmas Tree      397.2 (m)
--                      Last Node :    9               Tubing       2888 (m)
--
--         Sensitivity Variable 1 :  First Node Pressure
--
--
-- PROSPER Lift Curves For ECLIPSE Simulator    (Water - Water Injector Well)  (Units System  - METRIC)


VFPINJ

-- Table   Datum Depth   Rate Type
-- -----   -----------   ---------
      17        2733.7       'WAT' /


-- 'WAT' units - SM3/DAY
  500.0  1263.2  2026.3  2789.5  3552.6 
 4315.8  5078.9  5842.1  6605.3  7368.4 
 8131.6  8894.7  9657.9 10421.1 11947.4 
13473.7 14236.8 15000.0 18000.0 /

-- 'THP' units - BARSA
  21.01   63.24  105.46  147.68  189.90 
 232.12  274.35  316.57  358.79  401.01 /

 1  255.66  255.10  253.49  251.14  248.12 
   244.45  240.16  235.26  229.74  223.62 
   216.90  209.57  201.66  193.14  174.34 
   153.15  141.67  129.60   76.40 
/
 2  298.18  297.64  296.05  293.70  290.69 
   287.03  282.75  277.86  272.35  266.25 
   259.54  252.23  244.33  235.82  217.06 
   195.92  184.46  172.42  119.32 
/
 3  340.70  340.18  338.60  336.27  333.27 
   329.61  325.35  320.47  314.96  308.87 
   302.19  294.88  287.01  278.51  259.79 
   238.69  227.25  215.23  162.24 
/
 4  383.22  382.72  381.16  378.83  375.85 
   372.19  367.94  363.08  357.58  351.51 
   344.84  337.54  329.68  321.20  302.53 
   281.46  270.04  258.05  205.15 
/
 5  425.74  425.26  423.71  421.40  418.42 
   414.78  410.54  405.68  400.19  394.14 
   387.48  380.20  372.36  363.89  345.26 
   324.24  312.83  300.87  248.07 
/
 6  468.27  467.80  466.27  463.97  461.00 
   457.36  453.13  448.29  442.81  436.77 
   430.13  422.86  415.04  406.58  387.99 
   367.01  355.62  343.68  290.99 
/
 7  510.79  510.34  508.83  506.54  503.58 
   499.94  495.73  490.90  485.43  479.40 
   472.78  465.52  457.72  449.28  430.72 
   409.78  398.41  386.50  333.91 
/
 8  553.32  552.88  551.39  549.11  546.16 
   542.53  538.33  533.51  528.05  522.04 
   515.43  508.18  500.40  491.97  473.46 
   452.56  441.21  429.33  376.84 
/
 9  595.84  595.43  593.95  591.68  588.74 
   585.12  580.93  576.13  570.67  564.67 
   558.08  550.85  543.08  534.67  516.20 
   495.34  484.00  472.15  419.76 
/
10  638.37  637.97  636.51  634.25  631.32 
   627.71  623.53  618.74  613.29  607.31 
   600.74  593.51  585.76  577.36  558.93 
   538.12  526.80  514.97  462.68 
/
