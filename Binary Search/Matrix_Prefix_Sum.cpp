vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int r = matrix.size();
    if (r == 0)
        return matrix;
    int c = matrix[0].size();
    if (c == 0)
        return matrix;

    for (int i = 0; i < r; ++i) {
        if (i > 0)
            matrix[i][0] += matrix[i - 1][0];
        for (int j = 1; j < c; ++j) {
            if (i == 0)
                matrix[i][j] += matrix[i][j - 1];
            else
                matrix[i][j] += matrix[i][j - 1] + matrix[i - 1][j] - matrix[i - 1][j - 1];
        }
    }
    return matrix;
}
