#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
//delete with a random pointer not with root
void deleteNode(node *pointer)
{
    node *temp = pointer->next;
    pointer->data = temp->data;
    pointer->next = pointer->next->next;

    delete temp;
}
int main() {}
