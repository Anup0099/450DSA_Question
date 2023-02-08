#include <bits/stdc++.h>
using namespace std;
int findLHS(vector<int> nums)
{
    map<int, int> mp;
    for (auto it : nums)
    {
        mp[it]++;
    }
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[(nums[i] + 1)])
        {
            int curr = 0;
            curr = mp[nums[i]] + mp[(nums[i] + 1)];
            ans = max(ans, curr);
        }
    }
    return ans;
}
int main() {}