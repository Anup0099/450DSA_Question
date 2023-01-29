#include <bits/stdc++.h>
using namespace std;
// An array a is called ugly if it contains at least one element which is equal to the sum of all elements before it. If the array is not ugly, it is beautiful.

// For example:

// the array [6,3,9,6] is ugly: the element 9 is equal to 6+3;
// the array [5,5,7] is ugly: the element 5 (the second one) is equal to 5;
// the array [8,4,10,14] is beautiful: 8≠0, 4≠8, 10≠8+4, 14≠8+4+10, so there is no element which is equal to the sum of all elements before it.
// You are given an array a such that 1≤a1≤a2≤⋯≤an≤100. You have to reorder the elements of a in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of a. You are allowed to keep the array a unchanged, if it is beautiful.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        bool flag = 0;
        sort(a.begin(), a.end(), greater<int>());

        for (int i = 0; i < n - 1; i++)
        {
            sum += a[i];
            if (sum == a[i + 1])
            {

                swap(a[i + 1], a[n - 1]);
            }
        }
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum == a[i + 1])
            {
                flag = false;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}