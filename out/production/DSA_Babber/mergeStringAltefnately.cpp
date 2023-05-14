#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2)
{
    int n=word1.size(),m=word2.size();
    string s="";
    int i=0,j=0;
    while(i<n && j<m)
    {
        s+=word1[i];
        s+=word2[j];
        i++;
        j++;
    }
    while(i<n)
    {
        s+=word1[i];
        i++;
    }
    while(j<m)
    {
        s+=word2[j];
        j++;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}