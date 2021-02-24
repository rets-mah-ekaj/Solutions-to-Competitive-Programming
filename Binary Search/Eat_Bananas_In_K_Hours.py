def solve(self, piles, k):
    t = math.ceil(sum(piles) / k)
    l = max(piles)
    for i in range(t, l + 1):
        temp = sum([math.ceil(j / i) for j in piles])
        if temp <= k:
            return i
