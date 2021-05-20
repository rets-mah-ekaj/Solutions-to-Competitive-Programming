class Solution:
    def sortSentence(self, s: str) -> str:
        s = [i for i in s.split()]
        n = []
        l = len(s)
        for i in range(l):
            n.append(s[i][-1])
            s[i] = s[i][:-1]
        n = [int(i) for i in n]
        ans = [''] * l
        for i in range(l):
            ans[n[i] - 1] += s[i]

        return ' '.join(ans)
