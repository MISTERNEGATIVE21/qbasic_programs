
INPUT n
LET a = n
WHILE (a > 0)
    LET r = a MOD 10
    LET s = s + r ^ 3
    LET a = INT(a / 10)
WEND
IF n = s THEN
    PRINT n, "it is a amstrong no";
ELSE
    PRINT n, "not a amstrong no";
END IF
END



