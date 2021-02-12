def solve(self, nums):
    if len(nums) == 1:
        return nums[0]
    temp = gcd(nums[0], nums[1])
    if len(nums) == 2:
        return temp
    for i in range(2, len(nums)):
        temp = gcd(temp, nums[i])
    return temp
