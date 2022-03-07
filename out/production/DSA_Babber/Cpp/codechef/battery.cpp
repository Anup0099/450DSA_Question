#include <bits/stdc++.h>
using namespace std;


// int main(){
//     int t;cin >> t;
//     while(t--){
//         int x;cin>>x;
//         if(x<=15){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }

//     }
// }

// int main(){
//     int t;cin>>t;
//     while(t--){
//         int x1,x2,y1,y2;
//         cin >>x1>>x2>>y1>>y2;
//         int a = abs(x1 -y1);
//         int b = abs(x2 -y2);
//         int ans = max(a,b);
//         cout<<ans<<endl;
//     }
// }

// int main(){
//     int t;cin >> t;
//     while (t--)
//     {
//         int x;cin>>x;
//         if(x%4==0){
//             cout<<"GOOD"<<endl;

//         }else{
//             cout<<"NOT GOOD"<<endl;
//         }
//     }
    
// }

// int main(){
//     int x,y;cin >> x>>y;
//     int aa=x-y;
//     int bb = y/2;
//     int ans=aa+bb;
 
//     cout<<ans<<endl;
// }


int main(){
    int t;cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        int ans = n/2;
        int sum1=0,sum2=0;
        
        for (int i = 0; i < ans; i++)
        {   
            sum1 += arr[i];
        }
        for (int i = ans; i <n; i++)
        {
            sum2 += arr[i];
        }

        int anss= max(sum1,sum2);
        cout<<anss<<endl;
        
    }
    
}