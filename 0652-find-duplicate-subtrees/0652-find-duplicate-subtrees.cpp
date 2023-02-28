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
    string helper(TreeNode *root, unordered_map<string, int> &m, vector<TreeNode *> &res)
{
    if (!root)
        return "";
    string s = "(";
    s += helper(root->left, m, res);
    s += to_string(root->val);
    s += helper(root->right, m, res);
    s += ")";
    if (m[s] == 1)
        res.push_back(root);
    m[s]++;
    return s;
}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      vector<TreeNode *> res;
    unordered_map<string, int> m;
    helper(root, m, res);
    return res;  
    }
};