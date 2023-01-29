#include <bits/stdc++.h>
using namespace std;
// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

// In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
// Note that 0 is neither positive nor negative.
int maximumCount(vector<int> &nums)
{
    int n = nums.size();
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
            pos++;
        else if (nums[i] < 0)
            neg++;
    }
    return max(pos, neg);
}
int main() {}