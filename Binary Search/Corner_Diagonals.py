def solve(self, n):
    if n % 2 == 0:
        return (n * n) - (n + n)
    else:
        return (n * n) - (n + n - 1)
