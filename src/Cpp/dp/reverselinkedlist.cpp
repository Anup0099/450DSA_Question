#include <bits/stdc++.h>
using namespace std;

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;
    LinkedListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
LinkedListNode *reverseLinkedList(LinkedListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    LinkedListNode *chotahead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotahead;
}
int main()
{
}