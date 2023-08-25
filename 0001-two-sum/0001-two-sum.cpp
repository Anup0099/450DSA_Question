class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(target - arr[i]) != mp.end())
        {
            return {mp[target - arr[i]], i};
        }
        else
        {
            mp[arr[i]] = i;
        }
    }
    return {};
    }
};