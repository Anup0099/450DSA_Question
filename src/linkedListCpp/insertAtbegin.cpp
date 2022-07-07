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
void insertatbegin(node *head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *insertAtend(node *head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
        curr->next = temp;
    }
    return head;
}
int main()
{
    node *head = NULL;
    head = insertAtend(head, 1);
    head = insertAtend(head, 2); 
    print(head);

    return 0;
}