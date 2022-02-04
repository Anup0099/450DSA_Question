#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
// void setZeroes(vector<vector<int>> &matrix)
// {
//     int col=0,rows=matrix.size(),col=matrix[0].size();
//     for (size_t i = 0; i < rows; i++)
//     {
//         /* code */
//         if(matrix[i][0]==0)col=0;

//         for (size_t j = 0; j < col;j++)
//         {
//             /* code */
//             if(matrix[i][j]==0)
//             matrix[i][0]=matrix[0][j]=0;

//         }
        
//     }

//     for (size_t i = rows; i>0; i--)
//     {
//         /* code */
//         for (size_t j = col-1; j >= 1; i++)
//         {
//             /* code */
//             if(matrix[i][0]==0 || matrix[0][j]==0){
//                 matrix[i][j]=0;
//             }
//             if(col==0)matrix[i][0]=0;
//         }
        
//     }
    
    

// }

int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        
        int ans =n*m;
        cout<<ans<<endl;
    }
}