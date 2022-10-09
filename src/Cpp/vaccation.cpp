#include <bits/stdc++.h>
using namespace std;
const int N =1e5+10;
int dp[N][4];
int f(int ind, int flag)
{
    if (ind == n)
        retun 0;
    if (dp[ind][flag] != -1)
        return dp[ind][flag];
    int cost = INT_MIN;
    if (flag == 0)
    {
        cost = max(cost, f(ind + 1, 1));
        cost = max(cost, f(ind + 1, 2));
        cost = max(cost, f(ind + 1, 3));
    }
    else if (flag == 1)
    {
        cost = max(cost, f(ind + 1, 2));
        cost = max(cost, f(ind + 1, 3));
    }
    else if (flag == 2)
    {
        cost = max(cost, f(ind + 1, 1));
        cost = max(cost, f(ind + 1, 2));
    }
    else
    {
        cost = max(cost, f(ind + 1, 0));
        cost = max(cost, f(ind + 1, 1));
    }
    return dp[ind][flag] = cost;
}
int main() {
   
}