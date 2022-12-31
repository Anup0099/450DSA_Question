#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *right, *left;
    node(int x)
    {
        data = x;
        right = NULL;
        left = NULL;
    }
};
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *left = LCA(root->left, n1, n2);
    node *right = LCA(root->right, n1, n2);
    if (left != NULL && right != NULL)
    {
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }
    if (left != NULL)
    {
        return left;
    }
    return right;
}
int main()
{
}