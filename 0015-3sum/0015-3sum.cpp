class Solution {
public:
  vector<vector<int>> result;
void twoSum(vector<int> &nums, int k, int i, int j)
{
    while (i < j)
    {
        if (nums[j] + nums[i] < k)
        {
            i++;
        }
        else if (nums[i] + nums[j] > k)
        {
            j--;
        }
        else
        {
            // first we will remove duplicates from either end

            while (i < j and nums[i] == nums[i + 1])
                i++;
            while (i < j and nums[j] == nums[j - 1])
                j--;

            result.push_back({-k, nums[i], nums[j]});
            i++;
            j--;
        }
    }
}
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n  = nums.size();
    if (n < 3)
    {
        return {};
    }
    result.clear();
    sort(nums.begin(), nums.end());
    // fixing one element : n1
    for (int i = 0; i < n; i++)
    {
        // check if i!=0 then array out  of bound error will come
        if (i > 0 and nums[i] == nums[i - 1])
        {
            continue;
        }
        int n1 = nums[i];
        int target = -n1;
        twoSum(nums, target, i + 1, n - 1);
    }
    return result;
}
};