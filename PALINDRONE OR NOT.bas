INPUT "ENTER A STRING"; A$
LET L = LEN(A$)
FOR X = L TO 1 STEP -1
    LET B$ = B$ + MID$(A$, X, 1)
NEXT X
IF A$ = B$ THEN
    PRINT A$; "IS A PALINDRONE"
ELSE
    PRINT A$; "NOT A PALINDRONE"
END IF
END


