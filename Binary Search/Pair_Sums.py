def solve(self, nums):
    e, o = 0, 0
    for i in nums:
        if i % 2 == 0:
            e += 1
        else:
            o += 1
    return e * o
