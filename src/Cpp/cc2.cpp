#include <bits/stdc++.h>
using namespace std;
// Problem
// Alice is still not satisfied with Bob's math skills so she gave him a new challenge.

// Given a positive integer NN, find any 33 distinct positive integers A, B, CA,B,C such that:

// The product of any two of these 33 integers is a divisor of NN.
// The product of all three integers is a multiple of NN.
// If multiple solutions exist, you may print any of them.
// Print -1−1 if no solution exists.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first and only line of each test case contains a single integer, NN.
// Output Format
// For each test case, output on a new line three space-separated integers satisfying the given condition.
// Print -1−1 if the answer does not exist.
vector<int> Factors(int n)
{
    vector<int> ans;
    ans.push_back(1);
    // ans.push_back(n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 )
        {
            ans.push_back(i);
            ans.push_back(n / i);
            break;
            
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans = Factors(n);
        if (ans.size() < 3)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
        }
    }
}