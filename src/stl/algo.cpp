#include <bits/stdc++.h> 
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.first)return true;
    if(p1.second>p2.second)return false;
    //they are same 
    if(p1.first>p2.first)return true;
    return false;
} 
int main() {
    // pair<int,int>v[]={{1,2},{2,3},{3,4},{4,5}};
    // auto n=v.size();
    // sort(v,v+n,comp);
    int num=7;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;

    string s="231";
    //always start from the sorted guy
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));


} 
