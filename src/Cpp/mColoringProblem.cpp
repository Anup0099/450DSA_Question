#include <bits/stdc++.h>
using namespace std;
bool isSafe(int node , int color[],bool graph[101][101],int n,int col)
{
    for (int k = 0; k < n; k++)
    {
        if (k != node && graph[k][node] == 1 && color[k] == col)
        {
            return false;
        }
    }
    return true;
}
bool solve(int node, int color[], int, , int N, bool graph[101][101])
{
    if (node == N)
    {
        return true;
    }
    for (int i = 1; i <= m; i++)
    {
        if (isSafe(node, color, graph, N, i))
        {
            color[node] = i;
            bool restOfTheGraph = solve(node + 1, color, m, N, graph);
            if (restOfTheGraph)
            {
                return true;
            }
            color[node] = 0;
        }
    }
    return false;
}
bool grpahColoring(bool graph[101][101], int m, int N)
{
    int color[N] = {0};
    if (solve(0, color, m, N, graph))
    {
        return true;
    }
    return false;
}
int main() {
    int n, m;
    cin >> n >> m;
    bool graph[101][101];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }
    if (grpahColoring(graph, m, n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}