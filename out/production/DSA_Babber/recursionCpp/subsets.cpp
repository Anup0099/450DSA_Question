#include <bits/stdc++.h>
using namespace std;
void helper(vector<int> &A, int ind, vector<vector<int>> &res, vector<int> &curr)
{
    if (ind == A.size())
    {
        res.push_back(curr);
        return;
    }
    // include the element
    curr.push_back(A[ind]);
    helper(A, ind + 1, res, curr);
    // exclude   the element and recurse on the remaining elements
    curr.pop_back();
    helper(A, ind + 1, res, curr);
}
vector<vector<int>> subsets(vector<int> &A)
{
    vector<vector<int>> res;
    vector<int> curr;
    helper(A, 0, res, curr);
    sort(res.begin(), res.end());
    return res;
}
int main() {}