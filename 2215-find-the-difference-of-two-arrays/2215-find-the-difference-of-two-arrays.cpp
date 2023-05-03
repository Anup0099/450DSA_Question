class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> set1,set2;
        vector<vector<int>>ans(2);
        set1.insert(nums1.begin(),nums1.end());
        set2.insert(nums2.begin(),nums2.end());
        for(int i: set1){
            if(set2.count(i)==0){
                ans[0].push_back(i);
            }
        }
        for(int i: set2){
            if(set1.count(i)==0){
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};