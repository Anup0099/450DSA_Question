#include <bits/stdc++.h>
using namespace std;
vector<int> candystor(int candies[], int n, int k)
{
    sort(candies, candies + n);
    int mini = 0;
    int buy = 0;
    int free = N - 1;
    while (buy <= free)
    {
        mini += candies[buy];
        buy++;
        free = free - k;
    }
    int maxi = 0;
    buy = N - 1;
    free = 0;
    while (free <= buy)
    {
        maxi += candies[buy];
        buy--;
        free = free + k;
    }
    vector<int> ans;
    ans.push_back(mini);
    ans.push_back(maxi);
    return ans;
}
int main() {}