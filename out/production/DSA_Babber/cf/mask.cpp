#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int a =x*100,b=y*10;
        if(a>b){
            cout<<"Cloth"<<endl;
        }else if(a==b){
            cout<<"Cloth"<<endl;
        }
        else{
            cout<<"Disposable"<<endl;
        }
    }
}