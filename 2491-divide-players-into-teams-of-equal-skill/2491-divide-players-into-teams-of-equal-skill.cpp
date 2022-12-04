class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
    sort(skill.begin(), skill.end());
    long long ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if(skill[i]+skill[n-i-1] != skill[0]+skill[n-1])
            return -1;

        ans += (long long)skill[i] * skill[n - i - 1];
    }
    return ans;

    }
};