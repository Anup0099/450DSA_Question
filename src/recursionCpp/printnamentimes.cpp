#include <bits/stdc++.h>
using namespace std;
// void printnamentimes(int n){
//     if(n==2){
//         return;
//     }
//     cout<<n<<endl;
//     printnamentimes(n-1);
// }
void printnamentimes(int i,int n){
    if(i>n){
        return;
    }
    cout<<("anup")<<endl;
    printnamentimes(i+1,n);
}
int main( ){
    int n,i=1;cin>>n;
    printnamentimes(i,n);

}