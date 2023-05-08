class Solution {
public:
    int calcDistinct(vector<int> &v, int i){
        set<int> s,s1;
        for(int j = i;j<v.size();j++){
            s.insert(v[j]);
        }
        for(int j = 0;j<i;j++){
            s1.insert(v[j]);
        }
        return s1.size()-s.size();
    }

    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> diff;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            diff.push_back(calcDistinct(nums,i+1));
        }
        return diff;

    }
};