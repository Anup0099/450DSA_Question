#include <bits/stdc++.h> 
using namespace std;
struct node{
    int data;
    struct node *next;
    node(int x){
        data=x;
        next=NULL;
    }
}; 
int lengthOflist(node *root){
    if(root==NULL){
        return 0;
    }
    int count= 1;
    count=count+lengthOflist(root->next);
    return count;
}
int main() {
    node *root=new node(1);
    root->next=new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    root->next->next->next->next=new node(5);
    root->next->next->next->next->next=new node(6);
    cout<<lengthOflist(root);
    return 0;
} 