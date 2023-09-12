class Solution {
public:
    int minDeletions(string s) {
        int n = s.length();
    unordered_map<char, int> map;
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
    }
    priority_queue<int> pq;
    for (auto i : map)
    {
        pq.push(i.second);
    }
    int count = 0;
    while (!pq.empty())
    {
        int x = pq.top();
        pq.pop();
        if (pq.empty())
        {
            return count;
        }
        if (x == pq.top())
        {
            if (x > 1)
            {
                pq.push(x - 1);
            }
            count++;
        }
    }
    return count;
    }
};