#include <bits/stdc++.h>
using namespace std;

int minTimeToType(string word)
{
    int time = 0;
    char prev = 'a';
    for (auto ch : word)
    {
        int mini = min(abs(ch - prev), min(prev - 'a' + 'z' - ch + 1, 'z' - prev + ch - 'a' + 1));
        time += 1 + mini;
        prev = ch;
    }
    return time;
}

int main()
{
    string s;
    cin >> s;
    cout << minTimeToType(s);
}