class Solution {
    int find(map<int,int>&count,set<int>&cur,int x){
    int sc = 0;
    
    for(auto&y:cur){
        sc += count[y];
        if(sc>=x){
            return y;
        }
    }
    return -1;
}
public:
 
vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
{
    vector<int> ans;
    map<int, int> count;
    int n = nums.size();
    set<int> cur;

    for (int i = 0; i < k; ++i)
    {
        count[nums[i]]++;
        cur.insert(nums[i]);
    }
    // I have to get the kth value
    int val = find(count, cur, x);

    if (val >= 0)
    {
        ans.push_back(0);
    }
    else
    {
        ans.push_back(val);
    }
    for (int i = k; i < n; ++i)
    {
        // remove the start element
        if (count[nums[i - k]] == 1)
        {
            cur.erase(nums[i - k]);
        }
        count[nums[i - k]]--;

        count[nums[i]]++;
        cur.insert(nums[i]);
        int val = find(count, cur, x);
        if (val >= 0)
            ans.push_back(0);
        else
            ans.push_back(val);
    }

    return ans;
}
};