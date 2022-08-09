#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums. A pair of indices (i, j) is a bad pair if i < j and j - i != nums[j] - nums[i].

// Return the total number of bad pairs in nums.

long long countBadPairs(vector<int> &nums)
{
    long long ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] - nums[i] != j - i)
            {
                ans++;
            }
        }
    }
    return ans;
}
long long badpairs(vector<int> &nums)
{
    int n = nums.size();
    map<long long, long long> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i] - i]++;
    }
    long long ans = (long long)n * ((long long)n - 1) / 2;
    for (auto it : m)
    {
        ans -= it.second * (it.second - 1) / 2;
    }
    return ans;
}
int main()
{
}