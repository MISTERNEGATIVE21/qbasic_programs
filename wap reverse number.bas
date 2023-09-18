LET s = 0
INPUT n
LET a = n
WHILE (a > 0)
    LET r = a MOD 10
    LET s = (s * 10) + r
    LET a = INT(a / 10)
WEND
PRINT s
