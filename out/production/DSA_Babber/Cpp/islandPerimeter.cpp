#include <bits/stdc++.h>
using namespace std;
bool isValid(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
int islandPerimeter(vector<vector<int>> &grid)
{
    int n= grid.size();
    int m= grid[0].size();  
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                for(int k=0;k<4;k++)
                {
                    int nx=i+x[k];
                    int ny=j+y[k];
                    if(!isValid(nx,ny,n,m) || grid[nx][ny]==0)
                    {
                        ans++;
                    }
                }
            }
        }
    }
    return ans;
}
int main() {}