/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         while (root != NULL)
    {
        int curr = root->val;
        if (curr < p->val and curr < q->val)
        {
            root = root->right;
        }
        else if (curr > p->val and curr > q->val)
        {
            root = root->left;
        }
        else
        {
            return root;
        }
             
    
    }
        return 0;
    }
};