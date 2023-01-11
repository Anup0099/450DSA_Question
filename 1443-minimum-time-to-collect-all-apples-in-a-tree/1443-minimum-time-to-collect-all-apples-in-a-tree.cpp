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
    for(int i =0;i<(int)edges.size();i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    return dfs(0, 0).first;
}
};