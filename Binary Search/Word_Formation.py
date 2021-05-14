from collections import Counter
class Solution:
    def solve(self, words, letters):
        reference = Counter(letters)
        maxi = 0
        for i in words:
            w = Counter(i)
            l = len(i)
            c = 0
            for j in w.keys():
                if w[j] <= reference[j]:
                    c += 1
                    pass
                else:
                    break
                if l > maxi and len(w) == c:
                    maxi = l
        return maxi
