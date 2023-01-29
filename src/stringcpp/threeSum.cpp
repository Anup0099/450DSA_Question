#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> result;
// void twoSum(vector<int> &nums, int target, int start, int end)
// {
//     while (start < end)
//     {
//         if (nums[j] + nums[i] < k)
//         {
//             i++;
//         }
//         else if (nums[i] + nums[j] > k)
//         {
//             j--;
//         }
//         else
//         {
//             // first we will remove duplicates from either end

//             while (i < j and nums[i] == nums[i + 1])
//                 i++;
//             while (i < j and nums[j] == nums[j - 1])
//                 j--;

//             result.push_back({-target, nums[i], nums[j]});
//             i++;
//             j--;
//         }
//     }
// }
// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     int n = nums.size();
//     if (n < 3)
//     {
//         return {};
//     }
//     result.clear();
//     sort(nums.begin(), nums.end());
//     // fixing one element : n1
//     for (int i = 0; i < n; i++)
//     {
//         // check if i!=0 then array out  of bound error will come
//         if (i > 0 and nums[i] == nums[i - 1])
//         {
//             continue;
//         }
//         int n1 = nums[i];
//         int target = -n1;
//         twoSum(nums, target, i + 1, n - 1);
//     }
//     return result;
// }
int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int count = 0;
   vector<int>v1(3);
    v1[0] = s1;
    v1[1] = s2;
    v1[2] = s3;
    for (int i = 0; i < 3; i++)
    {
        if (v1[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}