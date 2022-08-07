#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        vector<int> v(a);
        vector<int> v1(b);

        for (int i = 0; i < a; i++)
            cin >> v[i];
        for (int i = 0; i < b; i++)
            cin >> v1[i];
        for (int i = 0; i < a; i++)
        {
                cout << v[i]<< " ";
        }
        
        
        while (a!=b)
        {
            for (int i = 0; i < a; i++)
            {
                v[i+1]=min(v[i],v[i+1]);
                v.erase(v.begin());
                
            }
            
        }
        
        
        if (a==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
