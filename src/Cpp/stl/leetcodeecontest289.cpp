#include <bits/stdc++.h>
using namespace std;


 int percentageLetter(string s, char letter) {
     int count = 0,ans;
        for(int i = 0; i <s.length();i++){
            if(s.at(i) ==letter) count++;
            // cout<<count;
        }
        // if(count == 0){
        //     return 0;
        // }else{
        //    return  ans = (count/s.length())*100;
        // }
        ans = floor((count/s.length())*100);
        return ans;
    }
int maxmumbags(vector<int> &capacity,vector<int> &rocks,int additionalrocks){
    vector<int>v;
    for(int i=0;i<rocks.size();i++){
        v.push_back(capacity[i]-rocks[i]);
    }
    sort(v.begin(), v.end());
    int ans=0,count=0;
    for(int i:v){
        count +=i;
        if(count>additionalrocks){
            break;
        }
        ans++;
    }
    return ans;
}
    int main(){
        vector<int>v ={2,3,4,5};
        vector<int>vi={1,2,4,4};
        int ad=2;
        cout<<maxmumbags(vi,v,ad);
    }