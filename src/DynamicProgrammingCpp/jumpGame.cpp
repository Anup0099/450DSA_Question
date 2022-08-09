#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int max_reach = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > max_reach)
            return false;
        max_reach = max(max_reach, i + nums[i]);
    }
    return true;
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << canJump(nums) << endl;
}