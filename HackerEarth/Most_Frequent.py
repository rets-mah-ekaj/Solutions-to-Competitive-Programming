n, lst = int(input().strip()), list(map(int, input().split()))
dict_list = {}
for i in lst:
    if i in dict_list.keys():
        dict_list[i] += 1
    else:
        dict_list[i] = 0
print(max(dict_list, key = dict_list.get))
