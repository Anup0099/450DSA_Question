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

void printlist(node *head)
{
    node* temp = head;
 
    // If linked list is not empty
    if (head != NULL) {
 
        // Print nodes till we reach first node again
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
}
void push(node **head_ref, int data)
{
    node *ptr1 = new node(data);
    node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;
 
    /* If linked list is not NULL then
    set the next of last node */
    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; /*For the first node */
 
    *head_ref = ptr1;
}

int main()
{
    node *head = NULL;
 
    /* Created linked list will be 11->2->56->12 */
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);
 
    cout << "Contents of Circular Linked List\n ";
    printlist(head);
 
    return 0;

    
}