#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        data = data;
        next = prev = NULL;
    }
};

node *insertAtbegin(node *head, int data)
{
    node *temp = new node(data);
    //if head is not null temp.next ==head.prev then new head will be temp.
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}

int main()
{
}