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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.size() == 0)
        return NULL;
    int max = *max_element(begin(nums), end(nums));
    int index = distance(begin(nums), find(begin(nums), end(nums), max));
    TreeNode *root = new TreeNode(max);
    vector<int> left(begin(nums), begin(nums) + index);
    vector<int> right(begin(nums) + index + 1, end(nums));
    root->left = constructMaximumBinaryTree(left);
    root->right = constructMaximumBinaryTree(right);
    return root;
    }
};