#include <bits/stdc++.h>
using namespace std;
// You are given a sequence a=[a1,a2,…,an] consisting of n positive integers.

// Let's call a group of consecutive elements a segment. Each segment is characterized by two indices: the index of its left end and the index of its right end. Denote by a[l,r] a segment of the sequence a with the left end in l and the right end in r, i.e. a[l,r]=[al,al+1,…,ar].

// For example, if a=[31,4,15,92,6,5], then a[2,5]=[4,15,92,6], a[5,5]=[6], a[1,6]=[31,4,15,92,6,5] are segments.

// We split the given sequence a into segments so that:

// each element is in exactly one segment;
// the sums of elements for all segments are equal.
// For example, if a = [55,45,30,30,40,100], then such a sequence can be split into three segments: a[1,2]=[55,45], a[3,5]=[30,30,40], a[6,6]=[100]. Each element belongs to exactly segment, the sum of the elements of each segment is 100.

// Let's define thickness of split as the length of the longest segment. For example, the thickness of the split from the example above is 3.

// Find the minimum thickness among all possible splits of the given sequence of a into segments in the required way.
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int pre[n];
    pre[0] = a[0];
    // prefix array
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + a[i];
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int sum = pre[i];
        sum += sum;
        int curr = (i + 1), last = i;
        int idx;
        while (binary_search(pre, pre + n, sum))
        {
            idx = lower_bound(pre, pre + n, sum) - pre;
            sum += pre[i];
            curr = max(curr, idx - last);
            last = idx;
        }
        if (last == n - 1)
        {
            ans = min(ans, curr);
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}