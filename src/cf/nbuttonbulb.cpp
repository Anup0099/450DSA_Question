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
        string s, r;
            cin >> s>>r;
            int count=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]!=r[i]){
                count++;
            }

        }
        if (count%2==0)
        {
            cout << 1<< endl;
        }else{
            cout << 0<< endl;
        }
        


    }
}