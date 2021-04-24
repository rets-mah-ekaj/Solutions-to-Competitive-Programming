class Solution:
    def solve(self, n):
        if n == 0:
            return '0'
        nums = []
        while n:
            n, r = divmod(n, 3)
            nums.append(str(r))
        return ''.join(reversed(nums))
