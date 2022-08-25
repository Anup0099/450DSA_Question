#include <bits/stdc++.h> 
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
    node(int x) : val(x), left(NULL), right(NULL) {}
};
int isBalanced(node *root){
    if(root==NULL)return 0;
    int lh = isBalanced(root->left);
    if(lh==-1)return -1;
    int rh = isBalanced(root->right);
    if(rh==-1)return -1;
    if(abs(lh-rh)>1)return -1;
    return max(lh,rh)+1;
} 
int main() {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
   
    cout<<isBalanced(root)<<endl;
    return 0;
} 