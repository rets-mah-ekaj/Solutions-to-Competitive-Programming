class Solution:
    def solve(self, s, k):
        d = {}

        for i in range(len(s)):
            if s[i : i + k] not in d:
                d[s[i : i + k]] = 1
            else:
                d[s[i : i + k]] += 1
        c = 0
        print(d)
        for i in d.keys():
            if d[i] > 1:
                c += 1
        return c
