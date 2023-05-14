#include <bits/stdc++.h>
using namespace std;
vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
{
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i)
    {
        mp[nums[i]]++;
        if (i >= k - 1)
        {
            if (i >= k)
                mp[nums[i - k]]--;
            int sum = 0, t = 0;
            for (auto m : mp)
            {
                sum += m.second;
                if (sum >= x)
                {
                    t = (m.first < 0) ? m.first : 0;
                    break;
                }
            }
            ans.push_back(t);
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