-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2022 Equinor

--rnyb, Aug 20 - manually created for reference prediction case
--               only contains historical wells, no planned wells


--DATES
-- 01 JLY 2020 /
-----------------------------
-- ref case prediction set-up
-----------------------------

WCONPROD
 'A1'    OPEN  LRAT 3*    4000  1* 150 /
 'A2'    OPEN  LRAT 3*    2500  1* 150 /
 'A3'    OPEN  LRAT 3*    2500  1* 150 /
 'A4'    OPEN  LRAT 3*    4000  1* 150 /
/

WCONINJE
 'A5'   WATER  OPEN   RATE    6500         1*         500 /
 'A6'   WATER  OPEN   RATE    6500         1*         500 /
/

DATES
 2 JLY 2020 /
 1 AUG 2020 /
 1 SEP 2020 /
 1 OCT 2020 /
 1 NOV 2020 /
 1 DEC 2020 /
 1 JAN 2021 /
 1 FEB 2021 /
 1 MAR 2021 /
 1 APR 2021 /
 1 MAY 2021 /
 1 JUN 2021 /
 1 JLY 2021 /
 1 AUG 2021 /
 1 SEP 2021 /
 1 OCT 2021 /
 1 NOV 2021 /
 1 DEC 2021 /
 1 JAN 2022 /
 1 FEB 2022 /
 1 MAR 2022 /
 1 APR 2022 /
 1 MAY 2022 /
 1 JUN 2022 /
 1 JLY 2022 /
 1 AUG 2022 /
 1 SEP 2022 /
 1 OCT 2022 /
 1 NOV 2022 /
 1 DEC 2022 /
 1 JAN 2023 /
 1 APR 2023 /
 1 JLY 2023 /
 1 OCT 2023 /
 1 JAN 2024 /
 1 APR 2024 /
 1 JUL 2024 /
 1 OCT 2024 /
/

RPTRST
 BASIC=2 NORST=1 /

DATES
 1 JAN 2025 /
/

RPTRST
 BASIC=0 /

END
