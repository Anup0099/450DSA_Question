#include <bits/stdc++.h>
using namespace std;
// JJ has a binary string SS of length 2 \cdot N2⋅N. He wants to partition it into MM substrings such that:

// 1 \le M \le 2 \cdot N1≤M≤2⋅N
// Each S_iS
// i
// ​
//   belongs to exactly one partition
// None of the partitioned substrings is a palindrome
// For example: One of the valid partitions of 1001001110010011 is \underline{100}\ \underline{10}\ \underline{011}
// 100
// ​

// 10
// ​

// 011
// ​
//  .

// Can you find any partition satisfying the above conditions? If no such partition exists, output -1−1.

// A string is called palindrome if it reads the same backwards and forwards, for e.g. 10011001 and 0010000100 are palindromic strings.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer NN — half the length of the binary string SS.
// The second line of each test case contains a binary string SS of length 2 \cdot N2⋅N containing 00s and 11s only.
bool palindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        string ss = "";
        for (int i = 0; i < n; i++)

        {
            for (int j = 0; j < i; j++)
            {
                ss += s[j];

                if (palindrome(ss))
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}