#include <bits/stdc++.h>
using namespace std;
int minIndexChar(string str, string patt)
{
    // for (int i = 0; i < str.length(); i++)
    // {
    //     for (int j = 0; j < patt.length(); j++)
    //     {
    //         if (str[i] == patt[j])
    //         {
    //             return i;
    //         }
    //     }
    // }
    // return -1;
    //optimize approach for this problem
    map<char,int>m;
    for(int i=0;i<patt.length();i++)
    {
        m[patt[i]]++;
    }
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    for(int i=0;i<str.length();i++){
        if(m[str[i]]!=0)
        {
            return i;
        }
    }
    return -1;
   
}
int main() {
    string str = "geeksforgeeks";
    string patt = "set";
    cout << minIndexChar(str, patt);
}