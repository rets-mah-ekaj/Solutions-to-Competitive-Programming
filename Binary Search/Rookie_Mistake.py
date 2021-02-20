def solve(self, s):
    r = s.index('R')
    if 'B' in s[:r] and 'B' in s[r:]:
        return False
    return True
