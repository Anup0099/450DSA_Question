#include <bits/stdc++.h>
using namespace std;
long power(int N, int R)
{
    if (R == 0)
    {
        return 1;
    }
    else
    {
        return N * power(N, R - 1);
    }
}

int main()
{
    int n=2;
    int r=3;
    cout<<power(n,r);
}