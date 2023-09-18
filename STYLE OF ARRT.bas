INPUT "DADDA"; A$
LET L = LEN(A$)
FOR X = L TO 1 STEP -1
    LET B$ = RIGHT$(A$, X)
    LET L2 = L - LEN(B$)
    FOR X2 = 1 TO L2
        PRINT " ";
    NEXT
    PRINT B$;
    PRINT
NEXT X

