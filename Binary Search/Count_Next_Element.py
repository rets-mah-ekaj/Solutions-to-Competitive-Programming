class Solution:
    def solve(self, nums):
        nums = sorted(nums)
        d = {}
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        c = 0
        for i in nums:
            if (i + 1) in d:
                c += 1
        return c
