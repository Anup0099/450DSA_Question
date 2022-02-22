//
// Created by Asus on 2/22/2022.
//

#include "luvbinary.h"
#include <bits/stdc++.h>

#define ll long long
#define fastio
using namespace std;
double eps = 1e-7;


int lower_bound(vector<int> &v, int element) {
    int lo = 0, hi = v.size() - 1;
    int mid;
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (v[mid] < element) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if (v[lo] >= element) {
        return lo;
    }
    if (v[hi] >= element) {
        return hi;
    }
    return -1;
}
//square root
//monotonic search space

int main() {
//int n;cin>>n;
//vector<int>v(n);
//    for (int i = 0; i <n ; ++i) {
//        cin>>v[i];
//    }
//    int element;
//    cin>>element;

    double x;
    cin >> x;
    double lo = 1, hi = x, mid;
    mid = (hi + lo) / 2;
    if (mid * mid < x) {
        lo = mid;
    } else {
        hi = mid;
    }
    cout << setprecision(10) << lo << endl << hi << endl;
    cout << pow(x, 1.0 / 2) << endl;

}