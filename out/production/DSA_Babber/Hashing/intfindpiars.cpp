#include <bits/stdc++.h>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    int count = 0;
    for (auto it : m)
    {
        if (k == 0)
        {
            if (it.second > 1)
            {
                count++;
            }
        }
        else if (m.find(it.first + k) != m.end())
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 3, 1, 5, 4};
    int k = 2;
    cout << findPairs(nums, k) << endl;
}