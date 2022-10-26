#include <bits/stdc++.h>
using namespace std;
bool checkIfPangram(string sentence)
{
   unordered_map<char,int>m;
    for(int i=0;i<sentence.length();i++){
         m[sentence[i]]++;
    }
    if(m.size()==26){
        return true;
    }
    return false;
}
int main() {}