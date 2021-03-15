limit = 1000000
suml, a = [0] * limit, [True] * limit
a[0] = a[1] = False
for i, isprime in enumerate(a):
    if isprime:
        suml[i] = suml[i-1] + i
        for n in range(i*i, limit, i):
            a[n] = False
    else:
        suml[i] = suml[i-1]

t = int(input())
for a0 in range(t):
    n = int(input())
    print(suml[n])
