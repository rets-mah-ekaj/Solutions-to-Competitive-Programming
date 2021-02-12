def solve(self, matrix):
    n = len(matrix)
    c = sum(matrix[0]) + sum(matrix[n - 1])
    for i in range(n):
        for j in range(n):
            if i + j == n - 1 and i != 0 and i != n - 1:
                c += matrix[i][j]
    return c
