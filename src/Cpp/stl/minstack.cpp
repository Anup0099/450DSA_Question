#include <bits/stdc++.h>
using namespace std;

class MinStack
{
    stack<int> s;
    int minelement;

public:
    MinStack()
    {

        while (s.empty() == false)
            s.pop();
        minelement = INT_MAX;
    }

    void push(int val)
    {
        if (s.empty())
        {
            minelement = val;
            s.push(val);
            cout << val << endl;
            return;
        }
        else if (val < minelement)
        {
            s.push(2 * val - minelement);
            minelement = val;
            cout << val << endl;
            return;
        }
        else
        {
            s.push(val);
            cout << val << endl;
            return;
        }
    }
    void pop()
    {
        if (s.empty())
            return;
        int val = s.top();
        s.pop();
        if (val < minelement)
        {
            minelement = 2 * minelement - val;
        }
        else
        {
            cout << val << endl;
        }
    }

    int top()
    {
        if (s.empty())
            return -1;
        int val = s.top();
        if (val < minelement)
        {
            return minelement;
        }
        else
        {
            return val;
        }
    }

    int getMin()
    {
        if (s.empty())
            return INT_MAX;
        else
            return s.top();
    }
};
void solve(vector<int>nums,vector<vector<int> >&ans,int index  ){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[i],nums[index]);
        solve(nums,ans,index+1);
        swap(nums[i],nums[index]);
    }
    
}
vector<vector<int>> permute(vector<int>& nums) {
vector<vector<int>> ans;
   int index=0;
   solve(nums,ans,index);
    return ans;
}

int
main()
{   
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=permute(nums);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}