#include <bit/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums and an integer p. Find p pairs of indices of nums such that the maximum difference amongst all the pairs is minimized. Also, ensure no index appears more than once amongst the p pairs.

// Note that for a pair of elements at the index i and j, the difference of this pair is |nums[i] - nums[j]|, where |x| represents the absolute value of x.

// Return the minimum maximum difference among all p pairs. We define the maximum of an empty set to be zero.

int minimizemax(vector<int> &nums, int p)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = INT_MAX;
    int low = 0;
    int high =nums[n-1]-nums[0];
    while(low<=high){
        int mid = low+(high-low)/2;
        int count = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            while(j<n && nums[j]-nums[i]<=mid){
                j++;
            }
            count+=j-i-1;
        }
        if(count>=p){
            ans = min(ans,mid);
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;

}
int main()
{
}