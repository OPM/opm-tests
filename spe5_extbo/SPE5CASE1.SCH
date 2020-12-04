RPTRST
 'BASIC=2' 
  PRESSURE  SGAS  SOIL  SWAT  XMF  YMF 
  DENG DENO DENW 
  VGAS VOIL VWAT
  RS RV BO BG BW
  KRG KRO KRW  
  PCOW PCOG
/

WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'SHUT' /
/

-- Start production for two years
TSTEP
--Advance the simulater once a month for TWO years:
31 28 31 30 31 30 31 31 30 31 30 31
31 28 31 30 31 30 31 31 30 31 30 31  
/
-- Start WAG injection after 2 years with 1 year cycle
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/

WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'OPEN' /
 'INJG' 'SHUT' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 31
/
WELOPEN
 'INJW' 'SHUT' /
 'INJG' 'OPEN' /
/
TSTEP
--Advance the simulater once a month for ONE years:
31 28 31 30 31 30 31 31 30 31 30 35
/
-- End simulation after 20 years

END

