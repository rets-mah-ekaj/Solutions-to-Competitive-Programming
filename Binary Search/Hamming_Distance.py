def solve(self, x, y):
    x = bin(x)[2:]
    y = bin(y)[2:]
    c = 0
    if len(x) > len(y):
        y = '0' * (len(x) - len(y)) + y
    elif len(x) < len(y):
        x = '0' * (len(y) - len(x)) + x
    for i in range(max(len(x), len(y))):
        if x[i] != y[i]:
            c += 1
    return c
