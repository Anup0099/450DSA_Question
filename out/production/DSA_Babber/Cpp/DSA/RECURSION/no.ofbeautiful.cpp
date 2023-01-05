#include <bits/stdc++.h>
using namespace std;
// a number is beautiful if xor sum of all its digits is strictly grater than the average maximum and minumum digit of the number find the count of the beautiful numbers in the range a to b
int xorSum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum ^= (s[i] - '0');
    }
    return sum;
}
int average(string s)
{
    //average of minimum and maximum digit
    vector<int>v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i] - '0');
    }
    int a = *min_element(v.begin(), v.end());
    int b = *max_element(v.begin(), v.end());
    return (a + b) / 2.0;

    
}
int solve(string a, string b)
{
    int count = 0;
    for (int i = stoi(a); i <= stoi(b); i++)
    {
        if (xorSum(to_string(i)) > average(to_string(i)))
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    string a = "12";
    string b = "10";
    int ans = solve(a,b);
    cout << ans << endl;
}