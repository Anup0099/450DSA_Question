#include <bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> ans;
    ans.push_back(first);
    for (int i = 0; i < encoded.size(); i++)
    {
        int x = ans[i] ^ encoded[i];
        cout << x << " "<< endl;
        ans.push_back(x);
    }
    return ans;
}
int main() {
    vector<int> encoded = {6,2,7,3};
    vector<int> ans = decode(encoded, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}