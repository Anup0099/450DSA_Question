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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
    if (root == NULL)
        return result;
    queue<TreeNode *> q;
    q.push(root);
    bool lefttoright = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> currentlevel(size);
        for (int i = 0; i < size; i++)
        {
            TreeNode *currentnode = q.front();
            q.pop();
            int index = (lefttoright) ? i : (size - 1 - i);
            currentlevel[index] = currentnode->val;
            if (currentnode->left != NULL)
                q.push(currentnode->left);
            if (currentnode->right != NULL)
                q.push(currentnode->right);
        }
        // after this traversal
        lefttoright = !lefttoright;
        result.push_back(currentlevel);
    }
    return result;
    }
};