class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
        // built in function to count set bits in a number in O(1) time
        ans.push_back(__builtin_popcount(i));
    }
    return ans;
    }
};