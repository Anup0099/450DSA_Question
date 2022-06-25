#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 120;
    int *ptr = &num;
    cout << &num << endl;
    cout << *ptr + 1 << endl;
    cout << ptr << endl;
    cout << ptr+1 << endl;
}