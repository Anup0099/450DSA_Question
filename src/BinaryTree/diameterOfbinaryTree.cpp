#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
int height(node *root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}

int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1, max(d2, d3));
}
int res = 0;
int height2(node *root)
{
    if (root == NULL)
        return 0;
    int lh = height2(root->left);
    int rh = height2(root->right);
    res = max(res, 1 + lh + rh);
    cout<<res<<" ";
    
    return 1 + max(lh, rh);
   
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);

    cout << height2(root);
    return 0;
}