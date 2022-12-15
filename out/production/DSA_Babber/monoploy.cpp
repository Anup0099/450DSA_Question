#include <bits/stdc++.h>
using namespace std;
// Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

// There are exactly 33 companies in the market each of whose revenues are denoted by R_1R
// 1
// ​
//  , R_2R
// 2
// ​
//   and R_3R
// 3
// ​
//   respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.

// Given the revenue of the 33 companies, help Chef determine if any of them has a monopolistic advantage
// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line of input containing three space separated integers R_1R
// 1
// ​
//  , R_2R
// 2
// ​
//   and R_3R
// 3
// ​
//   denoting the revenue of the three companies respectively.
// Output Format
// For each test case, output \texttt{YES}YES if any of the companies has a monopolistic advantage over its competitors, else output \texttt{NO}NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b + c || b > a + c || c > a + b)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
}