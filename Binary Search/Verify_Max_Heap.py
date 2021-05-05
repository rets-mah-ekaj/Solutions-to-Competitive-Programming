class Solution:
    def solve(self, s):
        lst = []
        n = len(s)
        if n == 0 or n == 1:
            return -1
        for i in range(n):
            if s[i] not in lst:
                lst.append(s[i])
            else:
                return i
        return -1
