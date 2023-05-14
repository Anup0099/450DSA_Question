#include <bits/stdc++.h>
using namespace std;
int find(map<int, int> map, set<int> curr, int x)
{
    int sc = 0;
    for (auto it : curr)
    {
        sc = map[it];
        if (sc >= x)
        {
            return sc;
        }
    }
    return -1;
}
vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
{
    vector<int> ans;
    map<int, int> count;
    int n = nums.size();
    set<int> cur;

    for (int i = 0; i < k; ++i)
    {
        count[nums[i]]++;
        cur.insert(nums[i]);
    }
    // I have to get the kth value
    int val = find(count, cur, x);

    if (val >= 0)
    {
        ans.push_back(0);
    }
    else
    {
        ans.push_back(val);
    }
    for (int i = k; i < n; ++i)
    {
        // remove the start element
        if (count[nums[i - k]] == 1)
        {
            cur.erase(nums[i - k]);
        }
        count[nums[i - k]]--;

        count[nums[i]]++;
        cur.insert(nums[i]);
        int val = find(count, cur, x);
        if (val >= 0)
            ans.push_back(0);
        else
            ans.push_back(val);
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {1, -1, -3, -2, 3};
    int k = 3, x = 2;
    vector<int> res = getSubarrayBeauty(nums, k, x);
}