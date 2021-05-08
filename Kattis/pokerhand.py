string = input().split()
y = []
for i in range(len(string)):
    y.append(string[i][0])
y = max(set(y), key = y.count)
print(y)
print(''.join(string).count(y))
