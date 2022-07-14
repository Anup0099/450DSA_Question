#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
void inorder(Node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void solve(Node *root,Node* &head,Node* prev,int &f){
    if(root==NULL)
        return;
    solve(root->left,head,prev,f);
    if(f==0){
        head=root;
        f=1;
    }
    else{
        prev->right=root;
        root->left=prev;
    }
    prev=root;
    solve(root->right,head,prev,f);
}
Node* transformTree(Node* root){
    Node* head=NULL;
    int f=0;
    Node* prev=NULL;
    solve(root,head,prev,f);
    Node* temp=head;
    while(temp->left!=NULL)
        temp=temp->left;
    return temp;
}
int main(){


}