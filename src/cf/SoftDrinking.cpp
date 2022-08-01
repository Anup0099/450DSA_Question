#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink=(k*l)/(n*l);
    int lime =(c*d);
    int salt=(p/np);
    
    cout<<min(min(k*l/nl,p/np),c*d)/n;
} 
