#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    while (n--)
    {
        // int time;cin>>time;
        // if(time>=30){
        //     cout<<"YES"<<endl;
        // }else{
        //     cout<<"NO"<<endl;
        // }

        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) % 2 != 0 || (b + c) % 2 != 0 || (c + a) % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
