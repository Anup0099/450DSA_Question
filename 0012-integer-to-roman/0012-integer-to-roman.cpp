class Solution {
public:
    string intToRoman(int num) {
        string ans;
    vector<int> val = {1000, 900, 500, 400, 100, 90, 50,
                       40, 10, 9, 5, 4, 1};
    vector<string> notation = {"M", "CM", "D", "CD", "C", "XC", "L",
                               "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; num > 0; ++i)
    {
        while (num >= val[i])
        {
            ans += notation[i];
            num -= val[i];
        }
       

    }
    return ans;
    }
};