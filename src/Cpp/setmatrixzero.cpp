#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;
// void setZeroes(vector<vector<int>>&matrix){
//     int rows = matrix.size();
//     int cols = matrix.size();
//     for (size_t i = 0; i < rows; i++)
//     {
        
//     for (size_t j = 0; j < matrix[0].size(); j++)
//     {
//         if(matrix[i][j]==0){
//             int ind =i-1;
//             while (ind>=0)
//             {
//                 if(matrix[ind][j]!=0){
//                     matrix[ind][j]=-1;
//                 }
//                 ind--;
//             }
            
//         }

//     }
    
//     }
    
// }

void setZero(vector<vector<int>>&matrix){
    int rows=matrix.size(),cols=matrix[0].size();
    vector<int>dummr1(rows,-1),dumm2(cols,-1);
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if(matrix[i][j]==0){
                dummr1[i]=0;
                dumm2[j]=0;
            }
        }
        
    }

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if(dummr1[i]==0 || dumm2[j]==0){
                matrix[i][j]=0;
            } 
        }
        
    }
    
    
}

int main(){
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZero(matrix);
    for (size_t i = 0; i < matrix.size(); i++)
    {
        for (size_t j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}