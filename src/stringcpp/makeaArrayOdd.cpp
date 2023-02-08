#include <bits/stdc++.h>
using namespace std;
//  You are given an array
// �
// A and an integer
// �
// X. You are allowed to perform the following operation on the array:

// Select two distinct indices
// �
// i and
// �
// j and set both
// �
// �
// A
// i
// ​
//   and
// �
// �
// A
// j
// ​
//   as
// (
// (
// �
// �
// ⊕
// �
// �
// )
// ∣
// �
// )
// ((A
// i
// ​
//  ⊕A
// j
// ​
//  )∣X) simultaneously. Here
// ⊕
// ⊕ and
// ∣
// ∣ denote the bitwise XOR and bitwise OR operations respectively.
// Find the minimum number of operations required to make all elements of the array odd. If it is not possible to do so, print
// −
// 1
// −1 instead.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains two space-separated integers
// �
// N, the size of the array and
// �
// X.
// The next line contains
// �
// N space-separated integers denoting the elements of the array
// �
// A.
// Output Format
// For each test case, output on a new line, the minimum number of operations required to make all elements of the array odd. If it is not possible to do so, print
// −
// 1
// −1 instead.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0,count1=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                count++;
            }else{
                count1++;
            }
        }
        if(count1>0){
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;
        }
       
    }
    return 0;
}