LET C = 0
INPUT "ENTER A WORD"; A$
INPUT "ENTER A LETTER "; N$
LET L = LEN(A$)
FOR X = 1 TO L
    LET B$ = MID$(A$, X, 1)
    IF B$ = N$ THEN
        LET C = C + 1
    END IF
NEXT X
PRINT "NUMBER OF LETTER ARE "; C
END