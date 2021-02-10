def solve(self, prices, k):
    prices = sorted(prices)
    c = 0
    for i in prices:
        if k >= i:
            c += 1
            k = k - i
    return c
