#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<int, int> ma;
        int count = 0;
        for (int i = 0; i < n; i++)
            ma[arr[i]]++;
        int ans = 0;
        for (auto it : ma)
        {
            ans = max(ans, it.second);
        }
        for (auto it : ma)
        {
            if (it.second == ans)

            {
                count++;
            }
        }
        // cout<<count<<endl;
        if(count>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        // if (ans > 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}