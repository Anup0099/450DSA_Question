#include <bits/stdc++.h>
using namespace std;
int n, a[105], i, k, m;
main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i], m = m + a[i];
    sort(a + 1, a + n + 1);//   sort(a+1,a+n+1); 
    for (i = n; i >= 1; i--)
    {
        k = k + a[i];//   
        if (k * 2 > m)
            break;
    }
    
    cout << n - i + 1;
}
// for(i=n;i>=1;i--)
// {
// k=k+a[i];
// if(k*2>m) break;
// }
// cout<<n-i+1;

// }

