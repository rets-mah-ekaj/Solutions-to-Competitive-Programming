def solve(self, matrix):
    n = len(matrix)
    if n == 0 or len(matrix[0]) == 0:
        return matrix
    for i in range(n):
        for j in range(len(matrix[i])):
            if matrix[i][j] == 0:
               matrix[i][j] = 1
            else:
                matrix[i][j] = 0
        matrix[i] = matrix[i][::-1]
    return matrix
