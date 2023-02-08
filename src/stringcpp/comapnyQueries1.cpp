#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        int val = x;
        left = NULL;
        right = NULL;
    }
};
TreeNode *lCAofbinarysearchTree(TreeNode *root, TreeNode *p, TreeNode *q)
{
    // if (root == NULL)
    //     return NULL;
    // int curr = root->val;
    // if (curr < p->val and curr < q->val)
    // {
    //     return lowestCommonAncestor(root->right, p, q);
    // }
    // else if (curr > p->val and curr > q->val)
    // {
    //     return lowestCommonAncestor(root->left, p, q);
    // }
    // return root;
    //iterative solution

    while (root != NULL)
    {
        int curr = root->val;
        if (curr < p->val and curr < q->val)
        {
            root = root->right;
        }
        else if (curr > p->val and curr > q->val)
        {
            root = root->left;
        }
        else
        {
            return root;
        }
            
    }
}
int main() {}