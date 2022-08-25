#include <bits/stdc++.h>
using namespace std;
// You are given an n x n integer matrix grid.

// Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that:

//     maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1.

// In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.

// Return the generated matrix.
// wrong answer

int findmax(vector<vector<int>> &grid, int i, int j)
{
    int maxa = INT_MIN;
    for (int x = i; x < i + 3; x++)
    {
        for (int y = j; y < j + 3; y++)
        {
            maxa = max(grid[x][y], maxa);
            cout << maxa << endl;
        }
    }
    return maxa;
}
vector<vector<int>> largestLocal(vector<vector<int>> &grid)
{
    int n = grid.size();
    vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2));
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            maxLocal[i][j] = findmax(grid, i, j);
        }
    }
    return maxLocal;
}
int main()
{
    vector<vector<int>> grid = {
        {1, 2, 3, 4, 5},
        {12, 13, 14, 15, 16},
        {11, 17, 18, 19, 6},
        {10, 9, 8, 7, 0}};
    largestLocal(grid);
    return 0;
}