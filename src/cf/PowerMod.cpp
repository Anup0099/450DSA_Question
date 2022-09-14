#include <bits/stdc++.h>
using namespace std;
int powmod(int x, int n, int d)
{  if(n==0)
        return 1%d;
    if(n==1)
        return max(abs(x)%d, d-abs(x)%d);
    long long ans = powmod(x, n/2, d)%d;
    ans = (ans*ans)%d;
    if(n%2)
        ans = (ans*x)%d;
    return ans%d; 
}
int main()
{
    int x, n, d;
    cin >> x >> n >> d;
    cout << powmod(x, n, d) << endl;
    return 0;
}