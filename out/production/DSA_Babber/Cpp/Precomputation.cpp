#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int ar[N][N];
long long pf[N][N];
// int main()
// {
//     int n;
//     cin >> n;
    
//     for (size_t i = 1; i <=n; i++)
//     {
//         /* code */
//         cin >> a[i];
//         pf[i] = pf[i-1]+a[i];
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         /* code */
//         int l, r;
//         cin >> l >> r;
//         long long sum = 0;
//         // for (size_t i = l; i <= r; ++i)
//         // {
//         //     /* code */
//         //     sum += a[i];
//         // }
//         // cout<<sum<<endl;
//         cout<<pf[r]-pf[l-1]<<endl;
//     }
// }

int main(){
int n;cin>>n;
for (size_t i = 1; i <=n; ++i)
{
    /* code */
    for (size_t j = 1; j <=n; ++j)
    {
        /* code */
        cin>>ar[i][j];
        pf[i][j] = ar[i][j]+pf[i-1];
    }
    
}
int q;
cin>>q;
while (q--)
{
    /* code */

}


}

