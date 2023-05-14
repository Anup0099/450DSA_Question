class Solution {
public:
     void find(vector<int>& nums, int f[], vector<int>&ds, set<vector<int>> &ans){
        if(ds.size()==nums.size()){
            ans.insert(ds);
            return;
        }

        for(int i =0;i<nums.size();i++){
            if(f[i]==0){
                ds.push_back(nums[i]);
                f[i]=1;
                find(nums,f,ds,ans);
                ds.pop_back();
                f[i]=0;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>> ans;
        vector<int> ds;
        int f[nums.size()];

        for(int i=0;i<nums.size();i++)
            f[i]=0;

        find(nums,f,ds,ans);

        vector<vector<int>>res;

        for(auto it : ans){
            vector<int> temp = it;
            res.push_back(temp);
        }
        return res;
    }
};