class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n= c.size();
        int m= c[0].size();
        int dely= c[1][1]-c[0][1];
        int delx= c[1][0]-c[0][0];
    
        
        for(int i=2;i<n;i++){
          //3,4
            int dy=c[i][1]-c[0][1];
            int dx=c[i][0]-c[0][0];
            
            if(dx*dely!= dy*delx){
                return false;
            }
        }
        return true;
    }
};