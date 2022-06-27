#include <bits/stdc++.h>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    f(i + 1, n); // 5 4 3 2 1
    cout << i << endl;
    f(i + 1, n); // 1 2 3 4 5
}
//dont use (i+1)

int main()
{
    int n, i = 1;
    cin >> n;
    f(i, n);
    return 0;
}