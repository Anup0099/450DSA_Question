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
// There are initially X people in a room.

// You are given an array A of length N which describes the following events:

// If Ai≥0, then Ai people enter the room at i-th minute. For e.g. if A2=3, then 3 people enter the room at the 2-nd minute.
// If Ai<0, then |Ai| people leave the room at i-th minute. Here |Ai| denotes the absolute value of Ai. For e.g. if A4=−2, then 2 people leave the room at the 4-th minute.
// Determine the maximum number of people in the room at any moment of time.

// It is guaranteed in the input that at any moment of time, the number of people in the room does not become negative.

void solve()
{
    int n, x;
    cin >> n >> x;
   
    int arr[n];
    int arr1[n + 1];
    memset(arr1, 0, sizeof(arr1));

    for (size_t i = 1; i <= n; i++)

    {
        cin >> arr[i];
        arr1[i] = arr1[i - 1] + arr[i];
    };
    sort(arr1, arr1 + n + 1);
    cout << arr1[n] + x << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {

        solve();
    }
    return 0;
}