#include <bits/stdc++.h>
using namespace std;
// You are given an array a1,a2,…,an
//  consisting of n
//  distinct integers. Count the number of pairs of indices (i,j)
//  such that i<j
//  and ai⋅aj=i+j
// .

// Input
// The first line contains one integer t
//  (1≤t≤104
// ) — the number of test cases. Then t
//  cases follow.

// The first line of each test case contains one integer n
//  (2≤n≤105
// ) — the length of array a
// .

// The second line of each test case contains n
//  space separated integers a1,a2,…,an
//  (1≤ai≤2⋅n
// ) — the array a
// . It is guaranteed that all elements are distinct.

// It is guaranteed that the sum of n
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output the number of pairs of indices (i,j)
//  such that i<j
//  and ai⋅aj=i+j
// .

// void solve(int i, int j, vector<int> arr, vector<pairs<int, int>> ans)
// {
//     if (i == arr.size() || j == arr.size())
//     {
//         return;
//     }
//     if (arr[i] * arr[j] == i + j)
//     {
//         ans.push_back({i, j});
//     }
//     solve(i + 1, j, arr, ans);
//     solve(i, j + 1, arr, ans);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;

        for (int i = 0; i < n - 1; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] * arr[j] == i + j + 2)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}