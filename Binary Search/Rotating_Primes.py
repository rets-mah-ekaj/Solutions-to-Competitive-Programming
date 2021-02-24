def prime(n):
    if n <= 1:
        return False
    return not any(n % 2 == 0 or n % i == 0 for i in range(3, int(n ** 0.5) + 1, 2))

def solve(self, n):
    n = str(n)
    for _ in range(len(n)):
        if not prime(int(n)):
            return False
        n = n[1:] + n[0]
    return True
