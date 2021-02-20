def solve(self, nums):
    h = dict()
    n = len(nums)
    for i in range(n):
        h[nums[i]] = h.get(nums[i], 0) + 1
    for i in h:
        if h[i] % 2 != 0:
            return False
    return True
