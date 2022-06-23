#include <bits/stdc++.h>
using namespace std;

int lastoccurance(int arr[], int low, int high, int key)
{
}
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp(nums);
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if (n < 3) // if the array is less than 3 elements, no triplet can be formed
        return ans;

    for (int i = 0; i < n - 2; i++)
    {
        if (i == 0 || nums[i] != nums[i - 1])
        {
            int low = i + 1;   // low is the index of the first element in the second part of the array
            int high = n - 1;  // high is the index of the last element in the second part of the array
            while (low < high) //  low and high are two pointers that will mark the start and end of the array
            {
                vector<int> temp1;
                int sum = nums[i] + nums[high] + nums[low]; // sum is the sum of the three elements
                if (sum == 0)
                {
                    temp1.push_back(nums[i]);
                    temp1.push_back(nums[high]);
                    temp1.push_back(nums[low]);
                    ans.push_back(temp1);
                    low++;
                    high--;
                    while (low < high && nums[low] == nums[low - 1]) // if the element is same as the previous element, then we need to move the low pointer to the next element{
                        low++;
                    while (low < high && nums[high] == nums[high + 1]) // if the element is same as the previous element, then we need to move the high pointer to the next element
                    {
                        high--;
                    }
                }
                else if (sum > 0)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
    }
    return ans;
}


    