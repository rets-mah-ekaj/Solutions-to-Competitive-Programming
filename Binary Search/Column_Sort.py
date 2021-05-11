class Solution:
    def solve(self, matrix):
        r, c = len(matrix), len(matrix[0])
        for i in range(c):
            a = []
            for j in range(r):
                a.append(matrix[j][i])
            a = sorted(a)
            for j in range(r):
                matrix[j][i] = a[j]
        return matrix
