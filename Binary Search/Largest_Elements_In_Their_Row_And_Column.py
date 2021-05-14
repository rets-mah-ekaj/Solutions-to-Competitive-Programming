class Solution:
    def solve(self, m):
        r = len(m)
        c = len(m[0])
        sr = [0 for i in range(r)]
        sc = [0 for i in range(c)]
        for i in range(r):
            for j in range(c):
                if m[i][j] == 1:
                    sr[i] += 1
                    sc[j] += 1
        count = 0
        for i in range(r):
            if sr[i] == 1:
                temp = 0
                for j in range(c):
                    if sc[j] == 1 and m[i][j] == 1:
                        temp += 1
                if temp == 1:
                    count += 1
        return count
