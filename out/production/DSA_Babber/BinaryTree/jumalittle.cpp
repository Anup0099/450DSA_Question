#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    if(n%6==0 || n%6==1 || n%6==3)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}