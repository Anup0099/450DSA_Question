//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string convert(string s, int r) {
        int n = s.length();
    vector<string> ans(r);
    int currow = 0, mod = 0;
    if(r==1)return s;
    for (int i = 0; i < n; i++)
    {
        
        ans[currow].push_back(s[i]);
        if (currow == 0)
            mod = 1;
        if (currow == r - 1)
            mod = -1;
        currow += mod;
    }
    s.clear();
    for (auto it : ans)
    {
        s += it;
    }
    return s;
        
    }
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends