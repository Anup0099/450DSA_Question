#include <bits/stdc++.h>
using namespace std;
int countVowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}
// int maxVowels(string s, int k)
// {
//     int n = s.length();
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < k; j++)
//         {
//             string temp = s.substr(i, k);
//             // cout << temp << endl;
//             int count = countVowels(temp);
//             maxi = max(maxi, count);
//         }
//     }
//     return maxi;
// }
int maxVowels(string s, int k)
{
    // apply sliding window
    int n = s.length();
    int i = 0, j = 0;
    int maxi = INT_MIN;
    int count = 0;
    while (j < n)
    {
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
        {
            count++;
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            maxi = max(maxi, count);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count--;
            }
            i++;
            j++;
        }
    }
    return maxi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "abciiidef";
    int k = 3;
    cout << maxVowels(s, k);
}