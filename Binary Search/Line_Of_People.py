def solve(self, n, a, b):
    return n - max(a + 1, n - b) + 1
