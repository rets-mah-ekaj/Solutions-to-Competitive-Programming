def solve(self, nums):
    d, done = {}, {}
    for i in range(len(nums)):
        if not nums[i] in d:
            d[nums[i]] = 1
        else:
            d[nums[i]] += 1
    i = 0
    while i < len(nums):
        n = d[nums[i]]
        if not nums[i] in done:
            done[nums[i]] = 1
        else:
            done[nums[i]] += 1
        if n == done[nums[i]] and n > 1:
            nums.pop(i)
            i -= 1
        i += 1
    return nums
