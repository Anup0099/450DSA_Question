#include <bits/stdc++.h>
using namespace std;
int minimumSumPath(vector<vector<int>> &grid)
{
    int n = grid.size;
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
            {
                dp[i][j] = grid[i][j];
            }
            else
            {
                int up = grid[i][j];
                if (i > 0)
                {
                    up += dp[i - 1][j];
                }
                else
                {
                    up += 1e9;
                }
                int left = grid[i][j];
                if (j > 0)
                {
                    left += dp[i][j - 1];
                }
                else
                {
                    left += 1e9;
                }
                dp[i][j] = min(up, left);
            }
        }
    }
    return dp[n - 1][m - 1];
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
            }
        }
        cout<<minimumSumPath(grid)<<endl;
    }
    return 0; 
}