class Solution:
    def solve(self, s0, s1):
        n = min(len(s0), len(s1))
        i = 0
        s = ''
        while i < n:
            s = s + s0[i] + s1[i]
            i += 1
        if len(s0) > n:
            return s + s0[i: ]
        return s + s1[i:]
