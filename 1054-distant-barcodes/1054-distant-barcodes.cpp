class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& bar) {
        unordered_map<int, int> m;
    for (int i : bar)
        m[i]++;

    vector<pair<int, int>> v;
    for (auto i : m)
        v.push_back({i.second, i.first});

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    vector<int> ans(bar.size()), temp;
    for (auto p : v)
    {
        for (int i = 0; i < p.first; i++)
            temp.push_back(p.second);
    }

    int k = 0;
    for (int i = 0; i < bar.size(); i += 2)
        ans[i] = temp[k++];
    for (int i = 1; i < bar.size(); i += 2)
        ans[i] = temp[k++];

    return ans;
    }
};