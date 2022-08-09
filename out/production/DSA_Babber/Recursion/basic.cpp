#include <bits/stdc++.h> 
using namespace std;

void print(int n){
    if(n==0)return;
    cout<<" "<<n<<endl;
    cout<<"before"<< endl;
    print(n-1);
    cout<<"after"<< endl;
}
int main() {
    print(5);
    return 0;
} 
