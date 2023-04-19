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
    int dfs(TreeNode *root, int isLeft, int cnt)
{
    // root is nullptr, we can return `cnt`
    if (!root)
        return cnt;
    // if `isLeft` is true, we have two choices
    // 1. go to right making a zipzag path - increase the cnt by 1
    // 2. still go to left - starting a new zigzag path - hence cnt is set to 0
    if (isLeft)
        return max(dfs(root->right, 0, cnt + 1), dfs(root->left, 1, 0));
    // similarly, we apply the same logic for the opposite direction
    return max(dfs(root->left, 1, cnt + 1), dfs(root->right, 0, 0));
}
    int longestZigZag(TreeNode* root) {
         return max(dfs(root->left, 1, 0), dfs(root->right, 0, 0));
    }
};