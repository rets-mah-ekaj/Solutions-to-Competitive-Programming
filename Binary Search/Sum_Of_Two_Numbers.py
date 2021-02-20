def solve(self, nums, k):
    temp = set()
    for i in nums:
        if i in temp:
            return True
        temp.add(k - i)
    return False
