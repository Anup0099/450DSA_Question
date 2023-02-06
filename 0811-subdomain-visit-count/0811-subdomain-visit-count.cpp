class Solution {
public:
  pair<int, string> convert(string s)
{
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            return {num, s.substr(i + 1)};
        }
        else
        {
            num *= 10;
            num += (int)s[i] - '0';
        }
    }
    return {0, ""};
}
vector<string>subdomainVisits(vector<string> &cpdomains)
{
    map<string, int> mp;
    for (auto i : cpdomains)
    {
        pair<int, string> val = convert(i);
        int n = val.second.size();
        for (int j = n - 1; j >= 0; j--)
        {
            if (val.second[j] == '.')
            {
                string name = val.second.substr(j + 1);
                mp[name] += val.first;
            }
           
        }
         mp[val.second] += val.first;
    }
    vector<string> ans;
    for (auto it : mp)
    {
        string new_str = to_string(it.second) + " " + it.first;
        ans.push_back(new_str);
    }
    return ans;
}
};