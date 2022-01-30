//  Min Max Swap
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given two arrays a and b of n positive integers each. You can apply the following operation to them any number of times:

// Select an index i (1≤i≤n) and swap ai with bi (i. e. ai becomes bi and vice versa).
// Find the minimum possible value of max(a1,a2,…,an)⋅max(b1,b2,…,bn) you can get after applying such operation any number of times (possibly zero).

// Input
// The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100) — the number of test cases. Description of the test cases follows.

// The first line of each test case contains an integer n (1≤n≤100) — the length of the arrays.

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤10000) where ai is the i-th element of the array a.

// The third line of each test case contains n integers b1,b2,…,bn (1≤bi≤10000) where bi is the i-th element of the array b.

// Output
// For each test case, print a single integer, the minimum possible value of max(a1,a2,…,an)⋅max(b1,b2,…,bn) you can get after applying such operation any number of times.

// Example


#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void rec(int index,vector<int>&nums,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return;

    }
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        swap(nums[index],nums[i]);
        rec(index+1,nums,ans);
        swap(nums[index],nums[i]);

    }
    
}
vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        rec(0,nums,ans);
        return ans;

    }

     void nextPermutation(vector<int>& nums) {
         int n = nums.size();
         sort(nums.begin(),nums.end());
        swap(nums[0],nums[nums.size()-1]);
        for(auto x:nums){
            cout<<x<<endl;
        }
        
    }

int main()
{
    vector<int>nums;
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        nums.push_back(i);
    }
    
    vector<vector<int>>ans =permute(nums);
    ans.pop_back();
}