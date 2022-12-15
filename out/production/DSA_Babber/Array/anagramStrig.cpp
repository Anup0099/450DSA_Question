#include <bits/stdc++.h>
using namespace std;
bool anagram(string a, string b)
{
    int na = a.size();
    int nb = b.size();
    if (na != nb)
        return false;
    vector<int> fa(26, 0);
    vector<int> fb(26, 0);
    for (int i = 0; i < na; i++)
    {
        fa[a[i] - 'a']++;
        fb[b[i] - 'a']++;
    }
    for (int i = 0; i < fa.size(); i++)
    {
        cout << fa[i] << " ";
    }
    cout<<endl;
    
    for (int i = 0; i < 26; i++)
    {
        if (fa[i] != fb[i])
            return false;
    }
    return true;
}
int main()
{
     // char s = 'D';
    // int x = s;
    // cout << x << endl;
    string a = "geeksforgeeks", b = "geeksforgeeks";
    cout << anagram(a, b);
}