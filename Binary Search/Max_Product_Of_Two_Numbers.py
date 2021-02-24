def solve(self, nums):
    nums = sorted(nums)
    return max(nums[0] * nums[1], nums[-1] * nums[-2])
