#include <bits/stdc++.h>
using namespace std;
//  Three guys play a game: first, each person writes down n distinct words of length 3

// . Then, they total up the number of points as follows:

//     if a word was written by one person — that person gets 3 points,
//     if a word was written by two people — each of the two gets 1 point,
//     if a word was written by all — nobody gets any points.

// In the end, how many points does each player have?
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v1.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v2.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v3.push_back(s);
        }


    
    }
}