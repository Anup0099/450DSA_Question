class Solution {
public:
  typedef pair<int, int> p;

int prims(vector<vector<pair<int, int>>> &adj, int n)
{
    priority_queue<p, vector<p>, greater<p>> pq;
    pq.push({0, 0});
    vector<bool> mst(n, false);
    int sum = 0;
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int wt = it.first;
        int node = it.second;
        if (mst[node])
            continue;

        mst[node] = true;
        sum += wt;
        for (auto &tmp : adj[node])
        {
            int nbr = tmp.first;
            int wt = tmp.second;
            if (!mst[nbr])
            {
                pq.push({wt, nbr});
            }
        }
    }
    return sum;
}

int minCostConnectPoints(vector<vector<int>> &points)
{
    // given array of points representing integer coordinates of some points on a 2d plane where points[i]=[xi,yi] the cost of connecting two points [xi,yi] [xj,yj] is the manhattan between them [xi-xj]+[yi-yj] return the minimum cost to make all points connected.
    int n = points.size();
    vector<vector<pair<int, int>>> adj(n + 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x1 = points[i][0];
            int x2 = points[j][0];
            int y1 = points[i][1];
            int y2 = points[j][1];
            int d = abs(x1 - x2) + abs(y1 - y2);

            adj[i].push_back({j, d});
            adj[j].push_back({i, d});
        }
    }
    return prims(adj, n);
}
};