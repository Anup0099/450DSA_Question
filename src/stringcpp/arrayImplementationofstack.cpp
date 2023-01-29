#include <bits/stdc++.h>
using namespace std;
struct MyStack
{
    int *arr;
    int cap;
    int top;
    MySatck(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;//initial top was -1
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
        }
        top++;
        arr[top] = x;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return (top == -1);

    }
}

//one drawback is we cannot do overflowand underflow

int
main()
{
}