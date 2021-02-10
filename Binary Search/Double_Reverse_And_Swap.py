def solve(self, n):
    start, double, reverse, swap, s = True, False, False, False, 'xxy'
    for i in range(1, n + 1):
        if start == True:
            s = s * 2
            start = False
            double = True
        elif double == True:
            s = s[::-1]
            double = False
            reverse = True
        elif reverse == True:
            s = [i for i in s]
            for j in range(len(s)):
                if s[j] == 'x':
                    s[j] = 'y'
                elif s[j] == 'y':
                    s[j] = 'x'
            s = ''.join(s)
            swap = True
            start = True
    return s
