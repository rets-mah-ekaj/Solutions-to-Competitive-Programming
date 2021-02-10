def solve(self, nums):
    nums = sorted(nums)
    maxDiff = 0
    for i in range(len(nums) - 1):
        maxDiff = max(maxDiff, nums[i + 1] - nums[i])
    return maxDiff
