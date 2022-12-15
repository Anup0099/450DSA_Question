#include <bits/stdc++.h> 
using namespace std; 
bool closeStrings(string worl1,string word2){ 
    int n1=word1.size(); 
    int n2=word2.size(); 
    if(n1!=n2) return false; 
    vector<int> freq1(26,0); 
    vector<int> freq2(26,0); 
    for(int i=0;i<n1;i++){ 
        freq1[word1[i]-'a']++; 
        freq2[word2[i]-'a']++; 
    } 
    for(int i=0;i<26;i++){ 
        if((freq1[i]==0 && freq2[i]!=0) || (freq1[i]!=0 && freq2[i]==0)) return false; 
    } 
    for (int i=0; i<freq1.size(); i++){
        cout << freq1[i] << " ";
    }
    
    sort(freq1.begin(),freq1.end()); 
    sort(freq2.begin(),freq2.end()); 
    for(int i=0;i<26;i++){ 
        if(freq1[i]!=freq2[i]) return false; 
    } 
    return true; 
}
int main() {} 