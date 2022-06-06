#include <bits/stdc++.h>
using namespace std;

int rearrange(string s,string target){
    map<char,int>map,map1;
    for(auto &ch:target){
        map[ch]++;

    }
    for(auto &ch:s){
        map1[ch]++;
    }
    int res =INT_MAX;
    for(auto x:map1){
        char ch = x.first;
        int count = x.second;
        int count2 = map1[ch];
        res = min(res,count2/count);
    }
    return res;
}
int main(){

}