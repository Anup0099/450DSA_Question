#include <bits/stdc++.h> 
using namespace std; 
struct node 
{ 
    int data; 
    struct node *next; 
    node(int x){
        data = x;
        next = NULL;
    }
};
bool isLoop(node *head){
    node *slow=head,*fast=head;
    while(fast !=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main() {} 
