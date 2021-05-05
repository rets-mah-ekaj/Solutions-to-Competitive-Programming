class Solution:
    def solve(self, nums):
        lst = []
        n = len(nums)
        if n == 1:
            return lst
        if nums[0] > nums[1]:
            lst.append(0)
        for i in range(1, n - 1):
            if nums[i] > nums[i - 1] and nums[i] > nums[i + 1]:
                lst.append(i)
        if nums[n - 1] > nums[n - 2]:
            lst.append(n - 1)
        return lst
