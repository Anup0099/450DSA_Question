#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100004];
int height;
void dfs(int node, int par, int level = 1)
{
    cout << node << "";
    height = max(height, level);
    for (auto it : adj[node])
    {
        if (it != par)
        {
            dfs(it, node, level + 1);
        }
    }
}

int main() {}