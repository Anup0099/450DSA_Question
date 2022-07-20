#include <bits/stdc++.h>
using namespace std;
// levelwise we have to find the right most node in each level.
//  first store root
//  1
//  /\
// 2 3
//  \ /
//  5   4
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void recursion(TreeNode *root, int level, vector<int> &res)
{
    if (root == NULL)
        return;
    if (res.size() < level)
        res.push_back(root->val);
    recursion(root->right, level + 1, res);
    recursion(root->left, level + 1, res);
}
vector<int> rightSideView(TreeNode *root)
{
    vector<int> res;

    recursion(root, 1, res);
    return res;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    vector<int> res = rightSideView(root);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}