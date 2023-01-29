#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL);
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}
// clsssical inorder traversal time cmplexity o(n)
// left root right this is inorder traversal
int res = INT_MAX,
    pre = -1;
int minDiffInBST(TreeNode *root)
{
    if (root->left != NULL)
        minDiffInBST(root->left);
    if (pre >= 0)
        res = in(res, root->val - pre);
    pre = root->val;
    if (root->right != NULL)
        return minDiffInBST(root->right);
    return res;
}
int main() {}