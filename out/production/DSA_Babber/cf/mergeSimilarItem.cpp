#include <bits/stdc++.h>
using namespace std;

// You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:

// items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
// The value of each item in items is unique.
// Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.

// Note: ret should be returned in ascending order by value.

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    vector<vector<int>> ans;
    unordered_map<int, int> mapp;
    for (auto x : items1)
    {
        mapp[x[0]] += x[1];
    }
    for (auto x : items2)
    {
        mapp[x[0]] += x[1];
    }
    for (auto x : mapp)
    {
        ans.push_back({x.first, x.second});
    }
    sort(ans.begin(), ans.end(), [](vector<int> a, vector<int> b) { return a[0] < b[0]; });
    return ans;
}
int main() {
    
}