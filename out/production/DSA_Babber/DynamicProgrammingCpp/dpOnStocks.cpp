#include <bits/stdc++.h>
using namespace std;
// best time to sell stocks
int maxProfit(vector<int> &prices)
{
    int mini = prices[0], profit = 0,  cost = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }
    return profit;
}
int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
}