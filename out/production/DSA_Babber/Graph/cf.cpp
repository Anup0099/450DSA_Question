

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] > 0)
            {
                
                a[i]--;
            }
            

            if ( a == b)
            {
                cout << "YES" << endl;
                
            }
           
            
        }
    }
}
