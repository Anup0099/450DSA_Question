#include <bits/stdc++.h>
using namespace std;

bool uniqueCharacters(string str)
{

    // If at any time we encounter 2
    // same characters, return false
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }
    return true;
}
int CountPS(char str[], int n)
{
    // create empty 2-D matrix that counts all palindrome
    // substring. dp[i][j] stores counts of palindromic
    // substrings in st[i..j]
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
 
    // P[i][j] = true if substring str[i..j] is palindrome,
    // else false
    bool P[n][n];
    memset(P, false, sizeof(P));
 
    // palindrome of single length
    for (int i = 0; i < n; i++)
        P[i][i] = true;
 
    // palindrome of length 2
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            P[i][i + 1] = true;
            dp[i][i + 1] = 1;
        }
    }
 
    // Palindromes of length more than 2. This loop is
    // similar to Matrix Chain Multiplication. We start with
    // a gap of length 2 and fill the DP table in a way that
    // gap between starting and ending indexes increases one
    // by one by outer loop.
    for (int gap = 2; gap < n; gap++) {
        // Pick starting point for current gap
        for (int i = 0; i < n - gap; i++) {
            // Set ending point
            int j = gap + i;
 
            // If current string is palindrome
            if (str[i] == str[j] && P[i + 1][j - 1])
                P[i][j] = true;
 
            // Add current palindrome substring ( + 1)
            // and rest palindrome substring (dp[i][j-1] +
            // dp[i+1][j]) remove common palindrome
            // substrings (- dp[i+1][j-1])
            if (P[i][j] == true)
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] + 1
                           - dp[i + 1][j - 1];
            else
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j]
                           - dp[i + 1][j - 1];
        }
    }
 
    // return total palindromic substrings
    return dp[0][n - 1];
}
 
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        char str[100];
        cin>>str;
         int no = strlen(str);
        
        
       

        if (no <= 1)
        {
            cout << "YES" << endl;
        }
        else if (uniqueCharacters(str) == true)
        {

            cout << "YES" << endl;
        }
        else if(CountPS(str,n)>1)
        {
            cout << "NO" << endl;
        }
    }
}