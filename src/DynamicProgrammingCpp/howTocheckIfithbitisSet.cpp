#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n=23;
    int i=3;
    if(n&(1<<i)){
        cout<<"ith bit is set"<< endl;
    }
    else{
        cout<<"ith bit is not set"<< endl;
    }
    //how to set a bit in a number
    n=n|(1<<i);
    cout<<n;
} 