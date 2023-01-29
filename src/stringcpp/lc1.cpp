#include <bits/stdc++.h>
using namespace std;
You are given a positive integer array nums.

    // The element sum is the sum of all the elements in nums.
    // The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
    // Return the absolute difference between the element sum and digit sum of nums.

    // Note that the absolute difference between two integers x and y is defined as |x - y|.
    
    int differenceOfSum(vector<int> &nums)
{
    int sum = 0;
    int digitSum = 0;
    for (auto x : nums)
    {
        sum += x;
        while (x)
        {
            digitSum += x % 10;
            x /= 10;
        }
    }
    return abs(sum - digitSum);
}
int main() {}