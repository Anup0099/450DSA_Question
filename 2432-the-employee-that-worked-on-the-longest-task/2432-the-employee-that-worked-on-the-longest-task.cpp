class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int anss = logs[0][1];int fi=INT_MAX;
        vector<int> ind;
        for(int i=1;i<logs.size();i++){
            int res = logs[i][1]-logs[i-1][1];
            if(res>anss){
                anss = res;
            }
        }
        for(int i=0;i<logs.size();i++){
            if(i==0){
                if(logs[i][1]==anss){
                    fi = min(fi,logs[i][0]);
                }
            }
            else if(logs[i][1]-logs[i-1][1]==anss){
                fi = min(fi,logs[i][0]);
            }
        }
        return fi;
    }
};