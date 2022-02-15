#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      ll  int n;
        cin >> n;
        vector<ll>dp(n+1,0);
        dp[0]=1;

        for (size_t i = 1; i < n+1; i++)
        {
            for (size_t x = 1; x < 6; x++)
            {   if(x>i)
                    break;
                dp[i] += dp[i-x];
            }
            
        }
        cout<<dp[n]<<endl;
        
    }
}