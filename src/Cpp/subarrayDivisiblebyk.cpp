#include <bits/stdc++.h>
using namespace std;
int subarraydivisiblebyk(vector<int> &nums, int k)
{
    // brute force approach o(n square)
    int result = 0, n = nums.size();
    // prefix sum
    for (int i = 1; i <= n; i++)
    {
        nums[i] += nums[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = (i == 0) ? nums[j] : nums[j] - nums[i - 1];
            if (sum % k == 0)
            {
                result++;
            }
        }
    }
    return result;


    //most optimized approach
    
     




}
int main() {}