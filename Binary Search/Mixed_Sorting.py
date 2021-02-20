def solve(self, nums):
    even = []
    odd = []
    for i in nums:
        if i % 2 == 0:
            even.append(i)
        else:
            odd.append(i)
    even = sorted(even)
    odd = sorted(odd)[::-1]
    final = []
    for i in nums:
        if i % 2 == 0:
            final.append(even[0])
            even.pop(0)
        else:
            final.append(odd[0])
            odd.pop(0)
    return final
