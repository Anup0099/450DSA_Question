#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1)return n;
    int last=f(n-1);
    int start=f(n-2);
    return last+start;
}

int main(){
     cout<<f(4)<<endl;
}