//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string convert(string s, int n) {
        //code
        int mod=0,currow=0;
        vector<string>ans(n);
        if(n==1)return s;
        for(auto it:s)
        {
            ans[currow].push_back(it);
            if(currow==0)
            {
                mod=1;
            }
            if(currow==n-1)
            {
                mod=-1;
            }
            currow += mod;
        }
        s.clear();
        for(auto it:ans)
        {
            s.append(it);
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