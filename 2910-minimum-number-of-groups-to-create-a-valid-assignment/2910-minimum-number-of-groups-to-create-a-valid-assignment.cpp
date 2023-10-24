class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& nums) 
    {
         int n = nums.size();
    int ans = INT_MAX;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    vector<int> arr;
    for (auto it : mp)
    {
        arr.push_back(it.second);
    }
    sort(begin(arr), end(arr));
    for (int i = 1; i <= arr[0]; i++)
    {
        int a = i, b = i + 1;
        int num = 0;
        bool bad = false;
        for (int i = 0; i < arr.size(); i++)
        {
            int curr = arr[i];
            int count = 0;
            int mn = INT_MAX;
            while (curr >= 0)
            {
                if (curr % a == 0)
                {
                    mn = count + curr / a;
                }
                curr -= b;
                count++;
            }
            if (mn == INT_MAX)
            {
                // matlab aisa koi group nahi mila

                bad = true;
                break;
            }
            num += mn;
        }
        if (!bad)
        {
            ans = min(ans, num);
        }
    }
    return ans;
        
    }
};