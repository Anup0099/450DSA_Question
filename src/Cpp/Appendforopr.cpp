#include <bits/stdc++.h>
using namespace std;
// Problem
// Chef has an array AA of length NN.

// Chef wants to append a non-negative integer XX to the array AA such that the bitwise OR of the entire array becomes = Y=Y i.e. (A_1 \ | \ A_2 \ | \ \ldots \ | \ A_N \ | \ X) = Y(A
// 1
// ​
//   ∣ A
// 2
// ​
//   ∣ … ∣ A
// N
// ​
//   ∣ X)=Y. (Here, |∣ denotes the bitwise OR operation)

// Determine the minimum possible value of XX. If no possible value of XX exists, output -1−1.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains two integers NN and YY — the size of the array AA and final bitwise OR of the array AA.
// The second line of each test case contains NN space-separated integers A_1, A_2, \dots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//   denoting the array AA.
// Output Format
// For each test case, output the minimum possible value of XX for which (A_1 \ | \ A_2 \ | \ \ldots \ | \ A_N \ | \ X) = Y(A
// 1
// ​
//   ∣ A
// 2
// ​
//   ∣ … ∣ A
// N
// ​
//   ∣ X)=Y holds.

// If no such value exists, output -1−1.
void set(int &num, int pos)
{
    // First step is shift '1', second
    // step is bitwise OR
    num |= (1 << pos);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n >> y;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = v[0];
        for (int i = 0; i < n; i++)
        {
            x = x | v[i];
        }
        // cout<<x<<endl;
        // if(v[0]==0){
        //     cout<<"1"<<endl;
        //     continue;
        // }
        bool flag = false;
        for (int i = 0; i <= y; i++)
        {
            if ((x | i) == y)
            {
                cout << i << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}