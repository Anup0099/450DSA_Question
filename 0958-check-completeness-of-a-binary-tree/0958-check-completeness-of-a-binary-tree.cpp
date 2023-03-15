/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    return left + right + 1;
}
bool dfs(TreeNode *root, int i, int totalNodes)
{
    if (root == NULL)
    {
        return true;
    }
    if (i > totalNodes)
    {
        return false;
    }
    return dfs(root->left, 2 * i, totalNodes) && dfs(root->right, 2 * i + 1, totalNodes);
}
bool isCompleteTree(TreeNode *root)
{
    int totalNodes = countNodes(root);
    int i = 1;
    return dfs(root, i, totalNodes);
}
};