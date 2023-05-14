#include <bits/stdc++.h>
using namespace std;
vector<bool> maxCandies(vector<int> &candies, int extraCandies)
{
    int n = candies.size();

    vector<bool> ans(n, false);
    int maxElement = *max_element(candies.begin(), candies.end());
    for (int i = 0; i < n; i++)
    {
        if (candies[i]+extraCandies >= maxElement)
        {
            ans[i] = true;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}