#include <bits/stdc++.h>
define ll long long
define ld long double
define pb push_back
using namespace std;
void sort(vector<int>&nums,int n){
    int low=0,mid=0;
    int n= nums.size();
    int high=n-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            swap(nums[i],nums[low]);
            low++;
            mid++;
        }
        else if(nums[i]==1){
            swap(nums[i],nums[mid]);
            mid++;
        }
        else{
            swap(nums[i],nums[high]);
            high--;
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}