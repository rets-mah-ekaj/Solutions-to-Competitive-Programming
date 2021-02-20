def solve(self, n):
    while True:
        if n == 1:
            return True
        sq = 0
        while n:
            sq += (n % 10) ** 2
            n //= 10
        n = sq
        if n == 4:
            return False
    return False
