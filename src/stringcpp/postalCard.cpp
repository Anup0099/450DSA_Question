#include <bits/stdc++.h> 
using namespace std;
// You are given 
// N strings of length six each, consisting of digits. Let 
// S 
// i
// ​
//   be the 
// i-th 
// (i=1,2,…,N) of them.

// You are also given 
// M strings of length three each, consisting of digits. Let 
// T 
// j
// ​
//   be the 
// j-th 
// (j=1,2,…,M) of them.

// Find the number of strings among 
// S 
// 1
// ​
//  ,S 
// 2
// ​
//  ,…,S 
// N
// ​
//   whose last three characters coincide with one or more of 
// T 
// 1
// ​
//  ,T 
// 2
// ​
//  ,…,T 
// M
// ​
//  . 
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i].substr(3, 3) == t[j]) {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
} 