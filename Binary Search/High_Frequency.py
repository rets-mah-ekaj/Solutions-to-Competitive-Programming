def solve(self, nums):
    if len(nums) == 0:
        return 0
    dictionary = {}
    for i in range(len(nums)):
        if nums[i] in dictionary.keys():
            dictionary[nums[i]] += 1
        else:
            dictionary[nums[i]] = 1
    return max(dictionary.values())
