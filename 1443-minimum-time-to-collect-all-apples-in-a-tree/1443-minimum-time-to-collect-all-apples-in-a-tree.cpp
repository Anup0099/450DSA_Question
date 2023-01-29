class Solution {
public:
   vector<int> adj[100005];
vector<bool> fruit;
pair<int, int> dfs(int node, int parent)
{
    pair<int, int> v = {0, fruit[node]};
    for (int child : adj[node])
    {
        if (child != parent)
        {
            pair<int, int> temp = dfs(child, node);
            v.first += (2 + temp.first )* temp.second;
            v.second |= temp.second;
        }
    }
    return v;
}
int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
{
   fruit = hasApple;
    for (auto &edge : edges)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    
    return dfs(0, 0).first;
}
};