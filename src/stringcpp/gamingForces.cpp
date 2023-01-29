
#include <bits/stdc++.h>
using namespace std;
// Monocarp is playing a computer game. He's going to kill n
//  monsters, the i
// -th of them has hi
//  health.

// Monocarp's character has two spells, either of which he can cast an arbitrary number of times (possibly, zero) and in an arbitrary order:

// choose exactly two alive monsters and decrease their health by 1
// ;
// choose a single monster and kill it.
// When a monster's health becomes 0
// , it dies.

// What's the minimum number of spell casts Monocarp should perform in order to kill all monsters?

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of testcases.

// The first line of each testcase contains a single integer n
//  (1≤n≤100
// ) — the number of monsters.

// The second line contains n
//  integers h1,h2,…,hn
//  (1≤hi≤100
// ) — the health of each monster.

// The sum of n
//  over all testcases doesn't exceed 2⋅104
// .

// Output
// For each testcase, print a single integer — the minimum number of spell casts Monocarp should perform in order to kill all monsters.
bool isDistinct(vector<int> &nums)
{
    vector<int> temp = nums;
    set<int> set;
    for (int i = 0; i < nums.size(); i++)
    {
        set.insert(nums[i]);
    }
    if (set.size() == nums.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

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
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
        }
        if (isDistinct(arr))
        {
            cout << n << endl;
        }
        else if (count == arr.size() and count % 2 != 0)
        {
            cout << (count/2)+1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 1)
                {
                    ans++;
                }
                else
                {
                    ans += 2;
                }
            }

            cout << ans / 2 << endl;
        }
    }
    return 0;
}