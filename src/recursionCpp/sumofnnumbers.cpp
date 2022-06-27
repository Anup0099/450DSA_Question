#include <bits/stdc++.h>
using namespace std;

void f(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}
//abobe is parametric recursion
//below is non-parametric recursion functional 

int  f(int n){
    if(n==0)return 0;
    return n+f(n-1);                
}
//factorial is non-parametric recursion
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);

}
int main(){
    int n;
    cin>>n;//3
   cout<<( f(n)); //sum=6
    return 0;
}