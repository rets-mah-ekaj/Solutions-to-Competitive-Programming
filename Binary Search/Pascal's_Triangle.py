def solve(self, n):
    x = 1
    temp = [x]
    for i in range(1, n + 1):
        y = (x * (n - i + 1)) // i
        temp.append(y)
        x = y
    return temp
