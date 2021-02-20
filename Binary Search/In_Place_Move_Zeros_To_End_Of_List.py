def solve(self, nums):
    z = [0] * nums.count(0)
    l = []
    for i in nums:
        if i > 0:
            l.append(i)
    for i in z:
        l.append(i)
    return l
