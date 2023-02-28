//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
       
        int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));

    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int prev_index = ind - 1; prev_index >= -1; prev_index--)
        {

            int notTake = 0 + dp[ind + 1][prev_index + 1];

            int take = 0;

            if (prev_index == -1 || arr[ind] > arr[prev_index])
            {

                take = 1 + dp[ind + 1][ind + 1];
            }

            dp[ind][prev_index + 1] = max(notTake, take);
        }
    }
    // print the array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n + 1; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return dp[0][0];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends