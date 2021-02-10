def solve(self, nums):
    r = max(nums)
    nums.remove(r)
    l = max(nums)
    if l * 2 < r:
        return True
    return False
