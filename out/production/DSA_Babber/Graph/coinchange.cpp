#include <bits/stdc++.h>
using namespace std;


int getCoins(int coins[],int n,int sum){
    if(n==0)return 0;
    if(sum==0)return 1;
    int res = getCoins(coins,n-1,sum); //no coin    //recursion 
    if(coins[n-1]<=sum){
        res = res + getCoins(coins,n,sum-coins[n-1]);
    }//if coin[n-1] is less than sum then add it to the result and recurse for the remaining sum 
    return res;
}


int main(){
    int coins[] = {1,2,3};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum = 4;
    cout<<getCoins(coins,n,sum)<<endl;
    return 0;


}