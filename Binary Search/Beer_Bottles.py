def solve(self, n):
    c = n
    while n >= 3:
        c += n // 3
        n = n // 3 + n % 3
    return c
