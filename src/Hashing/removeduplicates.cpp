#include <bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
        unordered_map<int,bool>seen;
        vector<int>v;
        for (int i = 0; i < nums.size();i++){
            if(seen.count(nums[i])>0){
                continue;
            }
            seen[nums[i]] = true;
            v.push_back(nums[i]);
        }
       for(auto i= v.begin(); i!=v.end(); i++){
            cout<<*i<<" ";
       }
        return v.size();
    }
int main(){
    vector<int>v={1,1,2};
   cout<< removeDuplicates(v);
}