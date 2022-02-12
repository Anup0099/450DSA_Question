#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;
int knapsack(int wt[],int profit[],int w,int N){
    if(N==0 || w==0)return 0;
    if(wt[N]>w)return knapsack(wt,profit,w,N-1);//this is for skipping the case
    else
        return max(knapsack(wt,profit,w,N-1),profit[N]+knapsack(wt,profit,w-wt[N],N-1));//this is for take the case
}

//coin change

  int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int dp[n+1][amount+1];
        for (size_t i = 0; i <=n; i++)
        {
            for (size_t j = 0; j <=amount; j++)
            {
                if(j==0){
                    dp[i][j]=0;
                }else if(i==0){
                    dp[i][j]=1e5;
                }else if(coins[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }else{
                    dp[i][j] = min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
            }
        }
            return dp[n][amount]>1e4?-1:dp[n][amount];
        
    }
int main(){


}