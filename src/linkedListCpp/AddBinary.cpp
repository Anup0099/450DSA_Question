#include <bits/stdc++.h>
using namespace std;
int binarytodecimal(string a)
{
    int ans = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        ans += (a[i] - '0') * pow(2, n - i - 1);
    }
    return ans;
}
string addBinary(string a, string b)
{
    int x = binarytodecimal(a);
    int y = binarytodecimal(b);
    int sum = 0;
    sum = x + y;
    string ans = "";
    while (sum != 0)
    {
        ans += to_string(sum % 2);
        sum /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string addBinary(string a, string b)
{
    string res = "";
    int i = s.length() - 1, j = b.length() - 1, carry = 0;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i--] - '0'; // convert char to int i-- means i = i - 1
        }
        if (j >= 0)
        {
            sum += b[j--] - '0'; // convert char to int j-- means j = j - 1
        }
        if (sum > 1)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        res += to_string(sum % 2); // convert int to char and add to string
    }
    if (carry != 0)
    {
        res += to_string(carry);
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string a = "0";
    string b = "0";
    cout << addBinary(a, b);
}