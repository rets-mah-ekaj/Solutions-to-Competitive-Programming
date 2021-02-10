def solve(self, arr):
    n = len(arr)
    if n == 0:
        return False
    maximum = max(0, max(arr))
    hash_list = [0] * (maximum + 1)
    for i in range(n):
        hash_list[arr[i]] += 1
    for i in range(1, maximum + 1):
        if (hash_list[i] == 0):
            continue
        for j in range(1, maximum+1):
            if (i == j and hash_list[i] == 1) or hash_list[j] == 0:
                continue
            val = int(math.sqrt(i ** 2 + j ** 2))
            if val ** 2 != i ** 2 + j ** 2:
                continue
            if val > maximum:
                continue
            if (hash_list[val]):
                return True
    return False
