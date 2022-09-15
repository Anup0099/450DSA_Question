#include <bits/stdc++.h>
using namespace std;
bool reorderedPowerOf2(int n)
{

    string s = to_string(n);
    sort(s.begin(), s.end());

    vector<string> power;
    for (int i = 0; i <= 30; i++)
    {
        int p = pow(2, i);
        power.push_back(to_string(p));
    }

    for (int i = 0; i <= 30; i++)
    {
        sort(power[i].begin(), power[i].end());
    }
    // for(int i = 0; i <= 30; i++){
    //     cout << power[i] << endl;
    // }
    // for (int i = 0; i <= 30; i++)
    // {
    //     if (power[i] == s)
    //         return true;
    // }
    bool ans=binary_search(power.begin(), power.end(), s);
    return ans;
}
int main() {
    int n = 10;
    bool ans = reorderedPowerOf2(n);
    cout << ans << endl;
}