#include <bits/stdc++.h>
using namespace std;

void twodprefix(){
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //create a prfix array 
    int prefix[n+1];
    int q;cin>>q;
    while (q--)
    {
        int i1,j1,i2,j2;
        cin>>i1>>j1>>i2>>j2;

    }
    


}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        if (i = 0)
        {
            prefix[i] = a[i];
        }
        else
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        if((l-1)>0)
        {
            sum = sum - prefix[l - 1];
        }else{
            sum = prefix[l];
        }
        

        cout << sum << endl;
    }
}