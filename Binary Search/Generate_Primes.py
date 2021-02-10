def solve(self, n):
    prime = [True] * (n+1)
    p = 2
    while p ** 2 <= n:

        if prime[p] == True:
            for i in range(p ** 2, n + 1, p):
                prime[i] = False
        p += 1
    final = []
    for p in range(2, n+1):
        if prime[p] == True:
            final.append(p)
    return final
