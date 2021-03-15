from operator import mul
from functools import reduce

for _ in range(int(input())):
    n, k = map(int, input().split())
    num = [int(i) for i in input().strip()]
    prod_list = []
    for i in range(n-k):
        prod_list.append(reduce(mul, num[i:i+k]))
    print(max(prod_list))
