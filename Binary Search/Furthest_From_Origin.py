def solve(self, s):
    l, r, q = s.count('L'), s.count('R'), s.count('?')
    return abs(l - r) + q
