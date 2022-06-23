#include <bits/stdc++.h>
using namespace std;

string greatestLetter(string s)
{
    string ans = "";
    string ans2 = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]) )
        {
            ans += s[i];
        }
        else
        {
            ans2 += s[i];
        }
    }
    cout<<ans<<endl;
    cout<<ans2<<endl;
    sort(ans.begin(), ans.end());
    sort(ans2.begin(), ans2.end());
    cout << ans << endl;
    cout << ans2 << endl;
    return ans;

}
int main()
{
    string s = "lEeTcOdE";
    greatestLetter(s);
    return 0;
}