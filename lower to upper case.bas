INPUT "enter a waord in lower case"; a$

LET L = LEN(a$)
FOR X = L TO 1 STEP -1
    LET B$ = MID$(a$, X, 1)
    LET A = ASC(B$)
    IF A >= 97 AND A <= 122 THEN
        LET A = A - 32
    END IF
    PRINT CHR$(A);
NEXT X
END


