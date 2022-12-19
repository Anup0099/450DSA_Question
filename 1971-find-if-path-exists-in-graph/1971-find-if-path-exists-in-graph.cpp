class Solution {
public:
    bool check(unordered_map<int,vector<int>>&mp,int s,int d,vector<bool>&visited)
{
    if(s==d)
    {
        return true;
    }
    visited[s]=true;
    for(auto it:mp[s])
    {
        if(!visited[it])
        {
            if(check(mp,it,d,visited))
            {
                return true;
            }
        }
    }
    return false;
}
bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
{
    unordered_map<int, vector<int>> mp;
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        mp[u].push_back(v);
        mp[v].push_back(u);
       
    }
     vector<bool>visited(n,false);
        
    return check(mp,source,destination,visited);
}
};