#include <bits/stdc++.h>
using namespace std;
// delete last node of linkedlist
// 10->20->30->40
// output
// 10->20->30

struct Node
{
    Node *next;

} Node *deleteTail(Node *head)
{
    if (head = NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
}
circular linkedlist list in c++ 
struct node
{
    int data;
    Node *next;
    Node(int data)
    {
        data = d;
        next = NULL;
    }
}
void printlist(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data;
    for(Node *p= head->next;p!=head;p=p->next){
        cout<<(p->data);
    }
}



 int main()
{

    // linkedlist in cpp


}