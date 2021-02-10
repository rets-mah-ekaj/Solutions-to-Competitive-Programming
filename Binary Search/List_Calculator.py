def solve(self, nums, op, val):
    if op == '/':
        op = '//'
    for i in range(len(nums)):
        nums[i] = eval(str(nums[i]) + op + str(val))
    return nums
