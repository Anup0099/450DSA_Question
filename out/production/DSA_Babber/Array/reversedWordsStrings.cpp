#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        while (i < s.length() && s[i] == ' ')
            i++;
        int j = i;
        while (j < s.length() && s[j] != ' ')
            j++;
        reverse(s.begin() + i, s.begin() + j);
        ans += s.substr(i, j - i);
        ans += " ";
        i = j;
    }
    if (ans.length() > 0)
        ans.pop_back();
    return ans;

}
int main() {
    string s = "  hello world!  ";
    cout << reverseWords(s) << endl;
    return 0;
}