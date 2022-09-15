#include <bits/stdc++.h>
using namespace std;
int maxlength(vector<int> &nums, int n)
{
    int maxi = 0;
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > 0)
            st.push(i);
        else
        {
            int ind = st.top();
            st.pop();
            if (arr[ind] == arr[i])
            {
                maxi = max(maxi, i - st.top());
            }
            else
            {
                st.push(i);
            }
        }
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << maxlength(nums, n) << endl;
}