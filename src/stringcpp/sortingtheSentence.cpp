#include <bits/stdc++.h>
using namespace std;
string sortSentence(string s)
{
    map<int, string> mp;
    int ind = 0;
    s += ' ';
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            mp[(int)s[i - 1]] = s.substr(ind, i - ind - 1);
            ind = i + 1;
        }
    }
    string ans = "";
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    for (auto it : mp)
    {
        ans += it.second;
        ans += ' ';
    }
    ans.pop_back();
    return ans;
}
int main()
{
    string s="is2 sentence4 This1 a3";
    
    cout << sortSentence(s) << endl;
    return 0;
}