#include <bits/stdc++.h>
using namespace std;
int mostFrequentEven(vector<int> &nums)
{
    unordered_map<int, int> mapp;
    int max = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            mapp[nums[i]]++;
        }
    }
    for (auto it : mapp)
    {
        if (it.first % 2 == 0 && it.second > mx)
        {
            mx = it.second;
            ans = it.first;
        }
    }
    return ans;
}
int main() {
    vector<int>arr={1,2,3,4,5,6,7,8,9,9};
    int key=9;
    vector<int>ans=remove(arr,key);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}