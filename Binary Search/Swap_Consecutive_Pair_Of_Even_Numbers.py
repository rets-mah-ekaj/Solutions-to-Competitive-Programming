def solve(self, nums):
    j = None
    for i in range(len(nums)):
        if nums[i] % 2 == 0:
            if j is not None:
                nums[i], nums[j] = nums[j], nums[i]
                j = None
            else:
                j = i
    return nums
