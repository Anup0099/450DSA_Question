#include <bits/stdc++.h> 
using namespace std;
int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());
    int ans = 0;
    for(int i=0;i<costs.size();i++){
        if(coins>=costs[i]){
            coins-=costs[i];
            ans++;
        }
        else{ 
            break;
        }
    }
    return ans;
}
//1 1 2 3 4
int main() {
    vector<int> costs = {1,3,2,4,1};
    int coins = 7;
    cout<<maxIceCream(costs,coins);
    return 0;
} 