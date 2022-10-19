class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
    map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        pq.push({it->second, it->first});
    }
    while (k--)
    {
        v.push_back(pq.top().second);
        pq.pop();
    }
    return v;
    }
};