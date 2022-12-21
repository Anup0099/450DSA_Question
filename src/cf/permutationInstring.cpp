#include <bits/stdc++.h> 
using namespace std;
bool checkInclusion(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    if(n1>n2){
        return false;
    }
    vector<int> count1(26,0);
    vector<int> count2(26,0);
    for(int i=0;i<n1;i++){
        count1[s1[i]-'a']++;
        count2[s2[i]-'a']++;
    }
    for(int i=n1;i<n2;i++){
        if(count1==count2){
            return true;
        }
        count2[s2[i]-'a']++;
        count2[s2[i-n1]-'a']--;
    }
    return count1==count2;
} 
int main() {
    string s1,s2;
    cin>>s1>>s2;
    cout<<checkInclusion(s1,s2);
} 