#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
      unordered_map<char, int> mapp;
        for (size_t i = 0; i < s.size(); i++)
        {
            mapp[s[i]]++;
        }

        if(mapp['L']>=2 && mapp['T']>=2 && mapp['I']>=2 && mapp['M']&& mapp['E']>=2 ){
            cout<<"YES"<<endl;
        }else if(mapp.size()==5 && mapp['L']>=2 && mapp['T']>=2 && mapp['I']>=2 && mapp['M']&& mapp['E']>=1 ) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO";
        }
    }
}