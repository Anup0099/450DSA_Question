class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> s;
    for (auto i : arr)
        s.insert(i);
    int count = 0;
    for (int i = 1; i <= 10001; i++)
    {
        if (s.find(i) == s.end())
            count++;
        if (count == k)
            return i;
    }
    return -1;
      
    }
};