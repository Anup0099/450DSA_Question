#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
// You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

// Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.
bool checkTree(TreeNode *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left == NULL || root->right == NULL)
        return false;
    return root->val == root->left->val + root->right->val;

}
int main() {}