#include <bits/stdc++.h>
using namespace std;
// Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b.

// A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of
b.

    struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int dfs(TreeNode *root, int &ans, int mn, int mx)
{
    if (!root)
        return 0;
    mn = min(mn, root->val);
    mx = max(mx, root->val);
    ans = max(ans, mx - mn);
    dfs(root->left, ans, mn, mx);
    dfs(root->right, ans, mn, mx);
    return ans;
}

int maxAncestorDiff(TreeNode *root)
{
    int ans = 0;
    dfs(root, ans, INT_MAX, INT_MIN);
    return ans;
}