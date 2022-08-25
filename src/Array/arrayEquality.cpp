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
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define maxheap priority_queue
#define mset multiset
#define uset unordered_set
#define umap unordered_map
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));} 
int add(int a, int b, int c = MOD){int res=a+b;
return(res>=c?res-c:res);} 
int mod_neg(int a, int b, int c = MOD){int res;
 if(abs(a-b)<c)res=a-b;else res=(a-b)%c;
return(res<0?res+c:res);} 
int mul(int a, int b, int c = MOD){ll res=(ll)a*b;
return(res>=c?res%c:res);} 
int muln(int a, int b, int c = MOD){ll res=(ll)a*b;
 return ((res%c)+c)%c;} 
 template<typename T>T expo(T e, T n){T x=1,p=e;while(n)
 {if(n&1)x=x*p;p=p*p;n>>=1;}return x;} 
template<typename T>T power(T e, T n, T m = MOD){T x=1,p=e;while(n)
{if(n&1)x=mul(x,p,m);p=mul(p,p,m);n>>=1;}return x;} 
template<typename T>T extended_euclid(T a, T b, T &x, T &y)
{T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;
t=xx;xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T>T mod_inverse(T a, T n = MOD){T x,y,z=0;
 T d=extended_euclid(a,n,x,y);return(d>1?-1:mod_neg(x,z,n));} 
 

void solve(){
    int n;cin>>n;
    map<ll,ll>m;
    forn(i,n){
        ll temp;cin>>temp;
        m[temp]++;
    }
    ll mx=0;
    for(auto it:m){
        mx=max(mx,it.second);
    }
    cout<<((mx<=(n+2)/2)?"YES":"NO")<<endl;


}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     
        solve();
    }
    return 0;
}