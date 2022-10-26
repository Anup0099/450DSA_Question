#include <bits/stdc++.h>
using namespace std;
void printAquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void solvepattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int totalColsinRow = i > n ? 2 * n - i : i;
        for (int j = 0; j < totalColsinRow; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n = 10;
    pattern6(n);
}