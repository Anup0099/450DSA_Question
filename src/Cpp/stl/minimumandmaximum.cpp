#include <bits/stdc++.h>
using namespace std;


int main(){
    int temp;cin>>temp;
    while (temp--)
    {
        int l1,l2,r1,r2;
        cin>>l1>>l2>>r1>>r2;
        if(l1>r2 || l2>r1){
            cout<<l1+l2<<endl;
        }
        else{
            cout<<max(l1,l2)<<endl;
        }

        
    }
  
    
}