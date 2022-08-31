#include <bits/stdc++.h>
using namespace std;
void preVoiusGreater(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j] << " ";
                break;
            }
        }
        if (j == -1)
        {
            cout << -1;
        }
    }
}
void previousGreater(vector<int> ans)
{
    stack<int> s;
    s.push(ans[0]);
    for (int i = 1; i <= ans.size(); i++)
    {
        while (s.empty() == false && s.top() <= ans[i])
        {

            s.pop();
        }
        int pg = (s.empty()) ? -1 : s.top();
        cout << pg << " ";
        s.push(ans[i]);
    }
}
int main()
{

    vector<int> arr = {20, 30, 10, 5, 15};

    previousGreater(arr);
    
    return 0;
}