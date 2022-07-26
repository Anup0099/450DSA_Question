#include <bits/stdc++.h>
using namespace std;
int maxProfit(int price[],int start,int end){
    if(end<=start){
        return 0;
    }
    int max_profit=0;
    for (int i = start; i < end; i++)
    {
        for (int j = i+1; j < end; j++){
            if(price[j]>price[i]){
                int curr_profit=price[j]-price[i]+maxProfit(price,start,j-1)+maxProfit(price,j+1,end);

                max_profit=max(max_profit,curr_profit); 
            }
        }
    }
    return max_profit;
    
}
int maxProfit2(vector<int>prices){
    int min_price=INT_MAX;
    int max_profit=0;
    for (int i = 0; i < prices.size(); i++)
    {
       min_price=min(min_price,prices[i]);
         max_profit=max(max_profit,prices[i]-min_price);
    }
    return max_profit;
}
int main(){
    
    vector<int>prices={7,1,5,3,6,4};
    cout<<maxProfit2(prices)<<endl;
    return 0;
}