#include <bits/stdc++.h>
using namespace std;



int countKDifference(vector<int>& nums, int k) {
    int n=nums.size();
    int count=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        int ans= it->first-k;
        if(m.find(ans)!=m.end()){
            count+=m[ans]*m[it->first];
        }
    }
    return count;
    }


    int main(){
        vector<int>nums={1,1,1,1,1};
        int k=2;
        cout<<countKDifference(nums,k);

    }