#include <bits/stdc++.h>
using namespace std;
// You are given an array nums consisting of positive integers.

// You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.

// Return the number of distinct integers in the final array.
int countDistinctIntegers(vector<int> &nums)
{
    int n = nums.size();
    set<int> s;
    for (auto it:nums){
        s.insert(it);
    }
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int rev = 0;
        while (num > 0)
        {
            int rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        s.insert(rev);
    }
    return s.size();
}
int main() {
    vector<int> nums = {2,2,2};
    cout << countDistinctIntegers(nums);
    return 0;
}