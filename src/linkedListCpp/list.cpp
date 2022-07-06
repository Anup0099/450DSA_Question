#include <bits/stdc++.h>
using namespace std;
// self referencing node or structure

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// traversal in linkedlist
void traverse(Node *head)
{
    Node *temp = head;
    cout << &temp;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(1);
    Node *temp = new Node(14);
    Node *temp2 = new Node(15);
    head->next = temp;
    temp->next = temp2;
    temp2->next = NULL;
    traverse(head);
    return 0;
}