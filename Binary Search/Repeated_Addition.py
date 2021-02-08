def solve(self, n):
    while True:
        if n < 10:
            return n
        n = [int(i) for i in str(n)]
        n = sum(n)
