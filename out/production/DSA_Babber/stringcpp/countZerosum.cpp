#include <bits/stdc++.h>
using namespace std;
int ZeroPairSum(int n, vector<int> arr)
{
    // Write your code here
    map<int, int> m;
    int ans = 0;
    for (auto it : arr)
    {
        m[it]++;
    }
    for (auto it : arr)
    {
        if (m[it] > 0)
        {
            if (m[-it] > 0)
            {
                ans++;
                m[it]--;
                m[-it]--;
            }
        }
    }
    return ans;
}

pair<int, int> findPair(vector<int> arr, int n)
{
    map<int, int> m;
    for (auto it : arr)
    {
        m[it]++;
    }
    int element = 1;
    for (auto it : arr)
    {
        element = it * -1;
        if(m.count(element)){
            return {it, element};
        }else{
            
        }
    }
}
int main()
{
    vector<int> ans = {1, 2, 3, 4, 5};
    cout << ZeroPairSum(4, ans);
}