class Solution {
public:
    vector<vector<int>> directions  {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
            int n = maze.size();
    int m = maze[0].size();
    queue<pair<int, int>> q;
    q.push({entrance[0], entrance[1]});
    maze[entrance[0]][entrance[1]] = '+';

    int steps = 0;
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            if (p != make_pair(entrance[0], entrance[1]) and (x == 0 || y == 0 || x == n - 1 || y == m - 1))
            {
             
                
                    return steps;
                
            }
            for (auto dir : directions)
            {
                int newx = x + dir[0];

                int newy = y + dir[1];
                if (newx >= 0 && newx < n && newy >= 0 && newy < m && maze[newx][newy] !='+')
                {
                    maze[newx][newy] = '+';
                    q.push({newx, newy});
                }
            }
        }
        steps++;
    }
    return -1;
    }
};