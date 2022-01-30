#include <bits/stdc++.h>
using namespace std;


 bool isValid(string s) {
    stack<char> st;
    for(int i = 0; i < s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
        }else{
            if(st.empty()){
                return false;
            }else{
                char c =st.top();
                st.pop();
                if(c=='(' && s[i]!=')'){
                    return false;}
                else if(c=='{' && s[i]!='}'){
                    return false;}
                else if(c=='[' && s[i]!=']'){
                    return false;}
                }
            }
        }
    return st.empty();
    }
  
  
  void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>&ans){
      if(index>=nums.size()){
            ans.push_back(output);
            return;
      }
      //exclude
      solve(nums,output,index+1,ans);
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
      
  }
  vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<vector<int>ans;
        vector<int> output;
        int index =0;
        solve(nums,output,index,ans);
        return ans;


    }

int main(){
    string s = "()";
    if(isValid(s)){
        cout<<"Valid"<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}