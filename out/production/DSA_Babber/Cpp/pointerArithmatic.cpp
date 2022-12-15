#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    cout << ptr << endl;
    int *ptr2 = ptr + 3;
    cout << *ptr2 << endl;
    cout << ptr2 - ptr << endl;
    //pointe is of always same size irrespective of their type int or string or char    
    cout << sizeof(ptr) << endl;    
}