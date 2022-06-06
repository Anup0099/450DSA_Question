#include <bits/stdc++.h>
using namespace std;
// void fun(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     fun(n-1);
//     cout<<n<<endl;

// }
// void fun2(int n){
//     if(n==0) return;
//     fun2(n-1);
//      cout<<n<<endl;
//     fun2(n-1);
// }
// void reverse(string s){
//     string a =s;
//     reverse(a.begin(), a.end());
//     if(a==s){
//         cout<<"palindrome"<<endl;

//     }else{
//         cout<<"not palindrome"<<endl;
//     }


int main(){
    int i,j,len;
    char s[100]; 
    gets(s); 
    len = strlen(s);
    for(i=0;i<len-1;i++){
        for(j=0;j<len-i-1;j++){
            if(s[j]!='+'){
                if(s[j]>s[j+1]){
                    char temp =s[j]; 
                    s[j] = s[j+2];
                    s[j+2] = temp;
                }
            }
        }
        puts(s);
        cout<<s<<endl;
    }

    
}