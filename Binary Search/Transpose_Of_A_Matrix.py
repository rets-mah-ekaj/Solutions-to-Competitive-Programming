def solve(self, matrix):
    n = len(matrix)
    matrix = [[matrix[j][i] for j in range(n)] for i in range(n)]
    return matrix
