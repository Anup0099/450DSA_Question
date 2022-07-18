#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++){
        
        if(a[i]%2==0){
            count++;
        }else{
            count1++;
        }
    }
    cout<<count<<" "<<count1;
    
}