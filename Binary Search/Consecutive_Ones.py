def solve(self, nums):
    c = nums.count(1)
    nums = ''.join([str(i) for i in nums])
    if nums.count('1' * c) == 1:
        return True
    return False
