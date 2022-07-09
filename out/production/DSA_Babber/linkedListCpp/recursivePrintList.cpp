#include <bits/stdc++.h>
using namespace std;
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


void rPrint(Node*head){
if(head==NULL){
    return;
}
cout<<head->data<<" ";
rPrint(head->next);
}


int main(){
    Node *head = new Node(1);
    Node *temp = new Node(14);
    Node *temp2 = new Node(15);
    head->next = temp;
    temp->next = temp2;
    temp2->next = NULL;
    rPrint(head);
    return 0;
}