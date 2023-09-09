class Solution {
public:
    string orderlyQueue(string s, int k) {
          int n = s.length();
    string maxi = s;
    if (k > 1)
    {
        sort(maxi.begin(), maxi.end());
        return maxi;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            string temp = "";
            for (int j = i; j < n; j++)
            {
                temp += s[j];
            }
            temp += s.substr(0, i);
            maxi = min(maxi, temp);
        }
        return maxi;
    }
    
    }
};