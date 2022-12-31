#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
void reorder(TreeNode *root)
{
    if (root == NULL)
        return;
    int child = 0;
    if (root->left)
    {
        child += root->left->val;
    }
    if (root->right)
    {
        child += root->right->val;
    }
    if (child >= root->val)
    {
        root->val = child;
    }
    else
    {
        if (root->left)
        {
            root->left->val = root->val;
        }
        if (root->right)
        {
            root->right->val = root->val;
        }
    }

    reorder(root->left);
    reorder(root->right);
    int tot = 0;
    if (root->left)
    {
        tot += root->left->val;
    }
    if (root->right)
    {
        tot += root->right->val;
    }
    if (root->left or root->right)
        root->val = tot;
}
int isSumProperty(TreeNode *root)
{
    if(root==NULL)
        return 1;
    if(root->left==NULL and root->right==NULL){
        return 1;
    }
    int tot = 0;
    if(root->left){
        tot+=root->left->val;
    }
    if(root->right){
        tot+=root->right->val;
    }
    if(tot==root->val and isSumProperty(root->left) and isSumProperty(root->right)){
        return 1;
    }
    return 0;   
}
int main() {}