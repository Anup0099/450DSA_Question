#include <bits/stdc++.h>
using namespace std;
// binary treee return the same tree where every subtree not containing a1 has been removed
// A removed of a node is node plus every node that is descendant of node.
// delete korte hobe subtree containing zeroes
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode() : val(0), left(NULL), right(NULL);
    TreeNode(int x) : val(x), left(NULL), right(NULL);

} TreeNode *pruneTree(TreeNode *root)
{
    // base case
    if (root == NULL)
        return NULL;
    // left recursion call
    root->left = pruneTree(root->left);
    // right recursion call
    root->right = pruneTree(root->right);
    // check condition if subtree contains any zero the return null
    if (root->left == NULL and root->right == NULL and root->val == 0)
    {
        return NULL;
    }
    // else return root itself

    return root;
}

int main() {}