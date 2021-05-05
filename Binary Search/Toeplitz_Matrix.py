class Solution:
    def solve(self, matrix):
        r, c = len(matrix), len(matrix[0])
        d = {}
        for i in range(r):
            for j in range(c):
                k = i - j
                if k in d:
                    if d[k] != matrix[i][j]:
                        return False
                else:
                    d[k] = matrix[i][j]
        return True
