class Solution {
public:
    int findDuplicate(vector<int>& nums) {
// the only one repeated number in nums return this repeated number xor with all the elements to array me dulicate elements nahi rahenge na wo element kaise milenge seedha map me daalo to sahi rahega jiska bhi count >1 hoga use print  kara denge
        map<int,int>map;
        for(int it:nums)
        {
            map[it]++;
        }
        int ans=0;
        for(auto it:map)
        {
            if(it.second>1)
            {
                ans = it.first;
                break;
                
            }
        }
        return ans;
    }
};