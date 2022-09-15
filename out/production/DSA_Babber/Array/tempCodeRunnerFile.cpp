void sorting(vector<vector<int>> &mat, int row, int col, int m, int n)
{
    vector<int> temp;
    int i = row, j = col;
    while (i < m && j < n)
    {
        temp.push_back(mat[i][j]);
        i++;
        j++;
    }
    sort(temp.begin(), temp.end());
    i = row, j = col;
    int k = 0;
    while (i < m && j < n)
    {
        mat[i][j] = temp[k];
        i++;
        j++;
        k++;
    }
}
vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    // row=0
    for (int col = 0; col < n; col++)
    {
        sorting(mat, 0, col, m, n);
    }
    // col=0
    for (int row = 1; row < n; row++)
    {
        sorting(mat, row, 0, m, n);
    }
    return mat;
}