#include <bits/stdc++.h> 
using namespace std;
// There is an N\times NN×N grid, with rows numbered 11 to NN from top to bottom and columns numbered 11 to NN from left to right. The cell at the intersection of the ii-th row and jj-th column is denoted (i, j)(i,j).

// Chef is standing at position (x_1, y_1)(x 
// 1
// ​
//  ,y 
// 1
// ​
//  ) of this grid. He wants to reach position (x_2, y_2)(x 
// 2
// ​
//  ,y 
// 2
// ​
//  ).

// To achieve this, he can take either horizontal or vertical steps. That is, from cell (x, y)(x,y), he can move to one of (x-1, y), (x+1, y), (x, y-1), (x, y+1)(x−1,y),(x+1,y),(x,y−1),(x,y+1).

// However, Chef does not need to stay within the grid, that is, he can choose to go outside it if he so wishes.

// The cost of a horizontal/vertical step is 00 if both the starting and ending square lie outside the grid, and 11 otherwise.
// Formally, suppose Chef takes one step from (x, y)(x,y) to (x', y')(x 
// ′
//  ,y 
// ′
//  ). Then,

// If (x, y)(x,y) lies within the grid, the cost of this step is 11
// If (x', y')(x 
// ′
//  ,y 
// ′
//  ) lies within the grid, the cost of this step is 11
// If both the above don't hold, the cost of this step is 00
// Find the minimum cost to reach (x_2, y_2)(x 
// 2
// ​
//  ,y 
// 2
// ​
//  ) from (x_1, y_1)(x 
// 1
// ​
//  ,y 
// 1
// ​
//  ).
int main() {
    int t;
    cin>>t;
    while(t--){
        //using recursion
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int dp[n][n];
        dp[0][0]=a[0][0];
        for(int i=1; i<n; i++){
            dp[0][i]=dp[0][i-1]+a[0][i];
        }
        for(int i=1; i<n; i++){
            dp[i][0]=dp[i-1][0]+a[i][0];
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++){
                dp[i][j]=min(dp[i-1][j], dp[i][j-1])+a[i][j];
            }
        }
        cout<<dp[n-1][n-1]<<endl;
        
    }
} 