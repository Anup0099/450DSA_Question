#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &nums, int level, int currxor)
{
    if (level == nums.size())
    {
        return currxor;
    }
    int inc = helper(nums, level + 1, currxor ^ nums[level]);
    int exc = helper(nums, level + 1, currxor);
    return inc ^ exc;
}
int subsetXORSum(vector<int> &nums)
{
    return helper(nums, 0, );
}
int main()
{
    vector<int> A = {1, 3};
    int sum = subsetXORSum(A);
    cout << sum << endl;
}