def solve(self, s):
    temp, res, c = '', [], 0
    for i in s:
        if c == 0 and len(temp) > 0:
            res.append(temp)
            temp = ''
        temp += i
        if i == '(':
            c += 1
        else:
            c -= 1
    res.append(temp)
    return res
