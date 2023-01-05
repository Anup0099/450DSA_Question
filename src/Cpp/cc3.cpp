#include <bits/stdc++.h>
using namespace std;
// Problem
// Rushitote went to a programming contest to distribute apples and oranges to the contestants.
// He has NN apples and MM oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:

// Every contestant gets an equal number of apples; and
// Every contestant gets an equal number of oranges.
// Note that every fruit with Rushitote must be distributed, there cannot be any left over.

// For example, 22 apples and 44 oranges can be distributed equally to two contestants, where each one receives 11 apple and 22 oranges.
// However, 22 apples and 55 oranges can only be distributed equally to one contestant.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first and only line of each test case contains two space-separated integers NN and MM — the number of apples and oranges, respectively.
// Output Format
// For each test case, output on a new line the answer: the maximum number of contestants such that everyone receives an equal number of apples and an equal number of oranges.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << __gcd(a, b) << endl;
        }
        else
        {
            cout << __gcd(b, a) << endl;
        }
    }
}