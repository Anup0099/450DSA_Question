#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    // first digit
    int first = s[0] - '0';
    cout<<first<<endl;
    if (first == 9)
    {
        s[0] = '9';
    }
    else
    {
        if (first > 4)
        {
            s[0] = ((9 - first) + '0');
        }
    }
    for (int i = 1; i <n; i++){
        int a=s[i]-'0';
        if(a<5 || a==0){
            continue;

        }else{
            s[i]=((9-a) + '0');
        }
    }

    cout<<s<<endl;
    return 0;
}