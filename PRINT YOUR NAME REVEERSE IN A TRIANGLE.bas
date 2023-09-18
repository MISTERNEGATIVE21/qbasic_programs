INPUT "A"; A$
LET L = LEN(A$)
FOR X = 1 TO L
    LET B$ = RIGHT$(A$, X)
    PRINT B$
NEXT
END
