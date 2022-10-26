#include <bits/stdc++.h> 
using namespace std;
int Solution::solve(vector<int> &A) {
    int maxi= *max_element(A.begin(),A.end());
    int mini= *min_element(A.begin(),A.end());
    int sm=maxi+mini;
    return sm;
}

int main() {} 