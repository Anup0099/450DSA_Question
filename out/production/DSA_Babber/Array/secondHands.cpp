#include <bits/stdc++.h>
using namespace std;
// Sandy's store has NN pre-owned clock parts for sale, where the iith part is of style S_iS
// i
// ​
//  . The store also has two display cases, each capable of holding at most KK parts. To maximize the aesthetics of Sandy's secondhand second hands, she'd like to put each of the NN parts into one of the two cases so that neither case ends up with two different parts of the same style, and neither case has more than KK parts total. Can you determine if this is possible?
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        int count = 0;
        for (auto x : m)
        {
            if (x.second > 2)
            {
                cout << "NO";
                return 0;
            }
            if (x.second == 2)
            {
                count++;
            }
        }
        if (count > k)
        {
            cout << "NO";
            return 0;
        }
        cout << "YES";
        return 0;
    }
}