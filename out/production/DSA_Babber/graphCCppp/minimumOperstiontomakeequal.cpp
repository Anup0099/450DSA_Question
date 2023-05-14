#include <bits/stdc++.h>
using namespace std;
int minimumOperation(vector<int> &nums)
{
    int n = nums.size();
    int minSubarray = INT_MAX, countOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            countOnes++;
    }
    if (countOnes > 0)
        return nums.size() - countOnes;
    for (int i = 0; i < n; i++)
    {
        int currGCD = nums[i];
        for (int j = i + 1; j < n; j++)
        {
            int currGCD = __gcd(currGCD, nums[j]);
            if (currGCD == 1)
            {
                minSubarray = min(minSubarray, j - i + 1);
                break;
            }
        }
    }
    if (minSubarray != INT_MAX)
    {
        return minSubarray + n - 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}