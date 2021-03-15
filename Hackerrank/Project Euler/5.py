def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

for _ in range(int(input())):
    temp, a = int(input()), 1
    for i in range(1, temp + 1):
        a = int((a * i) / gcd(a, i))
    print(a)
