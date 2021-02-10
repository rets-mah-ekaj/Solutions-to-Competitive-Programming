def solve(self, s):
    s = s.split()
    t = ''
    for i in s:
        if i.lower() != 'and':
            t += i[0].upper()
    return t
