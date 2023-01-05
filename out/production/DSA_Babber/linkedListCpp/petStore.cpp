#include <bits/stdc++.h>
using namespace std;
// Alice and Bob went to a pet store. There are NN animals in the store where the i^{th}i
// th
//   animal is of type A_iA
// i
// ​
//  .

// Alice decides to buy some of these NN animals. Bob decides that he will buy all the animals left in the store after Alice has made the purchase.

// Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer NN — the number of animals in the store.
// The next line contains NN space separated integers, denoting the type of each animal.
// Output Format
// For each test case, output on a new line, YES, if it is possible that Alice and Bob end up with exactly same multiset of animals and NO otherwise.

// You may print each character in uppercase or lowercase. For example, the strings YES, yes, Yes, and yES are considered identical.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            s.insert(ar[i]);
        }
        int count = 0;
        
        if (count == n / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}