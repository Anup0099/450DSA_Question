#include <bits/stdc++.h>
using namespace std;
void recurPermute(vector<int> &ds,
                  vector<int> &nums, vector<vector<int>> &ans, int frequency[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!frequency[i])
        {
            ds.push_back(i);
            frequency[i] = 1;
            recurPermute(ds, nums, ans, frequency);
            frequency[i] = 0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int frequency[nums.size()]={0};
    for (int i = 0; i < nums.size(); i++)
    {
        frequency[i] = 0;
    }
    recurPermute(ds, nums, ans, frequency);
    return ans;
}
int main()
{
    
}