#include <bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
    // node(int data)
    // {
    //     data = data;
    //     next = NULL;
    // }
};
bool isloop(node *head){
    unordered_set<node *>s;
    for(node *curr=head;curr!=NULL;curr=curr->next){
        if(s.find(curr)!=s.end()){
            return true;
        }
        s.insert(curr);
    }
    return false;
}

bool loopInList(node *head){
    node *temp;
    node *curr=head;
    while(curr->next!=NULL){
        if(curr->next==temp){
            return true;
        }
        temp=curr;
        curr=curr->next;
    }
    return false;
}


int main(){
    
}