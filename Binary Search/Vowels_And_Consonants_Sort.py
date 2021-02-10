def solve(self, s):
    v, c = [], []
    for i in s:
        if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u':
            v.append(i)
        else:
            c.append(i)
    v = sorted(v)
    c = sorted(c)
    return ''.join(v + c)
