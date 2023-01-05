#include <bits/stdc++.h> 
using namespace std;
// Each item in Chef’s menu is assigned a spice level from 11 to 1010. Based on the spice level, the item is categorised as:

// MILD: If the spice level is less than 44.
// MEDIUM: If the spice level is greater than equal to 44 but less than 77.
// HOT: If the spice level is greater than equal to 77.
// Given that the spice level of an item is XX, find the category it lies in.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of an integer XX — the spice level of the item.
// Output Format
// For each test case, output on a new line, the category that the item lies in.

// You may print each character in uppercase or lowercase. For example, HOT, hot, Hot, and hOT are all considered the same. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<4){
            cout<<"MILD"<<endl;
        }
        else if(x>=4 && x<7){
            cout<<"MEDIUM"<<endl;
        }
        else{
            cout<<"HOT"<<endl;
        }
    }
} 