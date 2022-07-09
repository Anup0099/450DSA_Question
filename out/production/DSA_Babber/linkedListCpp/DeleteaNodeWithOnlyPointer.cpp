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
void deleteNode(node *ptr)
{
    node *temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    delete (temp);
}

int main()
{
}