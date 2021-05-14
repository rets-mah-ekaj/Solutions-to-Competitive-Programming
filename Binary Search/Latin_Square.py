class Solution:
    def solve(self, matrix):
        n = len(matrix)
        d = {}
        for i in range(n):
            for j in range(n):
                if matrix[i][j] not in d:
                    d[matrix[i][j]] = 1
                else:
                    d[matrix[i][j]] += 1
        for i in d.keys():
            if d[i] != n:
                return False

        for i in range(n):
            if len(set(matrix[i])) != n:
                return False

        for j in range(n):
            temp = []
            for i in range(n):
                if matrix[i][j] not in temp:
                    temp.append(matrix[i][j])
            if len(set(temp)) != n:
                return False
        return True
