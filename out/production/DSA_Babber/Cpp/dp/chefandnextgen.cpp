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
        int x;
        cin >> x;
        string s;
        cin >> s;
        int carl = 0, chef = 0, draw = 0;

        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == 'C')
            {
                carl++;
            }
            else if (s[i] == 'N')
            {
                chef++;
            }
            else if (s[i] == 'D')
            {
                draw++;
            }
        }
        int carrlsen = carl * 2+draw*1;
        int chefpoints = chef * 2+draw*1;
        

        if (carrlsen > chefpoints)
        {
            cout << (60 * x) << endl;
        }
        else if (carrlsen == chefpoints)
        {
            cout << (55 * x) << endl;
        }
        else if (carrlsen < chefpoints)
        {
            cout << (40 * x) << endl;
        }
    }
}