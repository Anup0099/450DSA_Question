#include <bits/stdc++.h>
using namespace std;
// Given an integer array nums and an integer k, return true if nums has a continuous subarray of size at least two whose elements sum up to a multiple of k, or false otherwise.

// An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.

bool checkSubarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n < 2)
    {
        return false;
    }
    if (k == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == 0 && nums[i + 1] == 0)
            {
                return true;
            }
        }
        return false;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int sum = nums[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += nums[j];
            if (sum % k == 0)
            {
                return true;
            }
        }
    }
    return false;
}
bool checkSubarraySumm(vector<int> &nums, int k)
{
    // log n time complexity
    int prefSum = 0;

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        prefSum += nums[i];
        prefSum %= k;

        if (prefSum == 0 && i)
            return true;

        if (mp.find(prefSum) != mp.end()) // Found the required prefix sum
        {
            if (i - mp[prefSum] > 1)
                return true; // check if atleast 2 elements are there or not
        }
        else
        {
            mp[prefSum] = i;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                cout << it->first << " " << it->second << endl;
            }
        }
    }
    // print the map
    return false;
}
int main()
{
    vector<int> v = {23, 2, 4, 6, 7};
    int k = 6;
    cout << checkSubarraySumm(v, k);
    return 0;
}