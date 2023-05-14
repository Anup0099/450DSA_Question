#include <bits/stdc++.h>
using namespace std;
void sub(int ind, vector<int> &nums, vector<int> &v)
{

    if (ind == nums.size())
    {
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout<<endl;
        return;
    }
    v.push_back(nums[ind]);
    sub(ind + 1, nums, v);
    v.pop_back();
    sub(ind + 1, nums, v);
}
int noOfSubsequences(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v(n + 1);
    sub(0, nums, v);
    
   

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {1, 2, 3};
    cout << noOfSubsequences(nums);
}