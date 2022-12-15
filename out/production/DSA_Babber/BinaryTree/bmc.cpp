#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    for (int i = 0; i < v.size(); i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 6 == 0)
        {
            cout <<v[i] << " ";
        }
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     //delete second element
    //     if (arr[i] && arr[i + 1] > 100)
    //     {
    //         arr.erase(arr.begin() + i + 1);
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
}