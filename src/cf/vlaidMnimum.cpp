#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
       for(int i = 0; i < 3; i++){
        if(a[i] == a[i+1]){
            cout << "YES" << endl;
            break;
        }
        else{
            cout << "NO" << endl;
            break;
        }
       }
    }
}