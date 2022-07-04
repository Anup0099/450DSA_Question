

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    bool istrue = true;

    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!istrue){
                cout<<" ";
            }
            continue;
        }else{
            istrue=false;
            cout<<s[i];/// wub my name
        }
    }
    return 0;
}