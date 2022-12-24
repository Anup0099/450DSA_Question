#include <bits/stdc++.h>
using namespace std;
bool check(int a, int b, vector<vector<int>> &adj)
{
    bool flag = true;
    for (int i = 0; i < adj[a].size(); i++)
    {
        if (adj[a][i] == b)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
bool isPossible(int n, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(n + 1);
    vector<int> odd;
    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() % 2 == 1)
        {
            odd.push_back(i);
        }
    }
    if (odd.size() == 0)
    {
        return true;
    }
    if (odd.size() == 2)
    {
        bool flag = check(odd[0], odd[1], adj);
        if (!flag)
        {
            set<int> s;
            for (int i = 0; i < adj[odd[0]].size(); i++)
            {
                s.insert(adj[odd[0]][i]);
            }
            for (int i = 0; i < adj[odd[1]].size(); i++)
            {
                s.insert(adj[odd[1]][i]);
            }
            if (s.size() + 1 == adj.size())
            {
                return false;
            }
            return true;
        }
    }
    if (odd.size() == 4)
    {
        bool flag1 = check(odd[0], odd[1], adj) & check(odd[2], odd[3], adj);
        bool flag2 = check(odd[0], odd[2], adj) & check(odd[1], odd[3], adj);
        bool flag3 = check(odd[0], odd[3], adj) & check(odd[1], odd[2], adj);
        return (flag1 | flag2 | flag3)
    }
    return false;
}
int main() {}