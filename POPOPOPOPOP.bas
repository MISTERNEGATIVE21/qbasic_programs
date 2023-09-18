10 FOR N = 1 TO 500
    20 INPUT "THE UNITS "; P
    30 IF P <= 100 THEN
        40 LET C = P * 0.4 + 150
    50 ELSEIF P <= 300 THEN
        60 LET C = 150 + (P - 100) * 0.5 + 40
    90 ELSE
        100 LET C = 150 + (P - 300) * 0.60 + 140
    105 END IF
    110 PRINT "THE CHARGE IS"; C
120 NEXT N
130 END



