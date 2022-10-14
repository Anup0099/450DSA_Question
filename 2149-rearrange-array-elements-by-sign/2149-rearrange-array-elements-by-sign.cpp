class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> p;
    vector<int> n;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            p.push_back(nums[i]);
        }
        else
        {
            n.push_back(nums[i]);
        }
    }
    int i = 0,j=0,k=0;
    while (i < p.size() && j < n.size())
    {
        ans.push_back(p[i]);
        ans.push_back(n[j]);
        i++;
        j++;
    }
    while (i < p.size())
    {
        ans.push_back(p[i]);
        i++;
    }
    while (j < n.size())
    {
        ans.push_back(n[j]);
        j++;
    }
    return ans;
    }
};