#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    // while (t--)
    // {
    //     /* code */
    //     int n;
    //     cin >> n;
    //     int arr[n];
    //     for (size_t i = 0; i < n; i++)
    //     {
    //         /* code */

    //         cin >> arr[i];
    //     }
    //     int max = *max_element(arr, arr + n);
    //     int min =*min_element(arr,arr+n);
    //     int count = max-min;
       
    //     cout << count << endl;
    // }

    while (t--)
    {
        /* code */
        int a,b,c;cin>>a>>b>>c;
        int a1= b-a;
        int a2=c-b;
        int ans = abs(a1 - a2);
        int mini = min(min(a,b),c);
        int d = mini%ans;
        
        
    }
    
}