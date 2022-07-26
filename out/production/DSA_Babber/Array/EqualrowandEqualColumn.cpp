#include <bits/stdc++.h>
using namespace std;
// Given a 0-indexed n x n integer matrix grid, return the number of pairs (Ri, Cj) such that row Ri and column Cj are equal.
// A row and column pair is considered equal if they contain the same elements in the same order (i.e. an equal array).

int equalPairs(vector<vector<int>> &grid)
{

    int n = grid.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool flag = 0;
            for (int k = 0; k < n; k++)
            {
                if (grid[i][k] == grid[k][j])
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> grid = {{3, 2, 1}, {1, 7, 6}, {2, 7, 7}};
    cout << equalPairs(grid) << endl;
    return 0;
}