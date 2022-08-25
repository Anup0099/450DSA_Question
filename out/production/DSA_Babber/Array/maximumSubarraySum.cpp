#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += nums[i];
        if (curr_sum > max_sum)
            max_sum = curr_sum;
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return max_sum;
}
int main() {}