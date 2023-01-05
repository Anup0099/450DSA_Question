#include <bits/stdc++.h>
using namespace std;

vector<string> generateAllSubstrings(int ind, string s, string curr = "")
{
    vector<string> ans;

    if (ind == s.length())
    {
        cout << curr << endl;
        return ans;
    }
    // picking
    curr = curr + s[ind];
    ans.push_back(curr);
    generateAllSubstrings(ind + 1, s, curr);
    // not picking
    //  curr= curr.substr(0,curr.length()-1);
    curr.pop_back();
    ans.push_back(curr);
    generateAllSubstrings(ind + 1, s, curr);
    return ans;
}
int lcs(string s1, string s2)
{
    int count = 0;
    int maxcount = INT16_MIN;
    vector<string> ans1 = generateAllSubstrings(0, s1);
    vector<string> ans2 = generateAllSubstrings(0, s2);
    for (string str1 : ans1)
    {
        for (string str2 : ans2)
        {
            if (str1 == str2)
            {
                count++;
                maxcount = max(maxcount, count);
            }
        }
    }
    return maxcount;
}
int main()
{
    string s1 = "abc";
    string s2 = "dcadb";
    cout << lcs(s1, s2);
    return 0;
}