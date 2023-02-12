class Solution {
public:
  long long totalFuel;
long long dfs(int node, int par, vector<vector<int>> &adj, int seats)
{
    int ppl = 1;
    for (auto child : adj[node])
    {
        if (child != par)
        {
            ppl += dfs(child, node, adj, seats);
        }
    }
    if (node != 0)
    {
        totalFuel += ceil((double)ppl / seats);
    }
    return ppl;
}
long long minimumFuelCost(vector<vector<int>> &roads, int seats)
{
    int n = roads.size() + 1;
    vector<vector<int>> adj(n);
    for (auto r : roads)
    {
        adj[r[0]].push_back(r[1]);
        adj[r[1]].push_back(r[0]);
    }
    totalFuel = 0;
    dfs(0, -1, adj, seats);
    return totalFuel;
}
};