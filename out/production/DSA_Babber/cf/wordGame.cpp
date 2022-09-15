    #include <bits/stdc++.h>
    using namespace std;
     
    typedef long long big;
    typedef long double ludo;
    #define pb push_back
    #define pbb pair<big, big>
    #define pii pair<int, int>
    #define fe first
    #define se second
    #define all(x) (x).begin(), (x).end()
    #define maxheap priority_queue
    #define mset multiset
    #define uset unordered_set
    #define umap unordered_map
    #define fr(i, s, e) for(int i = s; i < e; i++)
    #define revfr(i, s, e) for(int i = s - 1; i >= e; i--)
    #define getv(v, n) for(int i = 0; i < n; i++) cin >> v[i];
    #define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
    #define nl "\n"
     
    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
    #else
    #define debug(x)
    #endif
     
    void _print(big t) { cerr << t; }
    void _print(int t) { cerr << t; }
    void _print(string t) { cerr << t; }
    void _print(char t) { cerr << t; }
    void _print(double t) { cerr << t; }
     
    template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.fe); cerr << ","; _print(p.se); cerr << "}"; }
    template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
    template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
    template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
    template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
     
    void solve() {
     
        int n;
        cin >> n;
     
        // map<string, vector<int>> m2;
     
        // for (int i = 0; i < n; i++) {
     
        //     string temp;
        //     cin >> temp;
     
        //     m2[temp].pb(1);
        // }
        // for (int i = 0; i < n; i++) {
     
        //     string temp;
        //     cin >> temp;
     
        //     m2[temp].pb(2);
        // }
        // for (int i = 0; i < n; i++) {
     
        //     string temp;
        //     cin >> temp;
     
        //     m2[temp].pb(3);
        // }
        // map<int, big> ans;
     
        // for (auto i : m2) {
     
        //     if (i.se.size() == 1) ans[i.se[0]] += 3;
     
        //     else if (i.se.size() == 2) {
     
        //         ans[i.se[0]]++;
        //         ans[i.se[1]]++;
        //     }
        // }
        // for (auto i : ans) cout << i.se << " ";
        // cout << endl;
     
        vector<string> v1(n);
        getv(v1, n);
        vector<string> v2(n);
        getv(v2, n);
        vector<string> v3(n);
        getv(v3, n);
     
        sort(all(v1));
        sort(all(v2));
        sort(all(v3));
     
        int sc1 = 0;
     
        for (auto i : v1) {
     
            bool flag1 = binary_search(all(v2), i), flag2 = binary_search(all(v3), i);
     
            if (flag1 == 1 && flag2 == 1) continue;
     
            else if (flag1 == 1) sc1++;
     
            else if (flag2 == 1) sc1++;
     
            else sc1 += 3;
        }
        int sc2 = 0;
     
        for (auto i : v2) {
     
            bool flag1 = binary_search(all(v1), i), flag2 = binary_search(all(v3), i);
     
            if (flag1 == 1 && flag2 == 1) continue;
     
            else if (flag1 == 1) sc2++;
     
            else if (flag2 == 1) sc2++;
     
            else sc2 += 3;
        }
        int sc3 = 0;
     
        for (auto i : v3) {
     
            bool flag1 = binary_search(all(v1), i), flag2 = binary_search(all(v2), i);
     
            if (flag1 == 1 && flag2 == 1) continue;
     
            else if (flag1 == 1) sc3++;
     
            else if (flag2 == 1) sc3++;
     
            else sc3 += 3;
        }
        cout << sc1 << " " << sc2 << " " << sc3 << endl;
    }
    int main() {
     
        speed;
     
    #ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
    #endif
     
        int q = 1;
        cin >> q;
     
        while (q--) {
     
            solve();
        }
     
        return 0;
    }