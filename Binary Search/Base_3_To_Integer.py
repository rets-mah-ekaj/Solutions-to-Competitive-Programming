def solve(self, s):
    s = s[::-1]
    ans = 0
    for i in range(len(s)):
        ans += int(s[i]) * pow(3, i)
    return ans
