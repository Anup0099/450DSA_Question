#include <bits/stdc++.h>
using namespace std;
// transpose of matrix

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reversing eachrow of Matrix
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

vector<vector<int>> rotate2(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> temp(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][n - i - 1] = matrix[i][j];
        }
    }
    return temp;
}

int main() {}