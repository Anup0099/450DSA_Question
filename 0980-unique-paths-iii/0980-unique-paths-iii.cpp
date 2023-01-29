class Solution {
public:
    int m,n,result,nonObstacle;
    vector<vector<int>>directions{{1,0},{-1,0},{0,-1},{0,1}};
    void backtrack(vector<vector<int>>&grid,int count,int i,int j){
       if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==-1){
           return ;
       } 
        if(grid[i][j]==2){
            if(count==nonObstacle){
                result++;
                
            }
            return;
        }
        grid[i][j]=-1;
        for(vector<int>&dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            backtrack(grid,count+1,new_i,new_j);
            
        }
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        result=0;
        nonObstacle=0;
        int start_x=0,start_y=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    nonObstacle++;
                }
                if(grid[i][j]==1){
                    start_x=i;
                    start_y=j;
                    
                    
                }
            }
        }
        nonObstacle +=1;
        int count=0;
        backtrack(grid,count, start_x, start_y);
        return result;
    }
};