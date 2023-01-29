#include <bits/stdc++.h>
using namespace std;
void DeleteMiddle(stack<int>&s,int i,int n){
    if(i==n)return ;
    int top=s.top();
    DeleteMiddle(s,i+1,n);
    if(i==n/2){
        return;
    }else{
        s.push();
    }
}
void deleteMid(stack<int> &s, int sizeOfStack)
{
    // code here..
    DeleteMiddle(s, 0, s.size());
}
int main() {}