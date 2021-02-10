def solve(self, nums):
    for i in range(len(nums)):
        if nums[abs(nums[i])] >= 0:
            nums[abs(nums[i])] = -nums[abs(nums[i])]
        else:
            return abs(nums[i])
