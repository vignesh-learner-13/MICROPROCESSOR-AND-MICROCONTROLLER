ORG 0000H
ORL P0,#0X03
MAIN:JB P0.0,NXT
SETB P0.2
SJMP MAIN
NXT:JB P0.1,OFF
SETB P0.2
SJMP MAIN 
OFF:CLR P0.2
SJMP MAIN 
END 

