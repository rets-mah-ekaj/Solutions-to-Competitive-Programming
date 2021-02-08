def solve(self, n):
    temp = 0
    while n != 1:
        if n % 2 == 0:
            temp += 1
            n /= 2
        else:
            temp += 1
            n = 3 * n + 1
    return temp + 1
