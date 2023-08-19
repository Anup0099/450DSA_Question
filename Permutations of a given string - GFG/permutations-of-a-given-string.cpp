//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void solve(int ind, string s, vector<string> &ans, string temp)
{
    if (ind == s.size())
    {
        ans.push_back(temp);
        return;
    }
    
    for (int i = ind; i < s.size(); i++)
    {
        swap(s[i], s[ind]);
        solve(ind + 1, s, ans, temp + s[ind]);
        swap(s[i], s[ind]);
    }
}
vector<string> find_permutation(string s)
{
    // find permutation of string s
     vector<string> ans;
    set<string> st;

    solve(0, s, ans, "");
    for (auto i : ans)
    {
        st.insert(i);
    }
    ans.clear();
    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends