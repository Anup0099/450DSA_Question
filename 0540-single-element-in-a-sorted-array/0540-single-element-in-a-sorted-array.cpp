class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
    int n=nums.size();
    for(int i=0;i<n;i++){
       map[nums[i]]++;
    }
    int ans=0;
    for(auto it=map.begin();it!=map.end();it++){
        if(it->second==1){
            ans=it->first;
        }
    }
        for (auto itr = map.begin(); itr != map.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    return ans;
    }
};