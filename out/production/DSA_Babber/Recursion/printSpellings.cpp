#include <bits/stdc++.h> 
using namespace std;
char words[][10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void pritnSPelling(int n){
    //base case for recursion
    if(n==0){
        return;
    }
    //recursion case first print the spellings of(123)
    pritnSPelling(n/10);
    int digit=n%10;
    cout << words[digit] << " ";
} 
bool palindrome(string s){
    if(s.length()==0){
        return true;
    }
    if(s[0]==s[s.length()-1]){
        return palindrome(s.substr(1,s.length()-2));
    }
    return false;
}
int main() {
    // int n;
    // cin >> n;
    // pritnSPelling(n);
    // cout << endl;
     string s="madam";
   
    if(palindrome(s)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
} 