#include <bits/stdc++.h>
using namespace std;
// The value of an alphanumeric string can be defined as:

// The numeric representation of the string in base 10, if it comprises of digits only.
// The length of the string, otherwise.
// Given an array strs of alphanumeric strings, return the maximum value of any string in strs.

bool isdigit(char c)
{
    return c >= '0' && c <= '9';
}
int maximumValue(vector<string> &strs)
{
    int ans = 0;
    for (auto &s : strs)
    {
        int sum = 0;
        for (auto &c : s)
        {
            if (isdigit(c))
                sum = sum * 10 + (c - '0');
            else
            {
                sum = s.size();
                break;
            }
        }
        ans = max(ans, sum);
    }
    return ans;
}
int main() {}