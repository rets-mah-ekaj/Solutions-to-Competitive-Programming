def solve(self, nums):
    ans = 0
    while nums != 0:
        ans += nums % 10
        nums //= 10
    return ans
