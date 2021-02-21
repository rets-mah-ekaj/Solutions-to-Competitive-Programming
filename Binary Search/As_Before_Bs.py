def solve(self, s):
    res = a = s.count('A')
    b = 0
    for i, c in enumerate(s):
        if c == 'A':
            a -= 1
        else:
            b += 1
        res = min(res, a + b)
    return res
