def solve(self, nums):
    nums = ''.join([str(i) for i in nums])
    nums = int(nums)
    nums += 1
    nums = [int(i) for i in str(nums)]
    return nums
