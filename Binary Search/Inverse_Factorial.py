def solve(self, a):
    i = 1
    while True:
        if a % i == 0:
            a //= i
        else:
            break
        i += 1
    if a == 1:
        return i - 1
    else:
        return -1
