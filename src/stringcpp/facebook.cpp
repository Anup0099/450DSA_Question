#include <bits/stdc++.h> 
using namespace std;
// A post on facebook is said to be more popular if the number of likes on the post is strictly greater than the number of likes on some other post. In case the number of likes is same, the post having more comments is more popular.

// Given arrays 
// �
// A and 
// �
// B, each having size 
// �
// N, such that the number of likes and comments on the 
// �
// �
// ℎ
// i 
// th
//   post are 
// �
// �
// A 
// i
// ​
//   and 
// �
// �
// B 
// i
// ​
//   respectively, find out which post is most popular.

// It is guaranteed that the number of comments on all the posts is distinct.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer 
// �
// N, the number of posts.
// The second line of each test case contains 
// �
// N space-separated integers 
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   — where 
// �
// �
// A 
// i
// ​
//   is the number of likes on the 
// �
// �
// ℎ
// i 
// th
//   post.
// The third line of each test case contains 
// �
// N space-separated integers 
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// B 
// 1
// ​
//  ,B 
// 2
// ​
//  ,…,B 
// N
// ​
//   — where 
// �
// �
// B 
// i
// ​
//   is the number of comments on the 
// �
// �
// ℎ
// i 
// th
//   post.
// Output Format
// For each test case, output on a new line, an integer in the range 
// 1
// 1 to 
// �
// N, denoting the index of the post which is most popular among the 
// �
// N posts. 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > a[max]) {
                max = i;
            }
            else if (a[i] == a[max]) {
                if (b[i] > b[max]) {
                    max = i;
                }
            }
        }
        cout << max + 1 << endl;
    }
    return 0;
} 