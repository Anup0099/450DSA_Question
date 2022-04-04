#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            if(i+nums[i]>=nums.size()){
                return true;
            }else if(nums[i]==0){
                break;

            }
        }
        return false;
    }
int main(){
    // map<int,string>m;
    // m[1]="ans";
    // m[2]="ans2";
    // m[3]="ans3";
    // m.insert({4,"afd"});
    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();++it){
    //     cout<<it->first<<it->second;
    // }
    
    map<string,int>m;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;


    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}