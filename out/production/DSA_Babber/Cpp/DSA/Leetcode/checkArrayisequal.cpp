#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long> A, vector<long long> B, int N)
{
    // code here
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    if(A.size() != B.size()){
        return false;
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != B[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
}