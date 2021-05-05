class RangeSum:
    def __init__(self, nums):
        self.nums = nums
        for i in range(1, len(self.nums)):
            self.nums[i] = self.nums[i] + self.nums[i - 1]

    def total(self, i, j):
        if i == 0:
            return self.nums[j - 1]
        else:
            return self.nums[j - 1] - self.nums[i - 1]
