#include <bits/stdc++.h>
using namespace std;
void pritn(int n)
{

    if (n == 0)
        return;
    cout << "I love Recursion" << endl;
    pritn(n - 1);
}
void solve()
{
    int n;
    cin >> n;
    pritn(n);
}

int main()
{
    solve();
}