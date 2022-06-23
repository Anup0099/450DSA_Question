#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, time;
    node(int _x, int _y, int _time)
    {

        x = _x;
        y = _y;
        time = _time;
    }
};
int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<node> q;
    int countoranges = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push(node(i, j, 0));
            }
            if (grid[i][j] != 0)
            {
                countoranges++;
            }
        }
    }
    int ans = 0;
    int count = 0;
    while (!q.empty())
    {

        int x = q.front().x;
        int y = q.front().y;
        int time = q.front().time;
        q.pop();
        count++;
        ans = max(ans, time);
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) //  if the cell is not rotten and is not visited   and is not a wall    and is not a fresh orange   and is not a rotten orange
            {
                grid[nx][ny] = 2;
                q.push(node(nx, ny, time + 1)); // push the cell in the queue   and increase the time by 1
            }
        }
    }
    if (count == countoranges)
    {
        return ans;
    }
    return -1; // if the queue is empty and there are still fresh oranges
    }
    int main()
    {
        vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 2}};
        cout << orangesRotting(grid);
    }