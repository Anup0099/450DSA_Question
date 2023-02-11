class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int, int> m;
    for (auto it : arr)
    {
        m[it]++;
    }
    vector<int> ans;
    set<int> s;
    for (auto it : m)
    {
        ans.push_back(it.second);
        s.insert(it.second);
    }
    if (s.size() == ans.size())
        return true;
    return false;
    }
};