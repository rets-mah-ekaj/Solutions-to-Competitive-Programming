def solve(self, s):
    s = [i for i in s]
    k = set(s)
    if len(k) == len(s):
        return True
    return False
