#include <bits/stdc++.h>
using namespace std;
int maxSumSubmatrix(vector<vector<int>> &m, int k)
{
    int res = INT_MAX, rows = m.size(), cols = m[0].size();
    for (int l = 0; l < cols; ++l)
    {
        vector<int> sums(rows);
        for (int r = l; r < cols; ++r)
        {

            for (int i = 0; i < rows; ++i)
            {
                sums[i] += m[i][r];
            }
            set<int> st = {0};
            int run_sum = 0;
            for (int sum : sums)
            {
                run_sum += sum;
                auto it = st.lower_bound(run_sum - k);
                if (it != st.end())
                {
                    res = max(res, run_sum - *it);
                }
                st.insert(run_sum);
            }
        }
    }
    return res;
}
int main() {}