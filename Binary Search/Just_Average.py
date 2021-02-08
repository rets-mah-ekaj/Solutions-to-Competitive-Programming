def solve(self, nums, k):
    total = sum(nums)
    k = k * (len(nums) - 1)
    for i in nums:
       if total - i == k:
           return True
    return False
