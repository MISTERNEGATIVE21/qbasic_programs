10 INPUT "any number"; a
15 INPUT " any number"; b
20 IF a > b THEN
    30 LET MAX = a
    40 LET MIN = b
50 ELSE
    60 LET MIN = a
    70 LET MAX = b
80 END IF
90 FOR X = MIN TO MAX
    100 PRINT X
110 NEXT
120 END

