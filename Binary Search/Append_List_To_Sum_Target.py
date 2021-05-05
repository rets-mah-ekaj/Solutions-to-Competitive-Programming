class Solution:
    def solve(self, nums, k, target):
        temp = sum(nums)
        if target < temp:
            target = temp - target
            if target % k == 0:
                return target // k
            return target // k + 1
        target = target - temp
        if target % k == 0:
            return target // k
        return target // k + 1
