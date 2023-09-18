INPUT "ENTER A STIRNG "; A$
DO
    LET L = LEN(A$)
    PRINT A$
    LET B$ = ""
    FOR X = 1 TO L STEP 2
        LET B$ = B$ + MID$(A$, X, 1)
    NEXT X
    A$ = B$
LOOP UNTIL (L < 2)
END
