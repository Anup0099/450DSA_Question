#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = 0, k = 0;
    int chest = 0, bicep = 0, back = 0;
    for (i = 0; i < n; i = i + 3)
    {

        chest += v[i];
    }
    for (j = 1; j < n; j = j + 3)
    {

        bicep += v[j];
    }
    for (k = 2; k < n; k = k + 3)
    {

        back += v[k];
    }
    if (chest > bicep && chest > back)
    {
        cout << "chest" << endl;
    }
    else if (bicep > chest && bicep > back)
    {
        cout << "biceps" << endl;
    }
    else if (back > chest && back > bicep)
    {
        cout << "back" << endl;
    }
}