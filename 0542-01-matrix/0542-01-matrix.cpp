class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>grid = mat;

        queue<vector<int>>q;
        for(int i = 0 ;i< n;i++){
            for(int j = 0;j < m ;j++){
                if(!grid[i][j]){
                    vis[i][j] = 1;
                    q.push({i,j,0});
                }
            }
        }
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        while(!q.empty()){
            auto v = q.front();
            q.pop();
            int row = v[0], col = v[1], dis = v[2];
            for(int i = 0 ;i < 4;i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if(nrow >=0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && mat[nrow][ncol] != 0){
                    vis[nrow][ncol] = 1;
                    grid[nrow][ncol] = dis +1;
                    q.push({nrow,ncol,dis+1});
                }
            }
        }
        return grid;
    }
};