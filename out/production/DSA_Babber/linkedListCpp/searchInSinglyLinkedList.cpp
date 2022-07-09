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

int search(node *head, int x)
{
    int pos = 1;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return pos;
        }
        else
        {
            temp = temp->next;
            pos++;
        }
    }
    return -1;
}
// recursive seearch for a value in a linked list
bool searching(node *head, int x)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->data == x)
    {
        return true;
    }
    return search(head->next, x);
}
void insertatbegin(node *&head, int data)
{ 
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
int main()
{

    node *head = NULL;
    int x = 3;
    insertatbegin(head, 1);
    insertatbegin(head, 2);
    insertatbegin(head, 3);
    search(head, x);
}