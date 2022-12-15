#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    unordered_map<char, int> freq;
    for (char c : s)
        freq[c]++;

    vector<pair<int, char>> v;
    for (auto p : freq)
        v.push_back({p.second, p.first});

    sort(v.begin(), v.end(), greater<pair<int, char>>());
    string ans;
    for (auto p : v)
        ans += string(p.first, p.second);
    return ans;
}
static bool comp(pair<int,int>p,pair<int,int>q)
      //first column stores frequency i.e duplicates and second column stores value
  {//if the duplicates are equal then we will return by greater value first...
  if(p.first==q.first)
  {
  return p.second>q.second;
  }
      ///else we will return as per frequency.
  return p.first<q.first;
  }
    vector<int> frequencySort(vector<int>& nums)
    {
        map<int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        vector<pair<int,int>> v;
        for(auto it:m)
        {
           v.push_back({it.second,it.first});     
        }
        vector<int> ans;int cnt=0;
        sort(v.begin(),v.end(),comp);
        for(auto it: v)
        {  
            cnt=it.first;
            while(cnt--)
            {
                ans.push_back(it.second);
            }

        }return ans;
    }
int main()
{
    string s = "tree";
    cout << frequencySort(s) << endl;
    vector<int> nums = {2,3,1,3,2};
    vector<int> ans = frequencySort(nums);
    for (int n : ans)
        cout << n << " ";
    cout << endl;
}