class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
    int m = nums2.size();
    set<int>s(nums1.begin(), nums1.end());
    set<int>s2(nums2.begin(), nums2.end());
    vector<int> v1, v2;
    vector<vector<int>> ans;
    set_difference(s.begin(), s.end(), s2.begin(), s2.end(), inserter(v1, v1.begin()));
    set_difference(s2.begin(), s2.end(), s.begin(), s.end(), inserter(v2, v2.begin()));
    return {v1, v2};
    }
};