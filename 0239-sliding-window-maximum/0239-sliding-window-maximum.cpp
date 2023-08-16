class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
    int n = nums.size();
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        while (!q.empty() and q.back() < nums[i])
        {
            q.pop_back();
        }
        q.push_back(nums[i]);
        if (i >= k - 1)
        {
            ans.push_back(q.front());
            if (nums[i - k + 1] == q.front())
            {
                q.pop_front();
            }
        }
    }
    return ans;
    }
};