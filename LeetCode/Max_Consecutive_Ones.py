def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
    res, count = 0, 0
    for i in range(len(nums)):
        if nums[i] == 0:
            count = 0
        else:
            count += 1
            res = max(res, count)
    return res
