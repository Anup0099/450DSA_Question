#include <bits/stdc++.h> 
using namespace std; 
int main() {
int n,k,count = 0;
cin>>n>>k;
string str;
while(n--){
    int lucky=0;
    cin>>str;
    for(int i=0;i<str.length();++i){
        if(str[i]=='4' || str[i]=='7'){
            lucky++;
        }
    }
    if(lucky<=k){
        count++;
    }

}
cout<<count<<endl;

} 