def solve(self, nums):
    count = 0
    flip = 0
    for i in range(len(nums)):
        if nums[i] == 1:
            flip = 1
        if flip == 1 and (i == 0 or nums[i] != nums[i - 1]):
            count += 1
    return count
