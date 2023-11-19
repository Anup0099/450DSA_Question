class Solution {
public:
    int reductionOperations(vector<int>& nums) {
      int n=nums.size();
        int op=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]==nums[i-1])continue;
            op+= n-i;
            
        }
        return op;
    }
};