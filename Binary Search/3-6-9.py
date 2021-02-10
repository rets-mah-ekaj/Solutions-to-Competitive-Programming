def solve(self, n):
    t = [i for i in range(n + 1)]
    for i in range(1, n + 1):
        if i % 3 == 0 or '3' in str(i) or '6' in str(i) or '9' in str(i):
            t[i] = 'clap'
    t.pop(0)
    t = [str(i) for i in t]
    return t
