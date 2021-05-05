class Solution:
    def solve(self, s):
        ans, n, i, j, temp = '', len(s), 0, 0, 0
        while True:
            while s[i] == s[j]:
                temp, j = temp + 1, j + 1
                if j == n:
                    break
            ans += str(temp) + s[i]
            if j == n:
                break
            i, temp = j, 0
        return ans
