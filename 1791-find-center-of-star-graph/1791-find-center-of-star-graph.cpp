class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int n = 0;
    for (auto edge : edges)
    {
        n = max(n, max(edge[0], edge[1]));
    }
    vector<int> indegree(n + 1);
    for (int i = 0; i < edges.size(); i++)
    {
        indegree[edges[i][0]]++;
        indegree[edges[i][1]]++;
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == n - 1)
        {
            res = i;
            break;
        }
    }
    return res;
    }
};