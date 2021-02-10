def solve(self, s0, s1):
    if len(s1) != len(s0):
        return False
    s0 = sorted([i for i in s0])
    s1 = sorted([i for i in s1])
    for i in range(len(s0)):
        if s0[i] != s1[i]:
            return False
    return True
