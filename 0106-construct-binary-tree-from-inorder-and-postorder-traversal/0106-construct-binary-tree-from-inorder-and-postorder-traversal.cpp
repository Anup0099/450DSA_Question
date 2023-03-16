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
    TreeNode *solve(vector<int> &inorder, vector<int> &postorder, int inStart, int inEnd, int postStart, int postEnd)
{
    if (inStart > inEnd || postStart > postEnd)
    {
        return NULL;
    }
    int rootVal = postorder[postEnd];
    TreeNode *root = new TreeNode(rootVal);
    int k = 0;
    for (int i = inStart; i <= inEnd; i++)
    {
        if (inorder[i] == rootVal)
        {
            k = i;
            break;
        }
    }
    root->left = solve(inorder, postorder, inStart, k - 1, postStart, postStart + k - (inStart + 1));
    root->right = solve(inorder, postorder, k + 1, inEnd, postStart + k - inStart, postEnd - 1);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int n = inorder.size();
    int inStart = 0, inEnd = n - 1;
    int postStart = 0, postEnd = n - 1;
    return solve(inorder, postorder, inStart, inEnd, postStart, postEnd);
    }
};