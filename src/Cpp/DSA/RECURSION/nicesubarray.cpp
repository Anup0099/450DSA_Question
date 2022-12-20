#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int> &nums, int k)
{
    // count number of subarrays with odd numbers = k

    unordered_map<int, int> m;  
    int count = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i] % 2;
        if (sum == k)
        {
            count++;
        }
        if (m.find(sum - k) != m.end())
        {
            count += m[sum - k];
        }
        m[sum]++;
    }
    return count;
}


int main()
{
    vector<int> nums = {1, 1, 2, 1, 1};
    int k = 3;
    int s = numberOfSubarrays(nums, k);
    cout << s << endl;
}