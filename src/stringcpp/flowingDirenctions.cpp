#include <bits/stdc++.h> 
using namespace std;
// Alperen is standing at the point (0,0)
// . He is given a string s
//  of length n
//  and performs n
//  moves. The i
// -th move is as follows:

// if si=L
// , then move one unit left;
// if si=R
// , then move one unit right;
// if si=U
// , then move one unit up;
// if si=D
// , then move one unit down.
// If Alperen starts at the center point, he can make the four moves shown.
// There is a candy at (1,1)
//  (that is, one unit above and one unit to the right of Alperen's starting point). You need to determine if Alperen ever passes the candy.
// Alperen's path in the first test case.
// Input
// The first line of the input contains an integer t
//  (1≤t≤1000
// ) — the number of testcases.

// The first line of each test case contains an integer n
//  (1≤n≤50
// ) — the length of the string.

// The second line of each test case contains a string s
//  of length n
//  consisting of characters L
// , R
// , D
// , and U
// , denoting the moves Alperen makes.

// Output
// For each test case, output "YES" (without quotes) if Alperen passes the candy, and "NO" (without quotes) otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer). 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                x--;
            } else if (s[i] == 'R') {
                x++;
            } else if (s[i] == 'U') {
                y++;
            } else if (s[i] == 'D') {
                y--;
            }
            if (x == 1 && y == 1) {
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