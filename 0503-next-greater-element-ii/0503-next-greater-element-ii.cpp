class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < 2 * n; i++)
    {
        while (!st.empty() and nums[st.top()] < nums[i % n])
        {
            ans[st.top()] = nums[i % n];
            st.pop();
        }
        if (i < n)
            st.push(i);
    }
    return ans;
    }
};