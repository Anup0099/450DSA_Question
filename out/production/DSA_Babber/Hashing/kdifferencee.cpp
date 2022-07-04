#include <bits/stdc++.h>
using namespace std;

int countKDifference(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        int ans = it->first - k;
        if (m.find(ans) != m.end())
        {
            count += m[ans] * m[it->first];
        }
    }
    return count;
}

int findPairs(vector<int> &nums, int k)
{
    int count = 0;

    int n = nums.size();
    if (k != 0)
    {
        for (auto it : nums)
        {
            cout << it << " ";
        }
        cout << endl;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end()); // remove duplicates
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(nums[j] - nums[i]) == k)
                {
                    count++;
                }
            }
        }
        return count;
        // rrrr
    }
    // else
    // {

    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (nums[i] == nums[j])
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // }

    return 0;
}
int main()
{
    vector<int> nums = {1, 3, 1, 5, 4};
    int k = 2;
    cout << findPairs(nums, k) << endl;
    return 0;
}
