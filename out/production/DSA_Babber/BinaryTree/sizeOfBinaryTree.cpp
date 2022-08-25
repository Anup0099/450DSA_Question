#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
    }
};

int getSize(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + getSize(root->left) + getSize(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << getSize(root) << endl;
    return 0;
}