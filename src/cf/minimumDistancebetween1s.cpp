#include <bits/stdc++.h>
using namespace std;
//  Chef has a binary string SS of size NN. Chef can perform the following operation on the string:

// Select any substring of size 33 and reverse it.
// Find the minimum distance between any two 11s Chef can achieve, by applying the above operation any (possibly zero) number of times.

// Note:

// The distance between two characters S_iS
// i
// ​
//   and S_jS
// j
// ​
//   is defined as abs(i-j)abs(i−j).
// It is guaranteed that the string contains at least two occurrences of 11.
// A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.
// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer NN — the number of characters in the string.
// The next line contains a binary string of length NN.
// Output Format
// For each test case, output on a new line, the minimum distance between any two 11s Chef can achieve, by applying the above operation any (possibly zero) number of times.
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
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
                if (count == 2)
                {
                    if (min > i)
                    {
                        min = i;
                    }
                }
            }
        }
        cout << min << endl;
    }
}