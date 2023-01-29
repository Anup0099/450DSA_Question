#include <bits/stdc++.h>
using namespace std;
int nways(int i, string s,vector<int>dp)
{
    
     
     
}
int numDecodings(string s)
{
    vector<int> dp(s.size() + 1, 0);
    return nways(0, s,dp);
}
int main() {
    cout << numDecodings("12134") << endl;
}