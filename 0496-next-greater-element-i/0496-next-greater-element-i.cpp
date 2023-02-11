class Solution {
public:
    vector<int >nextgreaterelementtoright(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and nums[st.top()] < nums[i])
        {
            ans[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
    int m = nums2.size();
    vector<int> ans(n, -1);
    vector<int> ngr = nextgreaterelementtoright(nums2);
    stack<int> st;
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        mp[nums2[i]] = ngr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = mp[nums1[i]];
    }
    return ans;
    }
};