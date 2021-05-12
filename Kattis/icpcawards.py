n = int(input())
lst = []
c = 0
while c != 12:
    uni, team = input().split()
    if uni not in lst:
        c += 1
        lst.append(uni)
        print(' '.join([uni, team]))
