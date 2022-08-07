#include <bits/stdc++.h> 
using namespace std;
int lcm(int a,int b){ 
    int maxi=max(a,b);
    while(maxi>0){
        if(a%maxi==0 && b%maxi==0){
            return maxi;
        }
        maxi++;
    }
    return 1;
} 
int gcd(int a,int b){ 
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
} 