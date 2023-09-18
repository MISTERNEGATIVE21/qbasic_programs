LET a$ = "abaaooooos"
LET l = LEN(a$)
FOR x = 1 TO l
    LET b$ = LEFT$(a$, x)
    PRINT b$
NEXT x
END

