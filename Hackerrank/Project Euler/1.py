t = int(input())
for i in range(t):
    n = int(input())
    n = n - 1
    x, y, z = map(int, [n/3, n/5, n/15])
    print(int(3 * x * (x+1) + 5 * y * (y+1) - 15 * z * (z + 1)) >> 1)
