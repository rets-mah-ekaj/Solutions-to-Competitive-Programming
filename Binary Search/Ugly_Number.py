def solve(self, n):
    if n == 0:
        return False
    if n == 1:
        return True
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n /= 2
    for i in range(3, int(n ** 0.5) + 1, 2):
        while n % i == 0:
            factors.append(i)
            n /= i
    if n > 2:
        factors.append(int(n))
    factors = set(factors)
    if max(factors) > 5:
        return False
    return True
