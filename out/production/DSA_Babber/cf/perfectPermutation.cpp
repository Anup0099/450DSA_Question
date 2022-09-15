#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    if (n % 2 != 0)
    {

        cout<<-1<<endl;
    }
    else
    {
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            /* code */
            cin >> arr[i];
            arr[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
        for (int i = 1; i <= n; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
    }
}