#include <bits/stdc++.h>
using namespace std;

// vector<int>sortSquares(vector<int>&nums){
//     for(int i=0;i<nums.size(); i++){
//         nums[i]=nums[i]*nums[i];
//     }
//     sort(nums.begin(),nums.end());
//     return nums;
// } 
vector<int> sortedSquaress(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        vector<int> res(nums.size(), 0);
        
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(abs(nums[left])>nums[right])
            {
                res[i]=nums[left]*nums[left];
                left++;
            }
            else
            {
                res[i]=nums[right]*nums[right];
                right--;
            }
        }
        return res;
    }
int main(){
    vector<int>nums={-4,-1,0,3,10};
    vector<int>res=sortedSquaress(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}