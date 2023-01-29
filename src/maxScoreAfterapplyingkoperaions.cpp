#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums and an integer k. You have a starting score of 0.

// In one operation:

// choose an index i such that 0 <= i < nums.length,
// increase your score by nums[i], and
// replace nums[i] with ceil(nums[i] / 3).
// Return the maximum possible score you can attain after applying exactly k operations.

// The ceiling function ceil(val) is the least integer greater than or equal to val.
long long maxKelements(vector<int> &nums, int k)
{
    int n = nums.size();
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
        pq.push(nums[i]);
    long long res = 0;
    while (k--)
    {
        int x = pq.top();
        res += x;
        pq.pop();
        double c = ceil(x / 3.0);
        pq.push(c);
    }
    // long long res = 0;
    // while (!pq.empty())
    // {
    //     res += pq.top();
    //     pq.pop();
    // }
    return res;
}
int main()
{
    vector<int> nums = {10, 10, 10, 10, 10};
    int k = 5;
    cout << maxKelements(nums, k) << endl;
}