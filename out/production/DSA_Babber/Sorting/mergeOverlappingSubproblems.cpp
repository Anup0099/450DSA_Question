#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define maxheap priority_queue
#define mset multiset
#define uset unordered_set
#define umap unordered_map
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

vp32 merge(vp32 &arr)
{
    int n = arr.size();
    sort(all(arr));
    vp32 ans;
    forn(i, n)
    {
        int start = arr[i].fi, end = arr[i].se;
        // since the interval already lies int the data structure present we continue
        if (!ans.empty())
        {
            if (start <= ans.back().se)
            {

                continue;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j].fi<=end){
               
            end=max(end,arr[j].se);
            }
        }
         end = max(end, arr[i].se);

        ans.pb({start, end});
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vp32 arr(n);
    arr={{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};
    vp32 ans = merge(arr);
    cout << ans.size() << ln;
    forn(i, ans.size())
    {
        cout << ans[i].fi << " " << ans[i].se << ln;
    }
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        cout << "Case #" << it + 1 << ": ";
        solve();
    }
    return 0;
}