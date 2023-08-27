class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long ans = 0;
    set<int> s;
    int i = 1;
    while (s.size() < n)
    {
        int temp = target - i;
        if (s.find(temp) == s.end())
        {
            s.insert(i);
            ans += i;
        }
        i++;
    }
        
        
    return ans;
    }
};