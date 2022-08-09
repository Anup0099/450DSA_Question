#include <bits/stdc++.h>
using namespace std;

int kthMex(int N, int K, int A[])
{
    unordered_map<int, int> mapp;
    for (int i = 0; i < N; i++)
    {
        mapp[A[i]]++;
    }
    for (int i = 0;; i++)
    {
        if (!mapp[i]) // if element is not present in map    then return it  else continue   till kth element is found   and return it
            K--;
        if (K == 0) //   if kth element is found then return it
            return i;
    }
    return -1;
}

int kthMex(int N, int K, int A[])
{

    set<int> s;
    for (int i = 0; i < N; i++)
    {
        s.insert(A[i]);
    }
    int count = 0, x = 0;
    while (count < K)

    {
        if(s.find(x)!=s.end())
        {
            x++;
        }else{
            count++;
            x++;
        }
    }
    return x-1;
}

int main()
{

    int n = 4;
    int k = 3;
    int arr[] = {7, 5, 7, 1};
    cout << kthMex(n, k, arr);
}