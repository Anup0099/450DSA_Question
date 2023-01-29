#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Hossam woke up bored, so he decided to create an interesting array with his friend Hazem.

// Now, they have an array a of n positive integers, Hossam will choose a number ai and Hazem will choose a number aj.

// Count the number of interesting pairs (ai,aj) that meet all the following conditions:

// 1≤i,j≤n;
// i≠j;
// The absolute difference |ai−aj| must be equal to the maximum absolute difference over all the pairs in the array. More formally, |ai−aj|=max1≤p,q≤n|ap−aq|.
// Input
// The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100), which denotes the number of test cases. Description of the test cases follows.

// The first line of each test case contains an integer n (2≤n≤105).

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤105).

// It is guaranteed that the sum of n over all test cases does not exceed 105.

// Output
// For each test case print an integer — the number of interesting pairs (ai,aj).
int solve()
{
    int n, m, i, j;
    cin >> n;
    map<int, int> cnt;
    for (i = 0; i < n; i++){
        cin >> m;
        ++cnt[m];
    }
    if (cnt.size() == 1)
        cout << n * (n - 1ll) << '\n';
    else
        cout << (ll)cnt.begin()->second * cnt.rbegin()->second * 2 << '\n';
    return 0;
}
int main()
{
    long long testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}