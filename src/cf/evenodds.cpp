#include <bits/stdc++.h>
using namespace std;

// int main()
// { const unsigned int m = 1000000007;
//     int n, k;
//     cin >> n >> k;
//     // for (int i = 1; i < n + 1; i++)
//     // {
//     //     cout << i << " ";
//     // }

//     vector<int> v1;
//     vector<int> v2;

//     for (int i = 1; i < n + 1; i++)
//     {
//         if (i % 2 != 0)
//         {
//             v1.push_back(i);
//         }
//         else
//         {
//             v2.push_back(i);
//         }
//     }
//     // for (int i = 0; i < v2.size(); i++)
//     // {
//     //     cout << v2[i] << " ";
//     // }
//     v1.insert(v1.end(), v2.begin(), v2.end());
//     // for (int i = 0; i < v1.size(); i++)
//     // {
//     //     cout << v1[i] << " ";
//     // }
//     int ans=0;
    
//     for (int i = 0; i < v1.size(); i++)
//     {
//          ans= v1[k-1];
//     }
//     cout<<ans%m<<endl;
// }




int main()
{
    long long n, k;
    n=10,k=3;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}