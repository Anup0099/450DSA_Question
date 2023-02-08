#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){};
} bool inorder(TreeNode *root, int sum, int targetSum)
{
    if (root == NULL)
        return false;

    sum += root->val;
    if (root->left = NULL and root->right == NULL)
    {
        if (summ == targetSum)
            return true;
        return false;
    }
    bool left = inorder(root->left, sum, targetSum);
    bool right = inorder(root->right, sum, targetSum);

    return left || right;
}
bool hasPathSum(TreeNode *root, int targetSum)
{ 
    int sum = 0;
    bool result = inorder(root, sum, targetSum);
    return result;
}
int main() {}