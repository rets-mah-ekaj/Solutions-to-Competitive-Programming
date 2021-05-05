class Solution:
    def solve(self, nums):
        new_nums = nums
        new_nums = sorted(new_nums)
        c1, c2 = 0, 0
        n = len(nums)
        for i in range(n):
            if nums[i] != new_nums[i]:
                c1 += abs(nums[i] - new_nums[i])
            if nums[i] != new_nums[n - i - 1]:
                c2 += abs(nums[i] - new_nums[n - i - 1])
        return min(c1, c2)
