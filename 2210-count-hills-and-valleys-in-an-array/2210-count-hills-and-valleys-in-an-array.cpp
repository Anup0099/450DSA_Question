class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            ans.push_back(nums[i]);
        }
    }
    int count = 0;
    int i = 1;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    while (i < ans.size() - 1)
    {
        if (ans[i] > ans[i - 1] && ans[i] > ans[i + 1])
        {
            count++;
        }
        else if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
        {
            count++;
        }
        i++;
    }
    return count;
    }
};