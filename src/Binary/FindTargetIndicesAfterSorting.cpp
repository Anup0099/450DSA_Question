#include <bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int> &nums, int target)
{
    // sort(nums.begin(),nums.end());
    // vector<int> ans;
    // for(int i=0;i<nums.size();i++)
    // {
    //     if(nums[i]==target)
    //     {
    //         ans.push_back(i);
    //     }
    // }
    // return ans;
    vector<int> v;
    sort(nums.begin(), nums.end());
    bool c = binary_search(nums.begin(), nums.end(), target);
    if (c == false)
        return {};
    int a = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int b = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    if (a == b)
        return {a};
    for (int i = a; i <= b; i++)
        v.push_back(i);
    return v;
}
int main() {
    
}
