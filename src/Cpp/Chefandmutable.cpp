#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

// bool vowel(char x)
// {
//     if (x == 'a' || x == 'e' || x == 'i' ||
//         x == 'o' || x == 'u' || x == 'A' ||
//         x == 'E' || x == 'I' || x == 'O' || x == 'U')
//     {

//         return true;
//     }
//     return false;
// }
// int main()
// {

//     string s, t;
//     cin >> s >> t;
//     for (size_t i = 0; i < s.length(); i++)
//     {
//         /* code */
//         if (vowel(s.at(i)) == true && vowel(t.at(i)) == true)
//         {
//             cout << "YES" << endl;
//             break;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//             break;
//         }
//         cout << "NO" << endl;
//     }
//     return 0;
// }





bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    else{
        return false;
    }
}
bool iscons(char ch){
    return(isvowel(ch) ? false : true);
}
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int n = s.length();
    for(int i=0;i<n;i++){
        if((!(isvowel(s[i]) && isvowel(t[i])) && !(iscons(s[i]) && iscons(t[i])))){
            cout<<"NO"<<endl;
            t="";
            break;
        }
    }
    if(t.length()>0)
      cout<<"YES"<<endl;
}

