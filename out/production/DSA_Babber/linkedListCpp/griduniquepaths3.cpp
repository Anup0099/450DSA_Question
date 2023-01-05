#include <bits/stdc++.h>
using namespace std;
void dfs(int i, int j, vector<vector<int>> &grid, int n, int m, int &ans, int count, int countWillow)
{
    if (i < 0 || j < 0 || i >= n || j >= m )
    {
        return;
    }
    if (grid[i][j] == 2)
    {
        if (count == countWillow-1)
        {
            ans++;
        }
        return;
    }
    grid[i][j] = -1;
    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for (auto d : dir)
    {
        int x = i + d.first;
        int y = j + d.second;
        if (x >= 0 && y >= 0 && x < n && y < m)
        {
            if (grid[x][y] == 0)
            {

                dfs(x, y, grid, n, m, ans, count, countWillow+1);
            }
        }
    }
    grid[i][j] = 0;
}
int uniquepathsIII(vector<vector<int>> &grid)
{

    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    int sx, sy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 0)
            {
                count++;
            }
            if (grid[i][j] == 1)
            {
                sx = i;
                sy = j;
            }
        }
    }
    int ans = 0;
    int countWillow = 0;
    dfs(sx, sy, grid, n, m, ans, count, countWillow);
    return ans;
}
int main() {
    vector<vector<int>> grid = {{1, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 2, -1}};
    cout << uniquepathsIII(grid) << endl;
}



 int uniquePathsIII(vector<vector<int>>& G) {
        int startRow, startCol, cellsToVisit = 0;
        for(int i = 0; i < size(G); i++)
            for(int j = 0; j < size(G[0]); j++) 
                if(G[i][j] == 1) startRow = i, startCol = j;
                else if(G[i][j] != -1) cellsToVisit++;
				
        dfs(G, startRow, startCol, cellsToVisit);
        return ans;
    }
private:
    int ans = 0, dir[5] {0, 1, 0, -1, 0};  // <- a common way to make 4-way exploration in dfs concise
	
	// checks if cell is valid. If none of 3 points mentioned in post is satisfied, it is a valid cell
    bool isValidCell(vector<vector<int>>& G, int i, int j) {
        return i >= 0 && j >= 0 && i < size(G) && j < size(G[0]) && G[i][j] != -1 && G[i][j] != 3;
    }
	
    void dfs(vector<vector<int>>& G, int i, int j, int cellsToVisit) {
        if(not isValidCell(G, i, j)) return;   // return if cell is invalid
        if(G[i][j] == 2) {                     // reached end cell
            if(cellsToVisit == 0) ans++;       // if all cells are visited, increment valid path count
            return;                            // no further exploration possible after reaching end cell
        }
        G[i][j] = 3;                           // mark cell as visited
        for(int k = 0; k < 4; k++)             // explore path futher 4-directionally
            dfs(G, i + dir[k], j + dir[k+1], cellsToVisit - 1);    
        G[i][j] = 0;                           // backtrack
    }        