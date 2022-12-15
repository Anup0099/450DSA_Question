#include <bits/stdc++.h>
// Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'.

// A region is captured by flipping all 'O's into 'X's in that surrounded region.

 
using namespace std;


void dfs(vector<vector<char>> &matrix, int x, int y, int r, int c)
{
    if (x < 0 || y < 0 || x >= r || y >= c || matrix[x][y] != 'O')
    {
        return;
    }
    matrix[x][y] = 'A';
    dfs(matrix, x + 1, y, r, c);
    dfs(matrix, x - 1, y, r, c);
    dfs(matrix, x, y + 1, r, c);
    dfs(matrix, x, y - 1, r, c);
}
void solve(vector<vector<char>> &board)
{
    int rows = board.size();
    int cols = board[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (board[i][j] == 'O')
            {
                dfs(board, i, j, rows, cols);
            }
        }
    }

}
int main() {}