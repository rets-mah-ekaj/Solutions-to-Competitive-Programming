def solve(self, nums, target):
    if set(nums) != set(target):
        return False
    if len(set(nums)) != len(set(target)):
        return False
    if sorted(nums) != sorted(target):
        return False
    return True
