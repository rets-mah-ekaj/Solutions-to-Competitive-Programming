def solve(self, nums):
    nums = sorted(nums)
    t = nums[1] - nums[0]
    for i in range(1, len(nums) - 1):
        if nums[i + 1] - nums[i] != t:
            return False
    return True
