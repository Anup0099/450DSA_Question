#include <bits/stdc++.h>
using namespace std;


// recursion is mainlt function call itself until a specified condition is met.

void func(int num){
    if(num==0)return;
    cout<<"before"<<endl;
    func(num -1); // recursion
    cout<<"after func call"<<endl;
    cout<<num<<endl;
}
void recursion(int count){

    if(count==0)return;
    cout<<count<<endl;
    recursion(count-1);
    cout <<count<<endl;
    cout<<"after recursion call"<<endl;
}
// output:
// 5 4 3 2 1 1 after 2 after 3 after 4 after 5 after
int main(){
    recursion(5);
    return 0;
}