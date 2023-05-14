#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back using namespace std;
int partitionString(string s)
{
    int n = s.size();
    vector<int> lastSeen;
    int count = 0;
    int start_current_substring = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (lastSeen[ch - 'a'] >= start_current_substring)
        {
            count++;
            start_current_substring = i;
        
        }
        lastSeen[ch - 'a'] = i;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}