def solve(self, n):
    res, k = 0, n
    temp = len(str(n))
    while k != 0:
        res += (k % 10) ** temp
        k //= 10
    return res == n
