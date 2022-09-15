#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
int functioncalled = 0;
void inorder(node *root)
{
    functioncalled++;
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void print()
{
    
}
int main()
{
    node *root = new node;
    root->data = 1;
    root->left = new node;
    root->left->data = 2;
    root->right = new node;
    root->right->data = 3;
    root->left->left = new node;
    root->left->left->data = 4;
    root->left->right = new node;
    root->left->right->data = 5;
    root->right->left = new node;
    root->right->left->data = 6;
    root->right->right = new node;
    root->right->right->data = 7;
    root->left->left->left = new node;
    root->left->left->left->data = 8;
    root->left->left->right = new node;
    root->left->left->right->data = 9;
    root->left->right->left = new node;
    
    inorder(root);
    cout << endl;
    print(root);
    cout << endl;
    cout << functioncalled << endl;
    return 0;
}