class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> mp1,mp2;
        for(int i=0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    mp1[i]++;
                    mp2[j]++;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(mp1[i]!=0 ||mp2[j]!=0){
                    matrix[i][j] = 0;
                }
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};