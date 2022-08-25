#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : value(x), left(NULL), right(NULL) {}
};
int max_sum_helper(TreeNode *root, int &max_sum)
{
    if (root == NULL)
        return 0;
    int leftSum = max(0, max_sum_helper(root->left, max_sum));
    int rightSum = max(0, max_sum_helper(root->right, max_sum));
    max_sum = max(max_sum, leftSum + rightSum + root->value);
    return max(leftSum, rightSum) + root->value;
}
int maxPathSum(TreeNode *root)
{

    int max_sum = 0;
    max_sum_helper(root, max_sum);
    return max_sum;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << maxPathSum(root) << "\n";
    return 0;
}