#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *deleteNode(node *head)
{
    node *temp = head;
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete head;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
    return head;
}
int main() {}