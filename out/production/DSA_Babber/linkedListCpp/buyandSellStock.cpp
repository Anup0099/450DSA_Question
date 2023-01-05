#include <bits/stdc++.h>
using namespace std;
int profit(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;
    int cost = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }
    return profit;
}
int main() {}