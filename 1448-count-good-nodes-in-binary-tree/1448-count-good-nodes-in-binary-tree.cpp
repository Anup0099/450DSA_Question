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
    void countnode(TreeNode *root,int &count,int maxi){
    if(root==NULL){
        return;
    }
    if(root->val>=maxi){
        count++;
        maxi=root->val;
    }
    countnode(root->left,count,maxi);
    countnode(root->right,count,maxi);
}
    int goodNodes(TreeNode* root) {
     if (root == NULL)
        return 0;
    int count = 0;
    int maxi = root->val;
    countnode(root, count, maxi);
    return count;
    }
};