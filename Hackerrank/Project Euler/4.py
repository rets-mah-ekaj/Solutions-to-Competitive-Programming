for _ in range(int(input())):
    n = int(input())
    max_in_n = -2**31
    for i in range(999,99,-1):
        for j in range(999,i-1,-1):
            temp = i*j
            if temp > n:
                continue
            if temp <= max_in_n:
                break
            if str(temp) == str(temp)[::-1] and temp < n:
                max_in_n = temp
    print(max_in_n)
