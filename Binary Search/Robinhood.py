def solve(self, n, e, o, t):
    i = 0
    while n < t:
        if i % 2 == 0:
            n += n * (e / 100)
        else:
            n += n * (o / 100)
        i += 1
    return i
