#include <bits/stdc++.h>
using namespace std;

// vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
// {
//     vector<int> ans;
//     vector<int> indegree(numCourses, 0);
//     vector<int> adj[numCourses];
//     for (int i = 0; i < prerequisites.size(); i++)
//     {
//         int u = prerequisites[i][0];
//         int v = prerequisites[i][1];
//         adj[v].push_back(u);
//         indegree[u]++;
//     }
//     queue<int> q;
//     for (int i = 0; i < indegree.size(); i++)
//     {
//         if (indegree[i] == 0)
//             q.push(i);
//     }
//     while (!q.empty())
//     {
//         int node = q.front();
//         q.pop();
//         ans.push_back(node);
//         for (auto x : adj[node])
//         {
//             indegree[x]--;
//             if (indegree[x] == 0)
//                 q.push(x);
//         }
//     }
//     if (ans.size() == numCourses)
//         return ans;
//     else
//         return {};
// }
bool dfs(vector<vector<int>> &graph, vector<int> &colors, vector<int> &res, int i)
{
    colors[i] = 1;
    for (auto x : graph[i])
    {
        if (colors[x] == 1)
            return true;
        if (colors[x] == 0)
        {

            if (dfs(graph, colors, res, x))
                return true;
        }
    }
    colors[i] = 2;
    res.push_back(i);
    return false;
}
vector<int> findOrder(int numcourses, vector<vector<int>> &prerequisites)
{
    vector<int> colors(numcourses, 0), res;
    vector<vector<int>> graph(numcourses);

    // build graph
    for (auto pre : prerequisites)
    {
        graph[pre[0]].push_back(pre[1]);
    }
    for (int i = 0; i < numcourses; i++)
    {
        if (!colors[i])
        {
            if (dfs(graph, colors, res, i))
                return {};
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> prerequisites(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            prerequisites[i].push_back(x);
        }
    }
    vector<int> ans = findOrder(n, prerequisites);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
