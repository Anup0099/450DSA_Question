#include <bits/stdc++.h>
using namespace std;
vector<int> nextSamller(vector<int> &arr)
{
    stack<int> st;
    vector<int> res(arr.size(), -1);
    int n = arr.size();
    for (int i =  n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            res[i] = -1; 
        }
        else
        {
            res[i] = st.top();
        }
        st.push(arr[i]);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> res = nextSamller(arr);
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}