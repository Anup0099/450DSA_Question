#include <bits/stdc++.h> 
using namespace std; 
int evaluatePostFix(string s){
    int n=s.size();
    stack<int>s;
    for(int i=0; i<n; i++){
        if(s[i]>='0' && s[i]<='9'){
            s.push(s[i]-'0');
        }
        else{
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(s[i]=='+'){
                s.push(a+b);
            }
            else if(s[i]=='-'){
                s.push(b-a);
            }
            else if(s[i]=='*'){
                s.push(a*b);
            }
            else if(s[i]=='/'){
                s.push(b/a);
            }
        }
    }
}
int main() {} 