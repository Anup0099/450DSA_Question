#include <bits/stdc++.h> 
using namespace std; 
int main() {
    long long left, right;
    cin>>left>>right;
    long long range=right-(left-1);

    if(range<3 || left%2==1 && range<4){
        cout<<-1;
    }else{
        if(left%2==0){
            cout<<left<<" "<<left+1<<" "<<left+2;
        }else{
            cout<<left+1<<" "<<left+2<<" "<<left+3;
        }
    }
} 