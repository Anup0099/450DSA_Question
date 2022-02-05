#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>allsUbsets;
void generate(vector<int>&subset,vector<int>&nums,int index){
    if (index == nums.size())
    {
        /* code */
        allsUbsets.push_back(subset);
        
        return;
    }
    // not pick any value
    generate(subset,nums,index+1);
    subset.push_back(nums[index]);
    generate(subset,nums,index);
    subset.pop_back();

    
}
int main(){

}