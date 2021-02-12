def solve(self, s0, s1, n):
    if n == 0:
        return s0
    if n == 1:
        return s1
    a = [s0, s1]
    for i in range(2, n + 1):
        if i % 2 == 0:
            a.append(a[i - 1] + a[i - 2])
        else:
            a.append(a[i - 2] + a[i - 1])
    return a[-1]
