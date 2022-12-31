#include <bits/stdc++.h> 
using namespace std;
// Alice and Bob are playing a game using a string SS of length NN. They both have their individual strings which are initially empty.

// Both players take alternate turns. Alice starts first.
// In Alice's turn, she will:

// Choose a prefix of SS;
// Remove the chosen prefix from SS;
// Append the prefix to the end of her string.
// In Bob's turn, he will:

// Choose a suffix of SS;
// Remove the chosen suffix from SS;
// Reverse the suffix and append it to the end of his string.
// Chef has decided to reward them if the length of the Longest Common Subsequence (LCS) of Alice's and Bob's strings is maximized. Help Chef calculate the length of maximum LCS that can be achieved by Alice and Bob.

// Note:

// A prefix is obtained by deleting some (possibly zero) elements from the end of the string.
// A suffix is obtained by deleting some (possibly zero) elements from the beginning of the string.
// Please use fast I/O for input and pypy for python submissions. 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dp[n + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == s[n - j]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[n][n] << endl;
    }
    return 0;
} 