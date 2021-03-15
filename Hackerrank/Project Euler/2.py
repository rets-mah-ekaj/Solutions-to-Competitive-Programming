t = int(input())
for i in range(t):
    n = int(input())
    total = 0
    next_num = 2
    pre_num = 0
    while next_num < n:
        new = 4 * next_num + pre_num
        total += next_num
        pre_num = next_num
        next_num = new
    print(total)
