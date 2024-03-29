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
    TreeNode *prev = NULL;
void solve(int &ans, TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->right != NULL)
    {
        solve(ans, root->right);
    }
    if (prev != NULL)
    {
        ans = min(ans, abs(prev->val - root->val));
    }
    prev = root;
    if (root->left)
    {
        solve(ans, root->left);
    }
}
    int minDiffInBST(TreeNode* root) {
         int ans = INT_MAX;
         solve(ans, root);
        return ans;
    }
};