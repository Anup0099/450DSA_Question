#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int data)
    {
        data = data;
        next = NULL;
    }
};

node *segregate(node *head)
{
    node *evenStart = NULL, *evenEnd = NULL, *oddStart = NULL, *oddEnd = NULL;
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (evenStart == NULL)
            {
                evenStart = curr;
                evenEnd = curr;
            }
            else
            {
                evenEnd->next = curr;
                evenEnd = curr;
            }
        }
        else
        {
            if (oddStart == NULL)
            {
                oddStart = curr;
                oddEnd = curr;
            }
            else
            {
                oddEnd->next = curr;
                oddEnd = curr;
            }
        }
    }
    if (evenStart == NULL || oddStart == NULL)
    {
        return head;
    }
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    return evenStart;
}

int main()
{
}