#include <bits/stdc++.h>
using namespace std;
class solution
{
    void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, vector<vector<int>> &vis, int di[], int dj[])
    {

        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(move);
            return;
        }
        string dir="DLRU";
        for (int ind = 0; ind <4;ind++){
            int nexti = i+di[ind];
            int nextj = j+dj[ind];
            if(nexti>=0 && nextj>=0 && nexti <n && nextj <n && !vis[nexti][nextj] && a[nexti][nextj]==1){
                vis[i][j] = 1;
                solve(nexti, nextj,a,n,ans,move+dir[ind],vis,di,dj);
                vis[i][j] = 0;
            }
        }
    }
}

int
main()
{
}