#include <bits/stdc++.h>
using namespace std;
// Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

// In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

// Return an array containing the index of the row, and the number of ones in it.
vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    vector<int> ans;
    int n = mat.size();
    int m = mat[0].size();
    int maxOnes = 0;
    int row = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxOnes)
        {
            maxOnes = count;
            row = i;
        }
    }
    ans.push_back(row);
    ans.push_back(maxOnes);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}