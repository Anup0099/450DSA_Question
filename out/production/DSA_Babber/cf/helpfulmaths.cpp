#include <bits/stdc++.h>
using namespace std;
int main(){
       string str1,str2="",str3="";
    cin>>str1;
    for(int i=0;i<str1.size();i++){
        if(str1[i]=='+'){
            continue;
        }
        str2+=str1[i];
    }
    sort(str2.begin(),str2.end());
    for(int i=0;i<str2.size();i++){
        if(i==str2.size()-1){
            str3=str3+str2[i];
            continue;
        }
        str3=str3+str2[i]+'+';
    }
    cout<<str3<<endl;
}
// // int main()

// {
//     string str="";
//     cin >> str;
//     int n = str.length();
//     string str1 = "";
//     string str3 = "";

//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == '+')
//         {
//             continue;
//         }
//         else
//         {
//             str1 += str[i];
//         }
//     }
//     sort(str1.begin(), str1.end());

//     for (int i = 0; i < str1.size(); i++)
//     {
//         if(i==str1.size()-1){
//             str3 += str1[i];
//         }
//         str3 += str1[i] + '+';
//     }
//     cout << str3<<endl;
// }