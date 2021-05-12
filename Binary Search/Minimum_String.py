class Solution:
    def solve(self, s, t):
        sd = [0] * 26
        td = [0] * 26
        n = len(s)
        for i in range(n):
            sd[ord(s[i]) - 97] += 1
            td[ord(t[i]) - 97] += 1
        c = 0
        for i in range(26):
            c += abs(sd[i] - td[i])
        return c / 2
