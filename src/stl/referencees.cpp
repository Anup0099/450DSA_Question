#include <bits/stdc++.h>
using namespace std;

 

int main(){
    vector<int>c{10,20,30,40,50,60,70,80,90,100};
    for(auto it:c){
        it=it+10;
        // it doesn't modify any eleelment in the vector
    }
    // when uwant to modify something u have to use ampercent operator
     for(auto &it:c){
        it=it+10;
    }
    for(auto x:c){
        cout<<x;
    }
}