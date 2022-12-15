#include <bits/stdc++.h>
using namespace std;

int bagOfTokensScore(vector<int> &tokens, int power)
{
    sort(tokens.begin(), tokens.end());
    int i = 0, j = tokens.size() - 1, points = 0, maxpoints = 0;
    while (i <= j)
    {
        if (power >= tokens[i])
        {
            power -= tokens[i];
            i++;
            points++;
            maxpoints = max(maxpoints, points);
        }
        else if (points > 0)
        {
            points--;
            power += tokens[j--];
        }
        else
        {
            return maxpoints;
        }
    }
    return maxpoints;
}

int main()
{
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int y;
    //     cin >> y;
    //     v.push_back(y);
    // }
    // int power;
    // cin >> power;
    // cout << bagOfTokensScore(v, power);

    vector<int> v = {100, 200, 300, 400};
    int power = 200;
    cout << bagOfTokensScore(v, power);
}