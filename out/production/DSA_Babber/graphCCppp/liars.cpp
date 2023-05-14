#include <bits/stdc++.h>
using namespace std;
// There is a group of n
//  people. Some of them might be liars, who always tell lies. Other people always tell the truth. The i
// -th person says "There are at least li
//  liars amongst us". Determine if what people are saying is contradictory, or if it is possible. If it is possible, output the number of liars in the group. If there are multiple possible answers, output any one of them.

// Input
// The first line contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// The first line of each test case contains a single integer n
//  (1≤n≤100
// ).

// The second line of each test case contains n
//  integers li
//  (0≤li≤n
// ) — the number said by the i
// -th person.

// It's guaranteed that the sum of all n
//  does not exceed 104
// .

// Output
// For each test case output a single integer. If what people are saying is contradictory, output −1
// . Otherwise, output the number of liars in the group. If there are multiple possible answers, output any one of them.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > i)
            {
                count++;
            }
        }
       

       
    }
}