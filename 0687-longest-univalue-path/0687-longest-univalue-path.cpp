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
    pair<int, int> dfs(TreeNode* root, int &ans) {
        if(!root) return {1e9, 0};
        auto p1 = dfs(root -> left, ans);
        auto p2 = dfs(root -> right, ans);

        int l1 = 0, l2 = 0;
        if(p1.first == root -> val) l1 += p1.second + 1;
        if(p2.first == root -> val) l2 += p2.second + 1;
        ans = max(ans, l1 + l2);
        return {root -> val, max(l1, l2)};
    }
public:
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);

        return ans;
    }
};