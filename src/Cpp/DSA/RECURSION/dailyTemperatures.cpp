#include <bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int> &temperatures)
{
    vector<int> ans;
    stack<int> s;
    for (int i = temperatures.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && temperatures[i] >= temperatures[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans.push_back(0);
        }
        else
        {
            ans.push_back(s.top() - i);
        }
        s.push(i);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {}