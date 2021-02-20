def solve(self, n):
    l = list(str(n))
    for i in range(len(l)):
        if l[i] != '3':
            l[i] = '3'
            return int(''.join(l))
    return n
