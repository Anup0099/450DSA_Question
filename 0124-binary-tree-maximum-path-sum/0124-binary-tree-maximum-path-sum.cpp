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
   int dfs(TreeNode *root, int &result)
{
    if (root == nullptr)
        return 0;
    int left = dfs(root->left, result);
    int right = dfs(root->right, result);
    int maxStraight = max(max(left, right) + root->val, root->val);
    int maxCase = max(maxStraight, left + right + root->val);
    result = max(result, maxCase);
    return maxStraight;
}
int maxPathSum(TreeNode *root)
{
    int result = INT_MIN;
    dfs(root, result);
    return result;
}

    
};