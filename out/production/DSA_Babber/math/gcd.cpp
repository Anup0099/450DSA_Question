#include <bits/stdc++.h> 
using namespace std;
int gcd(int a,int b){
    int mini=min(a,b);
    while(mini>0){
        if(a%mini==0 && b%mini==0){
            return mini;
        }
        mini--;
    }
    return 1;
} 
int gcd(int a,int b){ 
    if(b==0) return a;
    return gcd(b,a%b);

}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;

} 