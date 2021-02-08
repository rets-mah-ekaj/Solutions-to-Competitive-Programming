def solve(self, n):
    c3, c5 = 0, 0
    mylist = []
    for i in range(1, n + 1):
        c3 += 1
        c5 += 1
        d = ''
        if c3 == 3:
            d += 'Fizz'
            c3 = 0
        if c5 == 5:
            d += 'Buzz'
            c5 = 0
        if d == '':
            mylist.append(str(i))
        else:
            mylist.append(d)
    return mylist
