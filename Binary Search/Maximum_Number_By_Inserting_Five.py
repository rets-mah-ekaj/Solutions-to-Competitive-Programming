def solve(self, n):
    ans = float('-inf')
    t = str(n)
    for i in range(len(t) + 1):
        c = t[:i] + '5' + t[i:]
        if i == 0 and t[0] == '-':
            continue
        ans = max(ans, int(c))
    return ans
