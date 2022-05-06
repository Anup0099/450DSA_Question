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

bool isBSt(TreeNode *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->val > min && root->val < max)
    {
        bool left = isBSt(root->left, min, root->val);
        bool right = isBSt(root->right, root->val, max);
        return left && right;
    }

    else
    {
        return false;
    }
}
bool isValidBST(TreeNode *root)
{
    isBSt(root, LONG_LONG_MIN, LONG_LONG_MAX);
}
int main()
{
}