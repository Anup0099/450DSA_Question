#include <bits/stdc++.h>
using namespace std;

// An integer array original is transformed into a doubled array changed by appending twice the value of every element in original, and then randomly shuffling the resulting array.

// Given an array changed, return original if changed is a doubled array. If changed is not a doubled array, return an empty array. The elements in original may be returned in any order.
vector<int> findOriginalArray(vector<int> &changed)
{
    int n = changed.size();
    vector<int> ans;
    if (n % 2 != 0)
        return ans;

    sort(changed.begin(), changed.end());

    map<int, int> mp;
    for (auto i : changed)
    {
        mp[i]++;
    }
    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    for (auto i : changed)
    {
        if (mp[i] > 0)
        {
            if (mp[2 * i] > 0)
            {
                ans.push_back(i);
                mp[i]--;
                mp[2 * i]--;
            }
        }
        else
        {
            return {};
        }
    }
    for(auto i : mp){
       cout<<i.first<<" "<<i.second<<endl;
    }


return ans;
}
int main()
{
    vector<int> changed = {1, 3, 4, 2, 6, 8};
    vector<int> ans = findOriginalArray(changed);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}