#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a>> b;
//         int s = a + b;
//         int sum = 21 - s;
//         if (sum > 10)
//         {
//             cout << "-1" << endl;
//         }
//         else
//         {
//             cout << sum << endl;
//         }

//     }
// }


    // int t;cin>>t;
    // while(t--){
    //     int a;cin >> a;
    //     int ans = a/10;
    //     if(a%10==0){
    //         cout<<ans << endl;
    //     }else{
    //         cout<<ans+1 << endl;
    //     }

    // }
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int b, c;
            cin >> b >> c;
            int ans = c / b;
            if (c % b == 0)
            {
                cout << ans << endl;
            }
            else{
                cout << ans+1 << endl;
            }

            cout<<ans<<endl;
        }
    }
