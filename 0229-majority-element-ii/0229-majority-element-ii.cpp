class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int> ans;
    map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > n / 3)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
    //time complexity:total time complexity is O(nlogn) because we are using a map and map has a time complexity of O(logn) for insertion and deletion
    //space complexity: O(n) because we are using a map 
    }
};