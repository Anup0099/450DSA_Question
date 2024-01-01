//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int v[], int n)
    {
    

 
    int sum = 0, maxLen = 0 ,endInd = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0)
        {
            maxLen = i + 1;
            endInd = i;
        }
        if (mp.find(sum) != mp.end())
        {
            if (maxLen < i - mp[sum])
            {
                maxLen = i - mp[sum];
                endInd = i;
            }
        }
        else
        {
            mp[sum] = i;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            v[i] = 0;
        }
    }

    return maxLen;
}
        
    
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends