#include <bits/stdc++.h>
using namespace std;


// recursion is mainlt function call itself until a specified condition is met.

void func(){
    cout<<"hello world!"<<endl;
    func(); // recursion
}
int main(){
    func();
    return 0;
}