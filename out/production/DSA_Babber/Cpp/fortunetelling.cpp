#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int a = n % 10;
        product *= a;
        sum += a;
        n = n / 10;
    }
    int ans = product - sum;
    return ans;
}
int hammingWeight(uint32_t n)
{
    //checking last bit

    int count=0;
    while (n!=0)
    {
        /* code */
        if(n&1){
            count++;

        }
        n=n>>1;
    }
    return count;
    
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n, x, y;
    //     cin >> n >> x >> y;
    //     int arr[n];
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         /* code */
    //         cin >> arr[i];
    //     }
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         /* code */
    //         if (x + arr[i] == y || x ^ arr[i] == y)
    //         {
    //             cout << "Alice" << endl;
    //             break;
    //         }
    //         else if (((x + arr[i]) ^ (arr[i+1]))==y)
    //         {
    //             cout << "Alice" << endl;
    //             break;
    //         }

    //         else
    //         {
    //             cout << "Bob" << endl;
    //             break;
    //         }
    //     }
    // }
    cout << subtractProductAndSum(234) << endl;
}