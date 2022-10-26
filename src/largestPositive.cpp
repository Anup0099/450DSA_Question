#include <bits/stdc++.h>
using namespace std;
// Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

// Return the positive integer k. If there is no such integer, return -1.
int findMaxK(vector<int> &nums)
{
    int n = nums.size();
    int max = *max_element(nums.begin(), nums.end());
    int min = *min_element(nums.begin(), nums.end());
    if (min > 0)
    {
        return -1;
    }
    int k = max;
    while (k > 0)
    {
        if (find(nums.begin(), nums.end(), k) != nums.end() && find(nums.begin(), nums.end(), -k) != nums.end())
        {
            return k;
        }
        k--;
    }
    return -1;

}
int main()
{

    vector<int> nums = {-1,10,6,7,-7,1};

    cout << findMaxK(nums);
    return 0;
}