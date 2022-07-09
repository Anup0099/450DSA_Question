#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    sort(str.begin(), str.end());
    int count = 0;
    set<string> s;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '{' || str[i] == '}' || str[i] == ',' || str[i] == ' ')
            
        {
            continue;
        }
        else{
            if(str[i]!=str[i+1]){
                count++;
                ans += str[i];
            }
        }
    }
    s.insert(ans);
    cout<<count<<endl;
}