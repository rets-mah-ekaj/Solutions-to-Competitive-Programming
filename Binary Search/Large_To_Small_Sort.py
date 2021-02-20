def solve(self, nums):
    temp = []
    nums = sorted(nums)
    n = len(nums)
    for i in range(n):
        if i % 2 == 0:
            temp.append(nums[-1])
            nums.pop(-1)
        else:
            temp.append(nums[0])
            nums.pop(0)
    return temp
