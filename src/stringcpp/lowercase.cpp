#include <bits/stdc++.h> 
using namespace std; 
// Given a lowercase Latin character (letter), check if it appears in the string codeforces
// .
// The first line of the input contains an integer t
//  (1≤t≤26
// ) — the number of test cases.

// The only line of each test case contains a character c
//  — a single lowercase Latin character (letter).

// Output
// For each test case, output "YES" (without quotes) if c
//  satisfies the condition, and "NO" (without quotes) otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
int main() {
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        string s = "codeforces";
        int n = s.length();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                count++;
            }
        }
        if (count > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;

} 