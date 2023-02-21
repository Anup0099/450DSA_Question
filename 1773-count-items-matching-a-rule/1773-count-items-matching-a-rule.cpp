class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
int n = items.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ruleKey == "type" and items[i][0] == ruleValue)
        {
            ans++;
        }
        else if (ruleKey == "color" and items[i][1] == ruleValue)
        {
            ans++;
        }
        else if (ruleKey == "name" and items[i][2] == ruleValue)
        {
            ans++;
        }
    }
    return ans;
    }
};