//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        // code here
        // code here
    vector<vector<long long>> dp(N + 1, vector<long long>(X + 1, 0));
    for (int i = 1; i <= M && i <= X; i++)
    {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= X; j++)
        {
            for (int k = 1; k <= M && k < j; k++)
            {
                dp[i][j] += dp[i - 1][j - k];
            }
        }
    }
    return dp[N][X];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends