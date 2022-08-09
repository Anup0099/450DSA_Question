#include <bits/stdc++.h>
using namespace std;
//
// Choose any two elements of A and erase them from A.
// Append the product of those two elements at the end of B.

long long maximumMultiple(int N, int A[])
{
    long long multi = 0;
    // set<long long>s;
    // for(long long i=0;i<N-1;i++){
    //     s.insert(A[i]);
    // }
    vector<long long> v;
    for (long long i = 0; i < N-1; i++)
    {
          
            multi = A[i] * A[i+1];
            v.push_back(multi);
        
    }
    for (long long i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
    //print set
    // for (auto x:s)
    // {
    //     cout << x << " ";
    // }
    int maxi= *max_element(v.begin(), v.end());
    return maxi;
}
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << maximumMultiple(N, A) << endl;
    return 0;
}