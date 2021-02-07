def solve(self, nums):
    temp = nums[0]
    nums[0] = 0

    for i in range(1, len(nums)):
        if temp < nums[i]:
            nums[i] = temp
        else:
            nums[i], temp = temp, nums[i]
    return nums
