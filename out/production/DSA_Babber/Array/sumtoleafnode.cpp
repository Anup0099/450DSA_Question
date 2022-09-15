#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
long long ans = 0;
void dfs(TreeNode *root, int val)
{
    if (!root)
        return;
    val *= 10;
    val += root->val;
    if (!root->left && !root->right)
    {
        ans += val;
        return;
    }
    dfs(root->left, val);

    dfs(root->right, val);
}
int sumNumbers(TreeNode *root)
{
    int val = 0;
    dfs(root, val);
    return ans;
}
int main() {}