def solve(self, nums):
    temp = sorted(nums)
    c = 0
    for i in range(len(nums)):
        if temp[i] == nums[i]:
            c += 1
    return c
