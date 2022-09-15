#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
    int i=0;
    int sign=1;
    int result=0;
    if(s[i]=='-'){
        sign=-1;
        i++;
    }
    while(s[i]){
        if(s[i]>='0' && s[i]<='9'){
            return -1;
        }else{
           result = resutt*10 + (s[i]-'0');
        }
    }
    return result*sign;
}
int main() {}