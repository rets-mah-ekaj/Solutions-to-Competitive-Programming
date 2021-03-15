import math
def func(prime, n):
    temp = prime[-1]
    while len(prime) < n:
        temp += 2
        for i in prime:
            if i > math.floor(temp ** 0.5):
                prime.append(temp)
                break
            elif (temp % i == 0):
                break
    return prime

prime = [2, 3]
for _ in range(int(input())):
    n = int(input())
    if n > len(prime):
        prime = func(prime, n)
    print(prime[n-1])
