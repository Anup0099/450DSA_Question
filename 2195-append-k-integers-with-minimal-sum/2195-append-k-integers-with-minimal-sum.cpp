class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
         set<int> s;
    long long ans = (long long)k * (k + 1) / 2;
    int count = 0;
    for (int i : nums)
    {
        if (s.find(i) == s.end() && i <= k && i >= 1)
        {
            ans = ans - (long long)i;
            count++;
        }
        s.insert(i);
    }
    int i = k + 1;
    while (count > 0)
    {
        if (s.find(i) == s.end())
        {
            ans = ans + (long long)i;
            count--;
        }
        i++;
    }
    return ans;
    }
};