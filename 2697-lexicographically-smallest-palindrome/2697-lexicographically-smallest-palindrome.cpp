class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.length();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else if (s[i] < s[j])
        {
            s[j] = s[i];
            i++;
            j--;
        }
        else
        {
            s[i] = s[j];
            i++;
            j--;
        }
    }
    return s;
    }
};