class Solution:
    def solve(self, nums):
        d = {}
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        c = 0
        for i in d.keys():
            if d[i] > 1:
                n = d[i]
                c += ((n ** 2 - n) / 2)
        return c
