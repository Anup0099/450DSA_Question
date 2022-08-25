#include <bits/stdc++.h>
using namespace std;
void combination(int n, vector<int> &vec)
{
    if (n == 0)
    {
        for (auto it : vec)
        {
            cout << it << " " << endl;
            return;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
        combination(n - i, vec);
        vec.pop_back(); // ye is ko bhi backtracking bola jayta hai 
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    combination(n, vec);
    return 0;
}