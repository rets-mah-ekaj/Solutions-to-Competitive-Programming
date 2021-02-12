def solve(self, nums):
    temp = []
    temp.append(list(nums))
    n = len(nums)
    l, r = 0, n - 1
    while True:
        if len(nums) == 2:
            nums[0] += nums[1]
            nums.pop(1)
            temp.append(nums)
            return temp
        elif len(nums) == 1:
            return temp
        nums[1] += nums[0]
        nums[-2] += nums[-1]
        nums.pop(0)
        nums.pop(-1)
        temp.append(list(nums))
