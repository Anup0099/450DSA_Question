#include <bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector<int> &nums)
{
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int s = 0, e = 0;
    int ind = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(sum==0){
            ind==i;
        }
        curr_sum += nums[i];
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
            s = ind;
            e = i;
        }
        
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        // print subarray
            cout<<s<<" "<<e<<endl;
        return max_sum;
    }
    int main() {}