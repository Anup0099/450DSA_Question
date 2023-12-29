class Solution {
public:
    bool digitCount(string s) {
         int n = s.length();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i] - '0');
        cout << v[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == v[j])
            {
                count++;
            }
        }
        if (count != v[i])
        {
            return false;
        }
    }
    return true;
    }
};