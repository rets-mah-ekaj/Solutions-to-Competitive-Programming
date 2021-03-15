t = int(input())
for i in range(t):
    key = 2
    n = int(input())
    maxfactor = 0
    while n > 1:
        while n % key == 0:
            maxfactor = key
            n //= key
        key += 1
        if key ** 2 > n:
            if n > 1:
                maxfactor = n
                break
    print(maxfactor)
