#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> diagonals(vector<vector<int>> mat)
{
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mp;
    int m = mat.size();
    int n = mat[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mp[i - j].push(mat[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = mp[i - j].top();
            mp[i - j].pop();
        }
    }
    for(auto it:mp){
     cout << it.first << " " << it.second<< endl;
    }
    return mat; 
}
int main()
{
    vector<vector<int>> mat = {{3, 3, 1, 1}, {2, 2, 1, 2}, {1, 1, 1, 2}};
    vector<vector<int>> ans = diagonals(mat);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}