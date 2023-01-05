#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ksmallestpairs(vector<int> &nums, vector<int> &nums2, int k)
{
    vector<vector<int>> res;
    if (nums.empty() || nums2.empty())
        return res;
    priority_queue<pair<int, pair<int, int>>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push({nums[i] + nums2[0], {i, 0}});
    }
    while (k-- && !pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        res.push_back({nums[p.second.first], nums2[p.second.second]});
        if (p.second.second + 1 < nums2.size())
        {
            pq.push({nums[p.second.first] + nums2[p.second.second + 1], {p.second.first, p.second.second + 1}});
        }
    }
    return res;
}
int main() {}