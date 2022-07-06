

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "No" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}