#include <bits/stdc++.h>
using namespace std;
// bool comp(pair<long long,long long>&p1,pair<long long,long long>&p2){
//     return(p1.second<p2.second);
// }
// int main()
// {
//     long long n, k;
//     cin >> n >> k;
//     vector<pair<long long, long long>> v;
//     long long m=v.size();
//     for (long long i = 0; i < n; i++)
//     {
//         long long a, b;
//         cin >> a >> b;
//         v.push_back({a, b});
//     }

//     sort(v.begin(), v.end());
//     for (long long i = 0; i <n; i++)
//     {
//         // cout << v[i].first << " " << v[i].second << endl;
//         if(v[n-1].second>k){
//             cout<<v[n-1].first -(v[n-1].second-k)<<endl;
//             break;
//         }else{
//             cout<<v[n-1].first<<endl;
//             break;
//         }
//     }

// }

int main()
{
    int n, k;
    cin >> n >> k;
    int m = INT_MIN;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b > k)
        {
            m = max(m, a + k - b);
        }
        else
        {
            m = max(m, a);
        }
    }
    cout << m << endl;
}