#include <bits/stdc++.h>
using namespace std;

// An integer array a1,a2,…,an is being transformed into an array of lowercase English letters using the following prodecure:

// While there is at least one number in the array:

// Choose any number x from the array a, and any letter of the English alphabet y.
// Replace all occurrences of number x with the letter y.
// For example, if we initially had an array a=[2,3,2,4,1], then we could transform it the following way:

// Choose the number 2 and the letter c. After that a=[c,3,c,4,1].
// Choose the number 3 and the letter a. After that a=[c,a,c,4,1].
// Choose the number 4 and the letter t. After that a=[c,a,c,t,1].
// Choose the number 1 and the letter a. After that a=[c,a,c,t,a].
// After the transformation all letters are united into a string, in our example we get the string "cacta".

// Having the array a and the string s determine if the string s could be got from the array a after the described transformation?

// Input
// The first line contains a single integer t (1≤t≤103) — the number of test cases.

// Then the description of the test cases follows.

// The first line of each test case contains a single integer n (1≤n≤50) — the length of the array a and the string s.

// The second line of each test case contains exactly n integers: a1,a2,…,an (1≤ai≤50) — the elements of the array a.

// The third line of each test case contains a string s of length n, consisting of lowercase English letters.

// Output
// For each test case, output "YES", if we can get the string s from the array a, and "NO" otherwise. You can output each letter in any case.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        string st;
        cin >> st;
        unordered_map<int, char> mp;
        for (int i = 0; i < n; i++)
        {
            if (!mp[ar[i]])
                mp[ar[i]] = st[i];
        }
        string str = "";
        for (int i = 0; i < n; i++)
        {
            str += mp[ar[i]];
        }
        if (str == st)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}