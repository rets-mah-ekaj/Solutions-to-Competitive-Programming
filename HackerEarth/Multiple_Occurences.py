for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = set(a)
    total = 0
    for i in b:
        total += abs(a.index(i) - (n - 1 - a[::-1].index(i)))
    print(total)
