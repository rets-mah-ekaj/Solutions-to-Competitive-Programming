mydict = {}
for _ in range(int(input())):
    color, radius = map(str, input().split())
    if color.isdigit() == True:
        color, radius = radius, color
        radius = str(int(radius) // 2)
    radius = int(radius)
    mydict[color] = radius
mydict = {k: v for k, v in sorted(mydict.items(), key = lambda item: item[1])}
print(mydict)
for i in mydict.keys():
    print(i)
