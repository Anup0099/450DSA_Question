#include <bits/stdc++.h>
using namespace std;

void permute(string str,int l,int r){
    if(l==r){
        cout<<str<<" "<<r<<endl;
    }else{
        for(int i=0;i<=r;i++){
            swap(str[l],str[i]); 
            permute(str,l+1,r);
            swap(str[l],str[i]);
        }
    }

}
void fun(int n){
    if(n==0){
        return ;
    }
    cout<<n;
    fun(n-1);
}
int main(){
  fun(5);
}