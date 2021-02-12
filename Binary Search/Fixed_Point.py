def solve(self, nums):
    for i in range(len(nums)):
        if nums[i] == i:
            return i
    return -1
