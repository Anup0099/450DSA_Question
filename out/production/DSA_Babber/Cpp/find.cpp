#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    auto it = find(v.begin(),v.end(),8);
    if(it ==v.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found at index "<<distance(v.begin(),it)<<endl;
    }
}