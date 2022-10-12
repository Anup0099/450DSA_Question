#include <bits/stdc++.h>
using namespace std;
#define ll long long
// You are given two arrays a and b of n elements, each element is either 0 or 1.

// You can make operations of 2 kinds.

// Pick an index i and change ai to 1−ai.
// Rearrange the array a however you want.
// Find the minimum number of operations required to make a equal to b.

// Input
// Each test contains multiple test cases. The first line contains a single integer t (1≤t≤400) — the number of test cases. Description of the test cases follows.

// The first line of each test case contains a single integer n (1≤n≤100) — the length of the arrays a and b.

// The second line of each test case contains n space-separated integers a1,a2,…,an (ai is 0 or 1), representing the array a.

// The third line of each test case contains n space-separated integers b1,b2,…,bn (bi is 0 or 1), representing the array b.

// Output
// For each test case, print the minimum number of operations required to make a equal to b.
void solve(){
     ll n; cin>>n;
    ll sum=0,ans=0;
    vector<ll> a(n),b(n);
    for(auto &it:a){
        cin>>it;
        sum+=it;
    }
    for(auto &it:b){
        cin>>it;
        sum-=it;
    }
    for(ll i=0;i<n;i++){
        ans+=(a[i]^b[i]);
    }
    ans=min(ans,1+abs(sum));
    cout<<ans<<"\n";
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