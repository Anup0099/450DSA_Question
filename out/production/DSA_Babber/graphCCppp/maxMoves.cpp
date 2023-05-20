#include <bits/stdc++.h>
using namespace std; // You are given a 0-indexed m x n matrix grid consisting of positive integers.

// You can start at any cell in the first column of the matrix, and traverse the grid in the following way:

// From a cell (row, col), you can move to any of the cells: (row - 1, col + 1), (row, col + 1) and (row + 1, col + 1) such that the value of the cell you move to, should be strictly bigger than the value of the current cell.
// Return the maximum number of moves that you can perform.
bool isValid(int r,int c,int m,int n){
    if(r>=0 && r<m && c>=0 && c<n){
        return true;
    }
    return false;
}
int recur(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&grid,int m,int n){
   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
    if(isValid(i-1,j+1,m,n) && grid[i-1][j+1]>grid[i][j]){
        ans=max(ans,1+recur(i-1,j+1,dp,grid,m,n));
    }
    if(isValid(i,j+1,m,n) && grid[i][j+1]>grid[i][j]){
        ans=max(ans,1+recur(i,j+1,dp,grid,m,n));
    }
    if(isValid(i+1,j+1,m,n) && grid[i+1][j+1]>grid[i][j]){
        ans=max(ans,1+recur(i+1,j+1,dp,grid,m,n));
    }
    return dp[i][j]=ans+1;
}
int maxMoves(vector<vector<int>> &grid)
{
    bool isValid(int r,int c,int m,int n){
    if(r>=0 && r<m && c>=0 && c<n){
        return true;
    }
    return false;
}
int recur(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&grid,int m,int n){
   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
    if(isValid(i-1,j+1,m,n) && grid[i-1][j+1]>grid[i][j]){
        ans=max(ans,1+recur(i-1,j+1,dp,grid,m,n));
    }
    if(isValid(i,j+1,m,n) && grid[i][j+1]>grid[i][j]){
        ans=max(ans,1+recur(i,j+1,dp,grid,m,n));
    }
    if(isValid(i+1,j+1,m,n) && grid[i+1][j+1]>grid[i][j]){
        ans=max(ans,1+recur(i+1,j+1,dp,grid,m,n));
    }
    return dp[i][j]=ans+1;
}
int maxMoves(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, recur(i, 0, dp, grid, m, n));
    }
    return ans-1;
}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}