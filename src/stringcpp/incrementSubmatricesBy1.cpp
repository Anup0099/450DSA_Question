#include <bits/stdc++.h>
using namespace std;
//  You are given a positive integer n, indicating that we initially have an n x n 0-indexed integer matrix mat filled with zeroes.

// You are also given a 2D integer array query. For each query[i] = [row1i, col1i, row2i, col2i], you should do the following operation:

// Add 1 to every element in the submatrix with the top left corner (row1i, col1i) and the bottom right corner (row2i, col2i). That is, add 1 to mat[x][y] for for all row1i <= x <= row2i and col1i <= y <= col2i.
// Return the matrix mat after performing every query.

vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
{
    vector<vector<int>> mat(n, vector<int>(n, 0));
    for (auto q : queries)
    {
        int row1 = q[0];
        int col1 = q[1];
        int row2 = q[2];
        int col2 = q[3];
        mat[row1][col1]++;
        if (row2 + 1 < n)
            mat[row2 + 1][col1]--;
        if (col2 + 1 < n)
            mat[row1][col2 + 1]--;
        if (row2 + 1 < n && col2 + 1 < n)
            mat[row2 + 1][col2 + 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            mat[i][j] += mat[i][j - 1];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i < n; i++)
        {
            mat[i][j] += mat[i - 1][j];
        }
    }
    return mat;
}
vector<vector<int>>rangeAddqueries(int n,vector<vector<int>>&queries){
        vector<vector<int>>mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=0;
            }
        }
        for()
}
int main() {}