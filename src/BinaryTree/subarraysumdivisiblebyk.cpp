#include <bits/stdc++.h>
using namespace std;
int subarraysDivByK(vector<int> &nums, int k)
{
    int count = 0;
    int n = nums.size();
    int sum = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        int rem = sum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (mp.find(rem) != mp.end())
        {
            count += mp[rem];
            cout << rem << " " << mp[rem] << endl;
        }
        mp[rem]++;
    }
    return count;
}
int main() {
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    cout << subarraysDivByK(nums, k);
}